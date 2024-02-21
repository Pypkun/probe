#include <iostream>

using namespace std;

// class Car;
// class Person{
// private:
//     string name;
//     int age;
// public:
//     Person(string name, int age){
//         this->age = age;
//         this->name = name;
//     }
//     friend void info_car(Car &car, Person &person);
// };

// class Car{
// private:
//     string name;
// public:
//     Car(string name){
//         this->name = name;
//     }
//     friend void info_car(Car &car, Person &person);
// };

// void info_car(Car &car, Person &person){
//     cout << "Человек с именем:" << person.name << " имеет машину:" << car.name << " и ему: " << person.age << endl;
// }


int main(){
    setlocale(LC_ALL, "RU");

    // Car bmw(" BMW");
    // Person jhon("Jhon", 20);

    // info_car(bmw, jhon);


    srand(time(NULL));
    bool alreadlyThere;
    const int SIZE = 10;
    int arr[SIZE];

    for(int i = 0; i < SIZE;){
        alreadlyThere = false;
        int newRandomValue = rand() % 20;

        for(int j = 0; j < i; j++){
            if(arr[j] == newRandomValue){
                alreadlyThere = true;
                break;
            }
        }
        if(alreadlyThere != true){
            arr[i] = newRandomValue;
            i++;
        }
        
    }
    for(int i = 0; i < SIZE; i++)
        cout << arr[i] << endl;

    int minValue;

    for(int i = 0; i < SIZE; i++){
        if(arr[i] < minValue)
            minValue = arr[i];
    }
    
    cout << "минимальное число: " << minValue;




















return 0;

}