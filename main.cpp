#include <iostream>
using namespace std;




/* Задание 1
void Sort(int list[], int S)
{
    int i, j, l, n;
    int index, FarLft_index, FarRgt_index;
    int key, val1, val2;

    for (i = 0; i < S; i++)
    {
        if (list[i] < 0)
        {
            FarLft_index = i;
            val1 = list[i];
            break;
        }
    }
    for (j = S - 1; j > 0; j--)
    {
        if (list[j] < 0)
        {
            FarRgt_index = j;
            val2 = list[j];
            break;
        }
    }

    for (l = FarLft_index + 1; l < FarRgt_index; l++)
    {
      
        index = l;
        key = list[l];
    
        for (n = l; n < FarRgt_index; n++)
        {
            if (list[n] > key)
            {
                index = n;
                key = list[n];
            }
        }
        if (index != l)
        {
            list[index] = list[l];
            list[l] = key;
        }
    }
}


int main()
{
    srand(time(NULL));
    setlocale(0, "RUS");

    const int size = 10;
    int arr[size];


    for (int i = 0; i < size; i++)
    {
        arr[i] = -20 + rand() % 40;
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    Sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}






Задание 2
void First_Func(int list[], int S)
{
    int j;
    for (int i = 0; i <= S; i++)
    {
        j = rand() % S;

        int res = list[i];
        list[i] = list[j];
        list[j] = res;
    }
    cout << "\n";
}

void Second_Func(int list[], int S, int position)
{
    for (int i = 0; i <= position; i++)
    {
        int index = i;
        int key = list[i];

        for (int j = i + 1; j <= position; j++)
        {
            if (list[j] > key)
            {
                index = j;
                key = list[j];
            }
        }
        if (index != i)
        {
            list[index] = list[i];
            list[i] = key;
        }
    }

    for (int l = position; l <= S; l++)
    {
        int index = l;
        int key = list[l];

        for (int n = l + 1; n <= S; n++)
        {
            if (list[n] < key)
            {
                index = n;
                key = list[n];
            }
        }
        if (index != l)
        {
            list[index] = list[l];
            list[l] = key;
        }
    }
}



int main()
{
    srand(time(NULL));
    setlocale(0, "RUS");


    const int size = 19;
    int RandNum = rand() % 19;
    int index;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    cout << "\n\n";
    cout << "Случайное число: " << RandNum << "\n";

    First_Func(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        if (RandNum == arr[i])
        {
            index = i;
            cout << "Индекс случайного числа:" << i;
        }
    }

    Second_Func(arr, size, index);

    cout << "\n\n";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}*/
