 ## Класс полинома 
 
Я написал двумя способами реализацию полинома: 
- на основе [`std::vector<double>`](https://github.com/SerikovAleksey/Programs_sem/blob/main/SummerTraining/Polynomial.cpp), где индекс ячейки - это степень, а значение в ней - это коэффициент слагаемого.
- на основе [`std::map<int, double>`](https://github.com/SerikovAleksey/Programs_sem/blob/main/SummerTraining/Polynomial_2.0.cpp), где ключ - это степень, а значение по ключу - коэффициент слагаемого.


Возникли проблемы с выводом остатка от деления, не понял с чем это связано, поэтому при выводе результата операции деления выводится всё, кроме остатка.
