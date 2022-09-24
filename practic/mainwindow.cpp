#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
#include <iostream>
#include <string>
#include <complex.h>
using namespace std;


//_____________________Шаблон функции (Большие числа)______________________
template <typename T>
class BigIntegr
{
    //T a, b;

public:
    //BigInteger (T a, T b);
    T Sum(T a, T b)
    {
        return a+b;
    }
};

int main()
{
    cout << BigIntegr::Sum(4,5) << endl;
    //BigIntegr <int> Sum(2, 2);
    return 0;
}

//________________Перегрузка функции________________

int Sum (int a,int b,int c) //перегрузка функции "Sum"
{
    a++;
    return a+b+c;
}

int Sum (int a, int b)    //функция, но с целочисленными данными
{
    return a+b;
}

double Sum (double a, double b) //функция с двойной точностью (работает и с дробными)
{
    return a+b;
}
void main ()
{
    cout << Sum (5,6) << endl;
    cout << Sum (2.1,4.5) << endl;
    cout << (2,4,5) << endl;
}
//________________Шаблоны функций (Работа с разными типами данных)_________________________________________

template <typename T1, typename T2>
T1 Sum (T1 a,T2 b)
{
    return a+b;
}

void main ()
{
    cout << Sum (5.1,12) << endl;
}

//_________________Класс-шаблон с перегрузкой________________________________-

template <typename T>
T Sum (T a, T b)
{
    return a+b;
}

T Sub (T a,T b)
{
    return a-b;
}

//--------------Шаблон функции (Пример)-----------------------------
template <class Type> //шаблон функции
Type _min (Type a, Type b) {
    if (a>b) {
        return a;
    }
    return b;
}
