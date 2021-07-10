#include <iostream>
using namespace std;
//#define One
#define Two
void main()
{
	setlocale(LC_ALL, "ru");
#ifdef One
	int decimal; // 10 число, с клавиатуры.
	const int n = 32;
	int bin[n] = {}; // Хранит разряды двойчного числа(биты).
	cout << "Введите число: "; cin >> decimal;
	int i = 0;//битовый счетчик. Счетчик разрядов - считает биты двойчного числа.
	//for(Start;Stop;Step)....;
	//for(Counter;Condition;Expression)....;
	for (; decimal; decimal /= 2) bin[i++] = decimal % 2;
	//Выводим остаток на экран в обратном порядке.
	for (--i/*Убираем лишний бит перед первой итерацией.*/; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
	cout << sizeof(bin) << endl;
#endif // One

#ifdef Two
	int decimal;
	const int n = sizeof(int) * 2;	//1байт =2 Hex разряда.
	int hex[n] = {};
	cout << "Введите десятичное число:"; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 16) hex[i++] = decimal % 16;
	for (i--; i >= 0; i--)
	{
		cout << char(hex[i] + (hex[i] < 10 ? 48 : 55));
	}
	cout << endl;
#endif // Two
}