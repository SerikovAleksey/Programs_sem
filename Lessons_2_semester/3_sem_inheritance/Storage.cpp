class Storage
{
public:
    // Конструктор хранилища размерности n
    Storage(unsigned int n): size(n){
        array = new unsigned int[n];
    }

    // Добавьте нужный деструктор
    virtual ~Storage(){
        delete [] this->array;
    }

    // Получение размерности хранилища
    unsigned getSize(){
        return size;
    }

    // Получение значения i-го элемента из хранилища,
    // i находится в диапазоне от 0 до n-1,
    // случаи некорректных i можно не обрабатывать.
    int getValue(unsigned int i){
        return array[i];
    }

    // Задание значения i-го элемента из хранилища равным value,
    // i находится в диапазоне от 0 до n-1,
    // случаи некорректных i можно не обрабатывать.
    void setValue(unsigned int i, int value){
        array[i] = value;
    }

private:
    unsigned int size;
    unsigned int* array;
};