#pragma once

#include <iostream>
#include <string>

using namespace std;

// ���������� ��������� ��� ������������� �������
struct Hobbit
{
	string name;
	int age;
	int gold;
};

// ������� ��� ��������� ��������� �������
Hobbit createHobbit()
{
	Hobbit hobbit;
	cout << "������� ��� �������: ";
	getline(cin, hobbit.name);
	cout << "������� ������� �������: ";
	cin >> hobbit.age;
	hobbit.gold = 10; // ��������� ���������� ������
	return hobbit;
}

void interactWithNeighbors(Hobbit & hobbit)
{
	cout << "�� ���������� ������ � ������������� ���� �����.  ��� �� ������ �������?" << endl;
	cout << "1. ��������� ������ ������� ������� ����" << endl;
	cout << "2. �������� � ��������� ��������" << endl;

	int choice;
	cout << "�������� �������� (1 ��� 2): ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "����� ������ ������� ��������� ������, ��������� ���, ������ ��������� �������, ����� ������ ����������� ���� � ������� ��� " << endl;
		hobbit.gold += 4;
    }else if (choice == 2)
	{
		cout << "����� ������������ ��� � ��������� �������� � �������." << endl;
	}else
	{
		cout << "������������ �����. ����� ������� �� ��� � �����������." << endl;
	}

}

// ������� ��� ������ �� �����
void goToMarket(Hobbit & hobbit)
{
	cout << "�� ������� ���������� �� �����. � ��� ���� " << hobbit.gold << " ������. " << endl;
	cout << "��� �� ������ ������?" << endl;
	cout << "1. ����" << endl;
	cout << "2. �������" << endl;
	cout << "3. ������" << endl;

	int choice;
	cout << "�������� �������� (1, 2 ��� 3): ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "�� ��������� ���� �� �����. ��� ����� ����� ����������." << endl;
		hobbit.gold -= 5; // ��������� 5 ������ �� ���
	}else if (choice == 2)
	{
		cout << "�� ��������� ������� �� �����. ��� ����� ������� ����������." << endl;
		hobbit.gold -= 7; // ��������� 7 ������ �� ���
	}else if (choice == 3)
	{
		cout << "�� ������� ������ �� ��������. ��������, � ��������� ���." << endl;
	}else 
	{
		cout << "������������ �����. �������� ������� �� ��� � �����������." << endl;
	}
}