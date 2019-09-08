﻿// Systems.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a;
	cout << "Enter decimal number: ";
	vector<int> aVect;
	cin >> a;
	while (a!=0)
	{
		if ((a % 2) != 0) {
			aVect.push_back(1);
			a--;
		}
		else
		{
			aVect.push_back(0);
		}
		a /= 2;
	}
	cout << "In 2 system it will be: ";
	while (aVect.size()!=0)
	{
		cout << aVect.back();
		aVect.pop_back();
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
