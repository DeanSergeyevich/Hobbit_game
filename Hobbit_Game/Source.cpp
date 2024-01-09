#include <iostream>
#include <string>
#include "Header.h"


using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	// Начальная настройка Хоббита
	Hobbit player = createHobbit();

	// Основной игровой цикл
	while(true)
	{
		cout << "\n=== Добро пожаловать, в Шир " << player.name << "! ===" << endl;
		cout << "1. Встретиться с соседями" << endl;
		cout << "2. Пойти на рынок" << endl;
		cout << "3. Выйти из игры" << endl;

		int choice; 
		cout << "Выберите действие (1, 2 или 3): " << endl;
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
			cout << "До свидания, " << player.name << "! спасибо за игру." << endl;
			return 0;
		default:
			cout << "Неправильный выбор. Попробуйте ещё раз." << endl;
			break;
		}
			
	}
	return 0;
}