#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

	const int SIZE = 5;
	int arr[SIZE] = {3,5,8};
	cout << int() << endl;// ���������� �������� �� ���������
	for (int i = 0; i < SIZE; i++)//������� �������� ������� �� �����
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << "������� �������� ��������� �������: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];//������ �������� �������� ��������
	//����� ������� �� ����� � �������� �������
	}
		for (int i = SIZE-1; i >= 0; i--)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	
}	