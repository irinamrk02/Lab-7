// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(0, "");

	const int N = 3, M = 5;
	srand(time(NULL));
	int a[N][M];

	for (int i = 0; i < N; ++i) 
	{
		for (int j = 0; j < M; ++j)
		{
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i == j) 
			sum += a[i][i];
		}
	}
	cout << "Сумма элементов главной диагонали = " << sum << endl;
	return 0;
}