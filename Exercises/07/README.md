# Упражнение 7 - Функции

## Задача 1

Напишете следните функции:

* Функция с прототип `int max(int, int)`, която приема като аргументи две цели числа и връща по-голямото от тях
* Функция с прототип `int max(int, int, int, int, int)`, която приема като аргументи пет цели числа и връща по-голямото от тях

`Пример:`

    max(1, 20) => 20
    max(1, 20, 25, -10 , 3) => 25

[Решение](Task1.cpp)

## Задача 2

Напишете функция с прототип `int invert(int)`, която инвертира цяло число - от дадено число получава ново число, в което цифрите са в обратен ред

`Пример:`

    invert(431254) => 452134

[Решение](Task2.cpp)

## Задача 3

* Функция с прототип `int abs(int)`, която приема като аргумент цяло число и връща като резултат неговата абсолютна стойност
* Функция с прототип `double rectanglePerimeter(double, double)`, която която приема 
като аргумент страните на правоълник и връща неговият периметър
* Функция с прототип `double circleArea(double)`, която приема като аргумент радиус на окръжност и връща неговото лице
* Функция с прототип `double pow(double number, double power)`, която приема
като аргументи число и степен на която да бъде повдигнато и връща като
резултат числото(number) повдигнато на дадената степен (power)
* Функция с прототип `double distance(int x1, int y1, int x2, int y2)`, която приема
като аргументи координатите на две точки и връща дължината на отсечката определена от тях
* Функция с прототип bool `isTriangle(double, double, double)`, която приема като аргументи
страните на един триъгълник и връща като резултат стойност истина, когато съществува такъв
триъгълник и стойност лъжа, когато не съществува такъв триъгълник

`Пример:`
    
    abs(-23) => 23
    rectanglePerimeter(10, 20) => 60
    circleArea(5) => 78.5
    pow(2, 5) => 32
    distance(3, 2, 9, 7) => 7,8102
    isTriangle(3, 4, 9) => false

[Решение](Task3.cpp)

## Задача 4

Напишете функция с прототип `void toBinary(int)`, която приема като аргумент цяло число
и изпечатва в конолата числото в двоична бройна система

`Пример:`

    toBinary(15) => 00000000 00000000 00000000 00001111

[Решение](Task4.cpp)

## Задача 5
Напишете функция с прототип `void reverse(int x[], int size)`, който инвертира елементите
на едномерен масив x с размер size

`Пример:`

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(array, 10); => array = {10, 9 , 8, 7, 6, 5, 4, 3, 2, 1}
    
[Решение](Task5.cpp)

## Задача 6

Напишете функция с прототип `int numberOfDays(int month, int year)`, която приема като аргументи
месец и година и връща като резултат, броят на дните за този месец

`Пример:`

    numberOfDays(2, 2016) => 29
    
[Решение](Task6.cpp)

## Задача 7
Напишете функция с прототип 
`int flightTime(int hourDepart, int minuteDepart, int hourArrive, int minutArrive)`, която приема като
аргументи час и мунити на излитане и кацане на един самолет, пресмята и връща времетраенето на полета
в минути. Приемаме, че полетът е извършен в рамките на едно денонощие

`Пример:`
   
    flightTime(12, 10, 14, 0) => 110

[Решение](Task7.cpp)