#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
#include <stdexcept>
#include <memory>
#include <vector>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;







int main(){
    setlocale(LC_ALL, "RU");

    int a, b;
    int Sum = 0;
    string info, nazat;
    double chocolate = 45.99;
    double milk = 80.0;
    double coffee = 145.50;

    cout << "Магазин 24" << endl;
    cout << "1: какие товары есть в нашем магазине" << endl;
    cout << "2: цены товаров" << endl;
    cout << "3: корзина" << endl; 
    cout << "4: оплата" << endl;
    cout << "назовите цифру: ";
    cin >> a;

    if(a == 1){
        cout << "1)chocolate: " << chocolate << endl << "2)milk: " << milk << endl << "3)coffee: " << coffee << endl << endl;
        cout << "инфа вернуться назат" << endl;
        cin >> b;
        if(b == 1){
            cout << "отлично вы взяли шоколадку" << endl;
            Sum += 45.99;
        }
    
        if(b == 2){
            cout << "отлично вы взяли молоко" << endl;
            Sum += 80.0;
        }

        if(b == 3){
            cout << "отлично вы взяли коффе" << endl;
            Sum += 145.50;
        }
    }

    if(a == 4){
        cout << "Сумма покупок: " << Sum << endl;
        cout << "спасибо за покупку!" << endl;
    }


    if(info == "инфа"){
        cout << "Магазин 24" << endl;
        cout << "1: какие товары есть в нашем магазине" << endl;
        cout << "2: цены товаров" << endl;
        cout << "3: корзина" << endl; 
        cout << "4: оплата" << endl;
        cin >> a;
    }



    

    return 0;
}
