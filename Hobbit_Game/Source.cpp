#include <iostream>
#include <string>
#include "Header.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	// ��������� ��������� �������
	Hobbit player = createHobbit();

	// �������� ������� ����
	while(true)
	{
		cout << "\n=== ����� ����������, � ��� " << player.name << "! ===" << endl;
		cout << "1. ����������� � ��������" << endl;
		cout << "2. ����� �� �����" << endl;
		cout << "3. ����� �� ����" << endl;

		int choice; 
		cout << "�������� �������� (1, 2 ��� 3): " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			interactWithNeighbors(player);
			break;

		case 2:
			goToMarket(player);
			break;
		case 3:
			cout << "�� ��������, " << player.name << "! ������� �� ����." << endl;
			return 0;
		default:
			cout << "������������ �����. ���������� ��� ���." << endl;
			break;
		}
			
	}
	return 0;
}