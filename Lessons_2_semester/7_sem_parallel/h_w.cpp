#include <iostream>
#include <numeric>
#include <vector>
#include <thread>
#include <random>
#include <chrono>
#include <algorithm>

// 1. Проверить размер. Если он мал, то не распараллеливаем.
// 2. Определить количество исполнителей -- спросить у ОС.
// 3. Распределить данные между исполнителями.
// 4. Запустить исполнение.
// 5. Собрать ответы.

// Функция, которую будем передавать в потоки.
// Мы не можем получить оттуда возвращаемое значение через return,
// поэтому будем записывать его в переменную result по ссылке
template <typename Iterator, typename T>
void accumulate_wrapper(Iterator begin, Iterator end, T init, T& result) {
    result = std::accumulate(begin, end, init);
}

template <typename Iterator, typename T>
T parallel_accumulate(Iterator begin, Iterator end, T init,  T n) {
    // Размер диапазона
    auto size = std::distance(begin, end);
    // Количество исполнителей
//    auto num_workers = std::thread::hardware_concurrency();
    // Проверяем, нужно ли распараллеливать
    if (size < 30) {
        return std::accumulate(begin, end, init);
    }
    // Распараллеливать всё-таки нужно, тогда:
    // Считаем количество данных на одного исполнителя
    auto size_per_worker = size / n;
    // Создаём два вектора: с потоками и для записи результатов
    std::vector<std::thread> threads;
    std::vector<T> results(n - 1);
    // Распределяем данные и запускаем потоки
    // (на 1 меньше максимума, так как ещё есть основной поток).
    for(auto i = 0u; i < n - 1; i++) {
        threads.push_back(std::thread(accumulate_wrapper<Iterator, T>,
                                      std::next(begin, i * size_per_worker), // сдвиг begin
                                      std::next(begin, (i + 1) * size_per_worker), // сдвиг begin
                                      0, // init
                                      std::ref(results[i]))); // для записи результата
    }
    // Производим расчёт и в основном потоке (с учётом переданного init)
    auto main_result = std::accumulate(
            std::next(begin,(n - 1)*size_per_worker),
            end, init);

    // Ждём, пока остальные потоки завершат работу
    for(auto& thread: threads) {
        thread.join();
    }
    // Собираем все вычисленные результаты
    return std::accumulate(std::begin(results),
                           std::end(results), main_result);
}

int main() {
    // Считаем сумму чисел от 0 до 99
    std::vector<int> sequence(100);
    std::iota(std::begin(sequence), std::end(sequence), 0);
    std::cout << parallel_accumulate(std::begin(sequence),
                                     std::end(sequence),
                                     0, 10);


    // TODO: Сгенерируйте вектор случайных чисел,
    // используя инструментарий из библиотеки random,
    // и вычислите их сумму с помощью функции
    // parallel_accumulate.

//    auto time = std::chrono::steady_clock::now().time_since_epoch().count();
//    auto gen = std::mt19937_64(time);
//    auto dis = std::uniform_int_distribution(0, 100);
//    std::vector<int> num;
//    std::generate_n(std::back_inserter(num),50, [&dis, &gen](){return dis(gen);});
//
//    auto sum =parallel_accumulate(std::begin(num), std::end(num), 0, 1);
//    std::cout << std::endl;
//    std::cout << "Sum is "<<sum;
}