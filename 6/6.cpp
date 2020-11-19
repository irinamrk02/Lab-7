// 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include<ctime>

using namespace std;

int main()
{
    setlocale(0, "");
    int c;
    cout << "Введите число от 0 до 10: ";
    cin >> c;

    const int N = 2, M = 5;
    int a[N][M] = {};
    srand(time(NULL));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            a[i][j] = rand() % 10 + 1;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (a[i][j] < c)
            {
                a[i][j] = c;
               
            } 
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
   
}