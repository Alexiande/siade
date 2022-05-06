#include <iostream>
using namespace std;

int main()
{
    int n; int m;int a;int b;
    //n-конвееры m-рабочие
    cout<<"Введите количетсво конвееров:\n";
    cin >> n;
    cout<<"Введите рабочих:\n"; cin >>m;
    if (n>m)
    {
        cout<<"Работы идут очень медленно,хочешь добавить рабочих?\n";
        cin>>a;
        switch (a) {
            case 1:
                cout<<"Введите количество новых рабочих\n";
                cin>>b;
                m+=b;
                if (b=0){
                    cout<<"Ты ничего не изменил";
                }
                else{
                    cout<<"Стало больше рабочих:"<<m<<"\nТеперь работы ускорились";
                }
              break;
            case 2:
                cout<<"Ты ничего не изменил";
              break;
            default:
                cout<<"Ничего";
              break;
            }
    }
    if (m>n){
        cout<<"Очень много рабочих,но кого это волнует,хочешь еще конвееров?\n";
        cin>>a;
        switch (a) {
            case 1:
                cout<<"Введите количество конвееров\n";
                cin>>b;
                n+=b;
                if (b=0){
                    cout<<"Ты ничего не изменил";
                }
                else{
                    cout<<"Стало больше конвееров:"<<n<<"\nТеперь работы ускорились";
                }
              break;
            case 2:
                cout<<"Ты ничего не изменил";
              break;
            default:
                cout<<"Ничего";
              break;
            }
    }
    else{
        cout<<"Стабильность";
    }
}