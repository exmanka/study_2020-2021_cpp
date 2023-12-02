#include <iostream>
using namespace std;

int main(){
    int day, month;
    cout << "Введите дату: \n";
    cin >> day >> month;
    switch(month){
        case 1:
                if(day>=1 && day<=19) cout << "Козерог";
                else cout << "Водолей";
            break;
        case 2: 
            if(day>=1 && day<=18) cout << "Водолей";
            else cout << "Рыбы";
            break;
        case 3:
            if(day>=1 && day<=20) cout << "Рыбы";
            else cout << "Овен";
            break;
        case 4: 
            if(day>=1 && day<=19) cout << "Овен";
            else cout << "Телец";
            break;
        case 5: 
            if(day>=1 && day<=20) cout << "Телец";
            else cout << "Близнецы";
            break;
        case 6: 
            if(day>=1 && day<=21) cout << "Близнецы";
            else cout << "Рак";
            break;
        case 7: 
            if(day>=1 && day<=22) cout << "Рак";
            else cout << "Лев";
            break;
        case 8: 
            if(day>=1 && day<=22) cout << "Лев";
            else cout << "Дева";
            break;
        case 9: 
            if(day>=1 && day<=22) cout << "Дева";
            else cout << "Весы";
            break;
        case 10: 
            if(day>=1 && day<=22) cout << "Весы";
            else cout << "Скорпион";
            break;
        case 11: 
            if(day>=1 && day<=22) cout << "Скорпион";
            else cout << "Стрелец";
            break;
        case 12: 
            if(day>=1 && day<=21) cout << "Стрелец";
            else cout << "Козерог";
            break;
    }
    return 0;
}
// Ким Михаил НФИбд-01-20