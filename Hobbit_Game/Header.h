#pragma once

#include <iostream>
#include <string>

using namespace std;

// Объявление структуры для представления Хоббита
struct Hobbit
{
	string name;
	int age;
	int gold;
};

// Функция для начальной настройки Хоббита
Hobbit createHobbit()
{
	Hobbit hobbit;
	cout << "Введите имя Хоббита: ";
	getline(cin, hobbit.name);
	cout << "Введите возраст Хоббита: ";
	cin >> hobbit.age;
	hobbit.gold = 10; // Начальное количество золота
	return hobbit;
}

void interactWithNeighbors(Hobbit & hobbit)
{
	cout << "Вы встречаете соседа и приветствуйте друг друга.  Что вы хотите сделать?" << endl;
	cout << "1. Заставить соседа наконец вернуть долг" << endl;
	cout << "2. Спросить о последних новостях" << endl;

	int choice;
	cout << "Выберите действие (1 или 2): ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "Сосед нехотя достает поношеный кошелёк, открывает его, достаёт несколько золотых, затем нехотя протягивает руку с золотом вам " << endl;
		hobbit.gold += 4;
    }else if (choice == 2)
	{
		cout << "Сосед рассказывает вам о последних событиях в деревне." << endl;
	}else
	{
		cout << "Неправильный выбор. Сосед смотрит на вас с недоумением." << endl;
	}

}

// Функция для похода на рынок
void goToMarket(Hobbit & hobbit)
{
	cout << "Вы решаете отправится на рынок. У вас есть " << hobbit.gold << " золота. " << endl;
	cout << "Что вы хотите купить?" << endl;
	cout << "1. Хлеб" << endl;
	cout << "2. Морковь" << endl;
	cout << "3. Ничего" << endl;

	int choice;
	cout << "Выберите действие (1, 2 или 3): ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "Вы покупаете Хлеб на рынке. Ваш запас хлеба пополнился." << endl;
		hobbit.gold -= 5; // Потратили 5 золота на еду
	}else if (choice == 2)
	{
		cout << "Вы покупаете Морковь на рынке. Ваш запас моркови пополнился." << endl;
		hobbit.gold -= 7; // Потратили 7 золота на еду
	}else if (choice == 3)
	{
		cout << "Вы решаете ничего не покупать. Возможно, в следующий раз." << endl;
	}else 
	{
		cout << "Неправильный выбор. Торговец смотрит на вас с недоумением." << endl;
	}
}