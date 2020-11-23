#include <iostream>
using namespace std;

int main(){
     int x;
     cout << "Введите x: ";
     cin >> x;
     if (x==0) cout << "Нулевое число";
     else if (x>0){
         cout << "Положительное ";
         if (x%2==0) cout << "четное число";
         else cout << "нечетное число";
     }
     else{
         cout << "Отрицательное ";
         if (x%2==0) cout << "четное число";
         else cout << "нечетное число";
     }
    return 0;
}

// Ким Михаил НФИбд-01-20