#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;


// template<class T>
// class Arrays{
// private:
//     int len;
//     T *arr;
// public:
//     Arrays(T *a, int len){
//         this->len = len;
//         arr = new T[len];
//         for(int i = 0; i < len; i++)
//             *(arr + i) = *(a + i);
//     }

//     void get(){
//         for(int i = 0; i < len; i++)
//             cout << *(arr + i) << " ";

//         cout << endl;
//     }

//     ~Arrays(){
//         delete[] arr;
//     }
// };











// template <typename T, typename T2>
// void print_arr(T *arr, T2 len){
//     for(T2 i = 0; i < len; i++)
//         cout << *(arr + i) << " ";

//     cout << endl;
// }   




// class PC{
// protected:
//     int diagonal;
//     string os;
// public:
//     PC(int diagonal, string os){
//         this->diagonal = diagonal;
//         this->os = os;
//     }
//     void get_info(){
//         cout << "OS:" << os << " Diagonal:" << diagonal;
//     } 
// };

// class Laptop: public PC{
// private:
//     float weight;
// public: 
//     Laptop(int diagonal, string os, float weight): PC(diagonal, os){
//         this->diagonal = diagonal;
//         this->weight = weight;
//     }
//     void get_info(){
//         PC::get_info();
//         cout << " Weight:" << weight << endl;
//     } 
// };



// class Person;
// class Dog{
// private:
//     int health = 100;
// public:
//     friend class Person;
// };

// class Person{
// public:
//     void Damage(Dog &dog){
//         dog.health -= 20;
//         cout << "Health if animal " << dog.health << endl;
//     }

//     void Health(Dog &dog){
//         dog.health += 10;
//         cout << "Health of animal " << dog.health << endl;
//     }

//     void Kill(Dog &dog){
//         dog.health = 0;
//         cout << "Health of animal " << dog.health << endl;
//     }
// };



class Car;
class Person{
private:
    int age;
    string name;
public:
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    friend void info_car(Car &car, Person &person);
};

class Car{
private:
    string name;
public:
    Car(string name){
        this->name = name;
    }
    friend void info_car(Car &car, Person &person);
};

void info_car(Car &car, Person &person){
    cout << "Человек с именем:" << person.name << " имеет машину:" << car.name << " и ему: " << person.age << endl;
}



// class Building{
// private:
//     int year;
//     string type;
// public:
//     Building(int y, string t){
//         set_data(y, t);
//     }

//     Building(int y){
//         year = y;
//         cout << "Данные установлены" << endl;
//     }

//     Building(){}

//     // void set_data(int y, string t){
//     //     year = y;
//     //     type = t;
//     // }

//     void set_data(int year, string type){
//         this->year = year;
//         this->type = type;
//     }


//     void set_data(int y){
//         year = y;
//     }

//     void get_info(){
//         cout << "Type: " << type << ". Year: " << year << endl; 
//     }

//     ~Building(){
//         cout << "delete object" << endl;
//     }
// };




// void Divite(float a, float b){
//     if(a == 0 || b == 0) throw 100;
//     else cout << (a / b);
// }


// enum Options {
//     open = 5,
//     close,
//     wait = 14,
//     del
// };

// struct file{
//     int weight;
//     string name;
//     Options options;
// };

// enum Option{
//     open,
//     close,
//     wait,
//     del
// };

// struct file{
//     int weigth;
//     string name;
//     Option option;
// };





// struct Point {
//     int x, y;
// };


// struct Tree{
//     string name;
//     int age;
//     bool is_alive;
//     float height;
//     Point place;

//     void get_info(){
//         cout << "Name:" << name << ". Age: " << age << ". Point: " << place;
//     }
// };



// void minimal(int *arr, int len){
//     int min = *arr;
//     for(int i = 0; i < len; i++){
//         if(min > *(arr + i))
//             min = *(arr + i);
//     }
//     cout << "Min:" << min << endl;
// } 


// void print(int word){
//     cout << word << endl;
// }

// void print(string word){
//     cout << word << endl;
// }

// void add(int a, int b){
//     int res = a + b;
//     print(res);
// }

// void add(int a, int b, int c){
//     int res = a + b + c;
//     print(res);
// }


