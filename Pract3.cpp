// Pract3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>;
#include <math.h>
//Вариант 11
//Задание 1 
//x = 4 ln(y^3) – z / t при t = 2; z = 3; y = cos(t + z).
#define firstTaskT 2
#define firstTaskZ 3
#define firstTaskY cos(firstTaskT+firstTaskZ)
#define firstTaskX 4*log(pow(firstTaskY,3))-firstTaskZ/firstTaskT

//Задание 2
//Составить программу для вычисления b = f(x, y, z),
// где z = wf(x, y) при постоянных значениях x и y.
// f(x, y, z) = cos^2(z) + (| x + y |)^3
// w(x, y) = 12 / (x + e^y)
// x= -2,75
// y= -1,42
#define SecondTaskX -2.75 
#define SecondTaskY -1.42
#define SecondTaskZ 12/(SecondTaskX+pow(M_E,SecondTaskY))
#define SecondTaskB pow(cos(SecondTaskZ),2) + pow(fabs(SecondTaskY+SecondTaskX),3)

//Задание 3
// Составить программу вычисления значения функции,
// без использования директив препроцессора.
double ThirdTask(double angle)
{
    return 4 * cos(angle / 2) * cos((5 * angle) / 2) * cos(4 * angle);
}

int main()
{
    setlocale(LC_ALL,"Rus");
    std::cout << "Первая задача " << firstTaskX << std::endl;
    std::cout << "Вторая задача (часть 1) " << SecondTaskZ << std::endl;
    std::cout << "Вторая задача (часть 2) " << SecondTaskB << std::endl;
    std::cout << "Третья задача (угол 0 рад.) " << ThirdTask(0) << std::endl;
    std::cout << "Третья задача (угол 1 рад.) " << ThirdTask(1) << std::endl;
    std::cout << "Третья задача (угол 2 рад.) " << ThirdTask(2) << std::endl;
    return 0;
}


