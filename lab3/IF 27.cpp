#include <iostream>
using namespace std;

int main(){
     float x; 
     cout << "Введите x: ";
     cin >> x;
     int a;
     a = int(x);
     if (x<0) cout << "0";
     else if (a%2==0) cout << "1";
     else cout << "-1";
    return 0;
}

// Ким Михаил НФИбд-01-20