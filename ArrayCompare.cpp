#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n; 
    cout << "Введите длину массива\n";
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "Введите значение для ячейки " << i << endl;
        cin >> a[i];
    }

    int i = 0;
    while (i < n-1)
    {
        if (a[i] < a[i + 1])
            i++;
        else
        {
            i = 0;
            break;
        }
    }

    if (i != 0)
        cout << "Каждый элемент заданного массива больше предыдущего\n";
    else
        cout << "Не аждый элемент заданного массива больше предыдущего\n";
    return 0;
}


