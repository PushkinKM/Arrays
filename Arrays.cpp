#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

	const int SIZE = 5;
	int arr[SIZE] = {3,5,8};
	cout << int() << endl;// Возвращает значение по умолчанию
	for (int i = 0; i < SIZE; i++)//Выводим элементы массива на экран
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "Введите значения элементов массива: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];//Вводим значение текущего элемента
	//Вывод массива на экран в обратном порядке
	}
		for (int i = SIZE-1; i >= 0; i--)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	
}	