// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
#include <ctime>

int main()
{
	setlocale(0, "");

	const int N = 2, M = 5;
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

	int max = a[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	cout << "Наибольший элемент двумерного массива = " << max << endl;
}