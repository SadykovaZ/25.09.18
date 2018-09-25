// DZ_25.09.18.cpp: определяет точку входа для консольного приложения.
//

//макросы или препроцессоры однострочная функция

#include<iostream>
#include<bitset>
#include<ctime>
#include<cmath>
//#define MY_INTEGER
//#define MY_DOUBLE
//#define MY_CHAR
#include"function1.h"
//#define N 100
//#define pi 3.12
//#define max(a,b)(a>b)
//#define str "Hello"
//#define flag true
//#define sum(a,b)(a+b)
#define min(a,b)(a<b?a:b)
#define max(a,b)(a>b?a:b)
#define inSq(a)(a*a)

#define power(a,n)(pow(a,n))

#define isEven(a)(a%2==0)
#define isOdd(a)(a%2!=0)
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cout << "Введите номер задания: ";
	cin >> n;
	if (n == 1)
	{
		cout << "1.С помощью директивы #define написать следующие макросы: " << endl;
		int a = 2, b = 7;
		cout << "а) нахождение меньшего из двух чисел;" << endl;
		cout << min(a, b) << endl;
		cout << "b) нахождение большего из двух чисел;" << endl;
		cout << max(a, b) << endl;
		cout << "c) возведение числа в квадрат;" << endl;
		cout << inSq(a) << endl;
		cout << "d) возведение числа в степень;" << endl;
		cout << power(a, b) << endl;
		cout << "e) проверка числа на четность;" << endl;
		cout << isEven(a) << endl;
		cout << "f) проверка числа на нечетность;" << endl;
		cout << isOdd(a) << endl;
	}
	else if (n == 2)
	{
		cout << "2.Создать проект в котором :" << endl;
		int a[10];
		double b[8];
		char c[5];
#ifdef MY_INTEGER
		fillInt(a, 10);
		PrintInt(a, 10);
#endif 

#ifdef MY_DOUBLE
		fillDouble(b, 8);
		PrintDouble(b, 8);
#endif 

#ifdef MY_CHAR
		fillChar(c, 5);
		PrintChar(c, 5);
#endif 


	}
	

	system("pause");
	return 0;
}

