#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	int n;
	int i;
	const int SIZE = 10; // Объявляем массив
	int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10}; // Инициализируем элементы массива
	cout << endl << "  " << "Выводим исходный массив на экран: \n" << endl;
	for (i = 0; i < SIZE; i++)//Выводим элементы массива на экран
	{		
		cout << "  " << arr[i] << tab;
	}
	cout << "\n" << endl;
	cout << "  Введите число на сколько элементов сдвинуть массив: \n"; 
	cout << endl << "  "; cin >> n; cout << endl;
	if (n == 0)
	{
		for (i = 0; i < 10; i++) cout << "  " << arr[i] << tab; cout << endl;// Если массив не сдвигаем
	}
	else if (n != 0) // Сдвигаем массив на заданное число
	{
		cout << "  Сдвигаем массив на " << n << " влево: \n"; cout << endl;
		for (i = n; i < 10; i++) cout << "  " << arr[i] << tab;
		for (i = 0; i < n; i++)	cout << "  " << arr[i] << tab;
		cout << "\n" << endl;
		cout << "  Сдвигаем массив на " << n << " вправо: \n"; cout << endl;
		for (i = n; i >= 0; i--)	cout << "  " << arr[i] << tab;
		for (i = 1; i < 10-n; i++) cout << "  " << arr[i] << tab;
	}
	cout << endl;
}	