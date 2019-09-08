// Systems.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <conio.h>
#include <math.h>
using namespace std;

void convertor(vector<int>& ,int, int);

int main()
{
	char answer;
	do
	{
		cout << "You want to convert from decimal or to decimal?(f,t): ";
		cin >> answer;
		switch (answer)
		{
		case 'f': {
			int a, sign;
			cout << "Enter decimal number: ";
			vector<int> aVect;
			cin >> a;
			cout << "Enter in which system do you want to convert(2, 8, 16): ";
			cin >> sign;

			convertor(aVect, a, sign);

			cout << "In " << sign << " system it will be: ";
			while (aVect.size() != 0)
			{
				if (aVect.back() < 10)
				{
					cout << aVect.back();
					aVect.pop_back();
				}
				else
				{
					char b = 'A';
					b -= (10 - aVect.back());
					cout << b;
					aVect.pop_back();
				}

			}}
			break;

		case 't':
			cout << "Enter from which system you want to convert(2, 8, 16): ";
			int sign1, endy;
			endy = 0;
			cin >> sign1;
			deque<char> Data;
			cout << "Enter number: ";
			char my;
			do
			{
				my=_getche();
				Data.push_back(my);
			} while (my!='\r');
			Data.pop_back();
			while (Data.size()!=0)
			{
				if (Data.front()>='A')
				{
					endy += pow(sign1, Data.size()-1)*(Data.front()-'A'+10);
				}
				else
				{
					endy += pow(sign1, Data.size() - 1) * (Data.front() - '1' + 1);
				}
				Data.pop_front();
			}
			cout << endl;
			cout << "Your number is " << endy;
			break;
		//default:
			//break;
		}
		cout << "\nContiue?(y,n): ";
		cin >> answer;
	} while (answer !='n');
	return 0;
}

void convertor(vector<int>& aVect, int a, int sign) {
	while (a != 0)
	{
		if ((a % sign) != 0) {
			aVect.push_back(a%sign);
			a=a-(a%sign);
		}
		else
		{
			aVect.push_back(0);
		}
		a /= sign;
	}
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
