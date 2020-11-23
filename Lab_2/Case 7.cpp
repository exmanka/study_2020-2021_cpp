#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int K;
    float weight;
    cout << "Введите номер единицы измерения и массу тела: ";
    cin >> K;
    cin >> weight;
    switch(K){
        case 1:
            cout << "Масса тела: " << weight << " килограмм.";
            break;
        case 2:
            cout << "Масса тела: " << weight/pow(10,6) << " килограмм.";
            break;
        case 3: 
            cout << "Масса тела: " << weight/pow(10,3) << " килограмм.";
            break;
        case 4:
            cout << "Масса тела: " << weight*pow(10,3) << " килограмм.";
            break;
        case 5:
            cout << "Масса тела: " << weight*pow(10,2) << " килограмм.";
            break;
            
    }
    return 0;
}

// Ким Михаил НФИбд-01-20