int main(){
    setlocale(LC_ALL, "RU");

    // print("some");
    // add(4, 6);
    // add(4, 5, 6);


    // int num = 10;
    // int &a = num;

    // a = 14
    // cout << &num << " - " << num << endl;
    // cout << &a << " - " << a << endl;


    // int val = 12;
    // int* ptrval = &val;
    
    // *ptrval = 88;
    // cout << &val << " - " << val << endl;
    // cout << ptrval << " - " << *ptrval << endl;


//    int arr[] = {5, 7, 9, 99, -1, 87, -2, -99};
//     minimal(arr, 8); 



// ofstream file("cpp.txt", ios_base::out);
    // if(file.is_open()){
    //     file << "hello cpp";
    //     file.close();
    // }

    // ifstream file("cpp.txt");
    // if(file.is_open());
    // char temp[100];
    // file.getline(temp, 100);
    // cout << temp << endl;
    // file.close();


    // Tree dub;
    // dub.name = "Дуб";
    // dub.age = 23;
    // dub.is_alive = true;
    // dub.place.x = 100;
    // dub.place.y = 209;

    // Tree yolka;
    // yolka.name = "yolka";

    //  cout << yolka.name << " - " << dub.age << endl;
    // dub.get_info();
    // yolka.get_info();



    // file my_file;

    // my_file.weight = 1.5f;
    // my_file.name = "test.txt";
    // my_file.options = Options::open;

    // // cout << my_file.options;
    // if(my_file.options == Options::close){
    //     cout << "file is close";
    // }else
    //     cout << "file is not close";



    // try{
    //     Divite(4, 0);
    // }catch(int error){
    //     if(error == 100) cout << "Ошибка при деление на 0";
    // }


//#include <cstring>
    // string str1 = "hello";
    // string str2 = "world";

    // str1.append(str2);
    // cout << str1 + str2;
    // str1.pop_back(); // удаление последнего символа!
    // str1.push_back('!'); // Добовляет символ в конец
    // str1.resize(5); // длина строки
    // cout << str1.length(); // длина строки
    // cout << str1 << " - " << str1.length();

// #include <cmath>
    // cout << pow(2, 4) << endl; // делает степень!
    // cout << abs(-3) << endl; // вводите отрицательно введет положительное и наоборот!
    // cout << sin(1) << endl; // синус!
    // cout << cos(1) << endl; // косинус!
    // cout << sqrt(16) << endl; // квадратный корень !
    // cout << ceil(1.3) << endl; // округляет к большему если после точки есть число то округлит в большую сторону!
    // cout << floor(1.99) << endl; // округляет к меньшему 
    // cout << round(1.55) << endl; // окргуляет нормально


    // Building school(2000, "школа");
    // school.type = "Школа";
    // school.year = 2000;
    // school.get_info();
    // school.set_data(2000, "Школа");
    // school.get_info();

    // Building house(2010);
    // school.type = "Дом";
    // school.year = 2010;
    // house.set_data(2010, "Дом");
    // house.get_info();


    
    Car bmw(" bmw");
    Person jhon(" Jhon", 20);

    info_car(bmw, jhon);


    // Dog skuby;
    // Person alex;

    // alex.Damage(skuby);
    // alex.Health(skuby);
    // alex.Kill(skuby);


    // Laptop mac(16, "mac", 1.5);
    // mac.get_info();


    // int arr1[] = {1, 7, 9, 6, 5, -7, -9};
    // print_arr<int, int>(arr1, 7);

    // float arr2[] = {5.7, 87.7, 86.8};
    // print_arr<float, int>(arr2, 3);

    // int arr1[] = {7, 8, 4};
    // string arr2[] = {"hello", "my", "name", "is", "lox"};
    // float arr3[] = {7.8, 8.9, 4.0};
    // Arrays<int> obj1(arr1, 3);
    // Arrays<string> obj2(arr2, 5);
    // Arrays<float> obj3(arr3, 3);
    // obj1.get();
    // obj2.get();
    // obj3.get();


//     srand(time(NULL));
//     int const ROW = 3;
//     int const COL = 4;
//     int arr[ROW][COL];

//     for(int i = 0; i < ROW; i++){
//         for(int j = 0; j < COL; j++)
//             arr[i][j] = rand() % 5;
//     }

//     for(int i = 0; i < ROW; i++){
//         for(int j = 0; j < COL; j++)
//             cout << arr[i][j] << "\t";
//             cout << endl;
// }


// void FillArray(int arr[][], const int ROW, const int COL){
//     for(int i = 0; i < ROW; i++){
//         for(int j = 0; j < COL; j++){
//             arr[i][j] = rand() % 5;
//         }
//     }

// }

// void PrintArray(int arr[][], const int ROW, const int COL){
//     for(int i = 0; i < ROW; i++){
//         for(int j = 0; j < COL; j++)
//             cout << arr[i][j] << " ";
            
//             cout << endl;
//     }
// }


// void push_begin(int*& arr, int& size, int var) {

// 	int a = 0;

// 	size++;

// 	int* new_arr = new int[size];



// 	for (int i = 0; i < size; i++) {

// 		if (i == 0){

// 			new_arr[i] = var;

// 		}

// 		else {

// 			new_arr[i] = arr[a];

// 			a++;

// 		}

// 	}



// 	delete[] arr;

// 	arr = new_arr;

// }

// Для удаления в начале: 
// void pop_begin(int*& arr, int &size) {

	

// 	int* new_arr = new int[size - 1];



// 	for (int i = 0; i < size; i++) {

// 		new_arr[i] = arr[i + 1];

// 	}

// 	size--;

// 	delete[] arr;

	

// 	arr = new_arr;

// }

// Для добавления числа в середину :

// void push_mid(int*& arr, int& size, int elem, int var ) {

// 	size++;

// 	int* new_arr = new int[size];



// 	for (int i = 0; i < size; i++) {

// 		if (i < elem) {

// 			new_arr[i] = arr[i];

// 		}

// 		else if (i == elem) {

// 			new_arr[i] = var;

// 		}

// 		else if (i > elem) {

// 			new_arr[i] = arr[i - 1];

// 		}

// 	}



// 	delete[] arr;

// 	arr = new_arr;



// }

// Для удаления из середины :
// void pop_mid(int*& arr, int& size, int elem) {

// 	size--;

// 	int* new_arr = new int[size];



// 	for (int i = 0; i < size; i++) {

// 		if (i < elem) {

// 			new_arr[i] = arr[i];

// 		}

// 		else if (i >= elem) {

// 			new_arr[i] = arr[i + 1];

// 		}

// 	}



// 	delete[] arr;

// 	arr = new_arr;



// }



return 0;

}