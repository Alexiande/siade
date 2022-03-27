#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string lol_1, lol_2;
    cout << "Введите 1 большое и 2 большое число:\n";
    cin >> lol_1 >> lol_2;
    int len1 = lol_1.length();
    int len2 = lol_2.length();

    char mas1[101], mas2[101];
    int mas3[101], mas4[101];

    for (int i = 0; i < len1; i++)
    {
        strcpy(mas1, lol_1.c_str());
        int ia = mas1[i] - '0';
        mas3[i] = ia;
    }

    for (int i = 0; i < len2; i++)
    {
        strcpy(mas2, lol_2.c_str());
        int ia = mas2[i] - '0';
        mas4[i] = ia;
    }

    int length;
    if (len1 > len2)
        length = len1 + 1;
    else
        length = len2 + 1;

    for (int ix = 0; ix < length; ix++)
    {
        mas4[ix] += mas3[ix];
        mas4[ix + 1] += (mas4[ix] / 10);
        mas4[ix] %= 10;
    }

    if (mas4[length - 1] == 0)
        length--;

    for (int i = 0; i < len2; i++)
    {
        cout << mas4[i];
    }

    return 0;
}
