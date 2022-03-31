#include <iostream>

#include <time.h>

void insertionSort(int* mas, int n)
{
    unsigned long int money = 0, loly = 0;

    for (int j = 1; j < n; j++){
        int key = mas[j];
        int i = j - 1;
        loly++;
        while (i >= 0 && mas[i] > key){
            mas[i + 1] = mas[i];
            i--;
            loly++;
            money++;
        }
        mas[i + 1] = key;
    }
    if (n != 10) std::cout << "loly = " << loly << " money = " << money << "\n";
}
void invertSort(int* mas, int n){
    int max_idx;
    for (int i = 0; i < n - 1; i++)
    {
        max_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mas[j] > mas[max_idx])
            {
                max_idx = j;
            }
        }
        std::swap(mas[max_idx], mas[i]);
    }
}

int main()
{
    const int n1 = 10000, n2 = 20000, n3 = 30000, n4 = 40000, n5 = 50000;
    setlocale(0, "rus");
    srand(time(0));
    int mas[10], mas1[n1], mas2[n2], mas3[n3], mas4[n4], mas5[n5];
    std::cout << "Практическая работа №1\n";
    std::cout << "Заполните массив:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> mas[i];
    }
    std::cout << "Введённый массив:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << "\n";
    insertionSort(mas, 10);
    std::cout << "Результат сортировки:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << mas[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < n1; i++)
    {
        mas1[i] = rand();
    }
    for (int i = 0; i < n2; i++)
    {
        mas2[i] = rand();
    }
    for (int i = 0; i < n3; i++)
    {
        mas3[i] = rand();
    }

    for (int i = 0; i < n4; i++)
    {
        mas4[i] = rand();
    }

    for (int i = 0; i < n5; i++)
    {
        mas5[i] = rand();
    }
    std::cout << "**************************\nn1 = 10 000\nСредний случай\n";
    insertionSort(mas1, n1);
    std::cout << "Наилучший случай\n";
    insertionSort(mas1, n1);
    invertSort(mas1, n1);
    std::cout << "Наихудший случай\n";
    insertionSort(mas1, n1);
    std::cout << "**************************\nn2 = 20 000\nСредний случай\n";
    insertionSort(mas2, n2);
    std::cout << "Наилучший случай\n";
    insertionSort(mas2, n2);
    invertSort(mas2, n2);
    std::cout << "Наихудший случай\n";
    insertionSort(mas2, n2);
    std::cout << "**************************\nn3 = 30 000\nСредний случай\n";
    insertionSort(mas3, n3);
    std::cout << "Наилучший случай\n";
    insertionSort(mas3, n3);
    invertSort(mas3, n3);
    std::cout << "Наихудший случай\n";
    insertionSort(mas3, n3);
    std::cout << "**************************\nn4 = 40 000\nСредний случай\n";
    insertionSort(mas4, n4);
    std::cout << "Наилучший случай\n";
    insertionSort(mas4, n4);
    invertSort(mas4, n4);
    std::cout << "Наихудший случай\n";
    insertionSort(mas4, n4);
    std::cout << "**************************\nn5 = 50 000\nСредний случай\n";
    insertionSort(mas5, n5);
    std::cout << "Наилучший случай\n";
    insertionSort(mas5, n5);
    invertSort(mas5, n5);
    std::cout << "Наихудший случай\n";
    insertionSort(mas5, n5);
    system("pause");
    return 0;
}
