#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	int n;
	int i;
	const int SIZE = 10; // ��������� ������
	int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10}; // �������������� �������� �������
	cout << endl << "  " << "������� �������� ������ �� �����: \n" << endl;
	for (i = 0; i < SIZE; i++)//������� �������� ������� �� �����
	{		
		cout << "  " << arr[i] << tab;
	}
	cout << "\n" << endl;
	cout << "  ������� ����� �� ������� ��������� �������� ������: \n"; 
	cout << endl << "  "; cin >> n; cout << endl;
	if (n == 0)
	{
		for (i = 0; i < 10; i++) cout << "  " << arr[i] << tab; cout << endl;// ���� ������ �� ��������
	}
	else if (n != 0) // �������� ������ �� �������� �����
	{
		cout << "  �������� ������ �� " << n << " �����: \n"; cout << endl;
		for (i = n; i < 10; i++) cout << "  " << arr[i] << tab;
		for (i = 0; i < n; i++)	cout << "  " << arr[i] << tab;
		cout << "\n" << endl;
		cout << "  �������� ������ �� " << n << " ������: \n"; cout << endl;
		for (i = n; i >= 0; i--)	cout << "  " << arr[i] << tab;
		for (i = 1; i < 10-n; i++) cout << "  " << arr[i] << tab;
	}
	cout << endl;
}	