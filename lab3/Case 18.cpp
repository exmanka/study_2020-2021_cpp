#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Введите число: ";
    cin >> num;
    switch(num/100){
        case 1:
            cout << "сто ";
            break;
        case 2:
            cout << "двести ";
            break;
        case 3:
            cout << "триста ";
            break;
        case 4:
            cout << "четыреста ";
            break;
        case 5:
            cout << "пятьсот ";
            break;
        case 6:
            cout << "шестьсот ";
            break;
        case 7:
            cout << "семьсот ";
            break;
        case 8:
            cout << "восемьсот ";
            break;
        case 9:
            cout << "девятьсот ";
            break;
    }
    switch(num%100/10){
        case 1:
            cout << "десять ";
            break;
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;
    }
    switch(num%10){
        case 1:
            cout << "один";
            break;
        case 2:
            cout << "два";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четыре";
            break;
        case 5:
            cout << "пять";
            break;
        case 6:
            cout << "шесть";
            break;
        case 7:
            cout << "семь";
            break;
        case 8:
            cout << "восемь";
            break;
        case 9:
            cout << "двеять";
            break;
    }
    return 0;
}
// Ким Михаил НФИбд-01-20