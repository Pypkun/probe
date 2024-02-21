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

// typedef std::vector<int> int_vector;
// typedef std::vector<float> float_vector;


// class Human{
// public:
//     string name;
//     int age;
//     int weigth;
//     void print(){ 
//         cout << "Имя: " << name << "\nВозраст: " << age <<  "\nвес: " << weigth << endl;
//     }
// };


// class Point{
// private:
//     int z;
//     int y;
//     void PrinY(){
//         cout << y << endl;
//         cout << "PrinY()" << endl;
//     }
// public:
//     int x;
//     void Print(){
//         cout << "y = " << y << "\nx = " << x << "\nz = " << z << endl;
//         PrinY();
//     }
// };

// class Test;
// class Point{
// private:
//     int x;
//     int y;

// public:

//     Point(){
//         x = 0;
//         y = 0;
//         cout << this << " constryctor" << endl;
//     }

//     Point(int x, bool y){
//         this->x = x;
//         this->y = y;
//         if(y){
//             y = 1;
//         }else{
//             y = -1;
//         }
//     }

//     Point(int x, int y){
//         this->x = x;
//         this->y = y;
//     }

//     bool operator == (const Point &other){
//         return this->x == other.x && this->y == other.y;
//     }

//     bool operator != (const Point &other){
//         return !(this->x == other.x && this->y == other.y);
//     }

//     Point operator + (const Point &other){
//         Point temp;
//         temp.x = this->x + other.x;
//         temp.y = this->y + other.y;

//         return temp;

//     }


//     // void SetX(int x){
//     //     this->x = x;
//     // }

//     // void SetY(int y){
//     //     this->y = y * 2;
//     // }

//     int GetX(){
//         return x;
//     }

//     int GetY(){
//         return y;
//     }


//     void Print(){
//         cout << "x = " << x << "\ty = " << y << endl;
//     }


//     Point & operator ++(){
//         this->x++;
//         this->y++;

//         return  *this;
//     }

//     Point & operator ++(int value){
//         // Point temp(*this);
//         this->x++;
//         this->y++;

//         return *this;
//     }

//     friend void ChangeX(Point &value, Test &test);

// };


// class Test{
// private:
//     int data = 0;
// public:
//     Test(int data){
//         this->data = data;
//     }
//     void Print(){
//         cout << data << endl;
//     }
//     friend void ChangeX(Point &value, Test &test);
// };


// void ChangeX(Point &value, Test &test){
//     value.x = -2;
//     test.data = -1;
// }







// class CoffeGrinder{
// private:
//     bool CheckVoltage(){
//         return false;
//     }
// public:
//     void Start(){
//         if(CheckVoltage){
//             cout << "VjuHHH!" << endl;
//         }else{
//             cout << "beep beep" << endl;
//         }
//     }
// };



// class MyClass{
// private:
//     int *data;
// public:
//     MyClass(int size){
//         // this->data = data;
//         data = new int[size];
//         for(int i = 0; i < size; i++){
//             data[i] = i;
//         }
//         cout << "объект " << data << " вызвался конструктор" << endl;
//     }
//     ~MyClass(){ //дестуктор вызывается когда закончилась функция return 0
//         delete [] data;
//         cout << "объект " << data << " вызвался деструктор" << endl;
//     }// выводится к примеру выше 1,2,3 а он добовляет в обратном порядке 3,2,1
// };

// void foo(){
//     cout << "foo начало выполнения " << endl;
//     MyClass a(1);
//     cout << "foo конец выполнения " << endl;
// }


// class MyClass{
// private:
//     int *data;
//     int Size;
// public:
//     MyClass(int size){
//         this->Size = size;
//         this->data = new int[size];
//         for(int i = 0; i < size; i++){
//             data[i] = i;
//         }

//         cout << "вызвался конструктор " << this << endl;
//     }
//     MyClass(const MyClass &other){
//         this->Size = other.Size;
//         this->data = new int [other.Size];
//         for(int i = 0; i < other.Size; i++){
//             data[i] = other.data[i];
//         }
//         cout << "вызвался конструктор копирования " << this << endl;
//     }
//     MyClass & operator = (const MyClass &other){
//         cout << "вызвался оператор = " << this << endl;
//         this->Size = other.Size;
//         if(this->data != nullptr){
//             delete[] this->data;
//         }

//         this->data = new int [other.Size];
//         for(int i = 0; i < other.Size; i++){
//             data[i] = other.data[i];
//         }

//         return *this;
//     }
//     ~MyClass(){
//         cout << "вызвался деструктор " << this << endl;
//         delete[] data;
//     }
// };

// void foo(MyClass value){
//     cout << "вызвалась функция FOO" << endl;
// }

// MyClass foo2(){
//     cout << "вызвалась функция FOO_2" << endl;
//     MyClass temp(2);
//     return temp;
// }



// class TestArr{
// private:
// int arr[6]{6, 886, 667, 53, 55, 655};
// public:

//     int & operator[](int index){
//         return arr[index];
//     }
// };


// class MyClass{
// private:

// public:

//     // MyClass();

//     // ~MyClass();


//     void PrintMessage(); //протатип!!




// };


// MyClass::MyClass();

// MyClass::~MyClass();



// void MyClass::PrintMessage(){ //ВЫВЕСТИ ФУНКИЦИЮ НЕ В КЛАССЕ!!!!
//     cout << "hello" << endl;
// }

// class Apple;
// class Human{
// public:

//     void TakeApple(Apple &apple);

//     void EatApple(Apple &apple){

//     }





// };


// class Apple{
// private:
//     int weight;
//     string color;
//     int id;

//     static int Count;
// public:





//     Apple(int weight, string color){
//         this->weight = weight;
//         this->color = color;
//         Count++;
//         id = Count;
//     }

//     int Getid(){
//         return id;
//     }

//     static int GetCount(){
//         return Count;
//     }

//     static void ChangetColor(Apple &apple, string color){
//         apple.color = color;
//     }


//     void ChangetColorNoStatic(string color){
//         this->color = color; //нельзя принимать через класс
//     }


    // friend Human; //дружественный класс
    // friend void Human::TakeApple(Apple &apple); //дружественная функция

// };

// int Apple::Count = 0; // можно узанть сколько создали объектов


// void Human::TakeApple(Apple &apple){
//     cout << "TakeApple " << "weight: " << apple.weight << "  color: " << apple.color << endl;
// }




// class Image{
// private:

//     class Pixel{
//     private:
//         int r;
//         int g;
//         int b;
//     public:
//         Pixel(int r, int g, int b){
//             this->r = r;
//             this->g = g;
//             this->b = b;
//         }

//         string GetInfo(){
//             return " Pixel: r=" +to_string(r) + " g=" +to_string(g) +" b=" +to_string(b);
//         }


//     };

//     static const int Length = 3;
//     Pixel pixels[Length]{
//         Pixel(33, 7676, 66),
//         Pixel(788, 65, 56),
//         Pixel(89, 877, 984)
//     };

// public:

//     void GetImageInfo(){
//         for(int i = 0; i < Length; i++){
//             cout << "#" << i << pixels[i].GetInfo() << endl;
//         }
//     }

// };



// class Pixel{
// private:
//     int r;
//     int g;
//     int b;
// public:

//     Pixel(){
//         r = b = g = 0;
//     }


//     Pixel(int r, int g, int b){
//         this->r = r;
//         this->g = g;
//         this->b = b;
//     }

//     string GetInfo(){
//         return " Pixel: r=" +to_string(r) + " g=" +to_string(g) +" b=" +to_string(b);
//     }


// };

//АГРЕГАЦИЯ И КОМПОЗИЦИЯ
// class Cap{
// private:
//     string color = "red";
// public:

//     string GetColor(){
//         return color;
//     }

// };


// class Model{
// private:
//     Cap cap;
// public:
//     void InspectModel(){
//         cout << "кепка " << cap.GetColor() << " цвета" << endl;
//     }
// };



// class Human{
// private:
//     class Brain{
//     public:

//         void Think(){
//             cout << "я думаю!" << endl;
//         }


//     };

//     Cap cap;
//     Brain brain;

// public:

//     void Think(){
//         brain.Think();
//     }

//     void InspectTheCap(){
//         cout << "моя кепка " << cap.GetColor() << " цвета." << endl;
//     }

// };


//НАСЛЕДОВАНИЕ
// class Human{
// private:
//     string name = "имя не указано!!";
// public:
//     string GetName(){
//         return name;
//     }

//     void SetName(string name){
//         this->name = name;
//     }

// };

// class Student : public Human {
// public:
//     string group;
//     void Learn(){
//         cout << "я учусь" << endl;
//     }
// };

// class ExtramuralsStudent : public Student{
// public:
//     void Learn(){
//         cout << "я бываю в универитете реже обычного студента!" << endl;
//     }
// };


// class Proffesor : public Human {
// public:
//     string subject;
// };



// class A{
// protected: //50\50 РАБОТАЕТ В НАСЛЕДНИКЕ НО НЕЛЬЗЯ НА УРОВНЕ ОБЪЕКТА
//     string msgOne = "Сообщение один";
// private: //МОЖНО ТОЛЬКО В СВОЕМ КЛАССЕ
//     string msgTwo = "Сообщение два";
// public: //МОЖНО ВЕЗДЕ
//     string msgThree = "Сообщение три";
// };

// class B : protected A{
// public:

//     void PrintMsg(){
//         cout << msgThree << endl;
//     }
// };



//ВЫЗОВ КОНСТРУКТОРА И ДЕСТРУКТОРА ПРИ НАСЛЕДОВАНИЕ!
// class A{
// public:
//     A(){
//         cout << "вызвался конструктор класса A" << endl;
//     }

//     ~A(){
//         cout << "вызвался деструтор класса A" << endl;
//     }

// };

// class B : public A{
// public:
//     B(){
//         cout << "вызвался конструктор класса B" << endl;
//     }

//     ~B(){
//         cout << "вызвался деструктор класса B" << endl;
//     }

// };

// class C : public B{
// public:
//     C(){
//         cout << "вызвался конструктор класса C" << endl;
//     }

//     ~C(){
//         cout << "вызвался деструктор класса C" << endl;
//     }

// };




// class A{
// private:
//     string msg;
// public:
//     A(){
//         cout << "пустое сообщение" << endl;
//     }

//     A(string msg){
//         this->msg = msg;
//     }

//     void PrintMsg(){
//         cout << msg << endl;
//     }

// };

// class B : public A{
// public:
//     B():A("наше новое сообщение ")
//     {

//     }
// };


//ВИРТУАЛЬНЫЕ МЕТОДЫ КЛАССА

// class Weapon{
// public:
//     virtual void Shoot() = 0;
//     void Foo(){
//         cout << "Foo()" << endl;
//     }
// };


// class Gun : public Weapon{
// public:
//     void Shoot() override{
//         cout << "Bang" << endl;
//     }

// };

// class SubmachineGun : public Gun{
// public:
//     void Shoot() override{
//         cout << "Bang Bang Bang" << endl;
//     }
// };

// class Bazooka : public Weapon{
// public:
//     void Shoot() override{
//         cout << "BAAAAAAAAAAAAAAAAAAAAAAAAAAAM" << endl;
//     }
// };

// class Knife : public Weapon{
// public:
//     void Shoot() override{
//         cout << "VJUH!" << endl;
//     }
// };

// class Player{
// public:
//     void Shoot(Weapon *weapon){
//         weapon->Shoot();
//     }
// };



//ВИРУАЛЬНЫЙ ДЕСТРУКТОР
// НУЖЕН ЧТОБЫ НЕ БЫЛО УТЕЧКИ ПАМЯТИ И БЫЛО ПОНЯТНЕЕ ЧТО НУЖНО ВЫЗЫВАТЬ А ТО МОЖНО УДАЛИТЬ ДИНАМИЧЕСКУЮ ПАМЯТЬ И ФУНКЦИЯ ~B не вызовится!!!
// class A{
// public:
//     A(){
//         cout << "выделена динамическая память, объект класса А" << endl;
//     }

//     virtual ~A(){
//         cout << "освобождена динамическая память, объект класса А" << endl;
//     }
// };

// class B : public A{
// public:

//     B(){
//         cout << "выделена динамическая память, объект класса В" << endl;
//     }

//     ~B() override{
//         cout << "освобождена динамическая память, объект класса В" << endl;
//     }

// };


//ЧИСТО ВИТРУАЛЬНЫЙ ДЕСТРУКТОР
// class A{
// public:
//     A(){

//     }

//     virtual ~A() = 0; //ОН ВИРТУАЛЬНЫЙ
// };
// A::~A(){};


// class B : public A{
// public:

//     B(){

//     }

//     ~B() override{

//     }
// };


//ДЕЛЕГИРУЮЩИЙ КОНСТРУКТОР!!!!
// class Human{
// private:
//     string Name;
//     int Age;
//     int Weight;
//     int Women;
// public:

//     Human(string Name){
//         this->Name = Name;
//         this->Age = 0;
//         this->Weight = 0;
//     }

//     Human(string Name, int Age):Human(Name){
//         this->Age = Age;
//     }

//     Human(string Name, int Age, int Weight):Human(Name, Age){
//         this->Weight = Weight;
//     }

//     Human(string Name, int Age, int Weight, int Women):Human(Name, Age, Weight){
//         this->Women = Women;
//     }


//     void print(){
//         cout << "Name: " << this->Name << " Age: " << this->Age << " Weight: " << this->Weight << " Women: " << this->Women << endl;
//     }
// };



//метод вызова базового класса!!!
// class Msg{
// private:
//     string msg;
// public:
//     Msg(string msg){
//         this->msg = msg;
//     }

//     virtual string GetMsg(){
//         return msg;
//     }

// };

// class BraketsMsg : public Msg{
// public:
//     BraketsMsg(string msg):Msg(msg){

//     }

//     string GetMsg() override{
//         return "[" + ::Msg::GetMsg() + "]"; //метод вызова базового класса!!!
//     }
// };

// class Printer{
// public:
//     void Print(Msg *msg){
//         cout << msg->GetMsg() << endl;
//     }
// };





// class Car{
// public:
//     Car(){
//         cout << "вызван конструктор кар" << endl;
//     }

//     ~Car(){
//         cout << "вызван деструктор кар" << endl;
//     }

//     void Use(){
//         cout << "я еду!!" << endl;
//     }
// };

// class Airplain{
// public:
//     Airplain(){
//         cout << "вызван конструктор аирплан" << endl;
//     }

//     ~Airplain(){
//         cout << "вызван деструктор аирплан" << endl;
//     }

//     void Use(){
//         cout << "я лечу" << endl;
//     }
// };

// class FlyingCar : public Car, Airplain{
// public:
//     FlyingCar(){
//         cout << "вызван конструктор флаингкар" << endl;
//     }

//     ~FlyingCar(){
//         cout << "вызван деструктор флаингкар" << endl;
//     }

//     void Go(){
//         cout << "я че то умею" << endl;
//     }
// };



// class IBicycle{
// public:
//     void virtual TwistTheWheel() = 0;
//     void virtual Ride() = 0;
// };

// class SimpleBicycle : public IBicycle{
// public:
//     void TwistTheWheel() override {
//         cout << "метод twistthewheel simple" << endl;
//     }

//     void Ride() override{
//         cout << "метод ride simple" << endl;
//     }

// };

// class SportBicycle : public IBicycle{
// public:
//     void TwistTheWheel() override {
//         cout << "метод twistthewheel SportBicycle" << endl;
//     }

//     void Ride() override{
//         cout << "метод ride SportBicycle" << endl;
//     }

// };

// class Human{
// public:
//     void RideOn(IBicycle &bicycle){
//         cout << "крутим руль" << endl;
//         bicycle.TwistTheWheel();
//         cout << endl << "Поехали" << endl;
//         bicycle.Ride();
//     }
// };



// class Component{
// public:
//     Component(string companyName){
//         cout << "конструктор component" << endl;
//         this->companyName = companyName;
//     }
//     string companyName;
// };

// class GPU : public Component{
// public:
//     GPU(string companyName) :Component(companyName){
//         cout << "конструктор GPU" << endl;
//     }
// };

// class Memory : public Component{
// public:
//     Memory(string companyName) : Component(companyName){
//         cout << "конструктор memory" << endl;
//     }
// };

// class GraphicCard : public GPU, public Memory{
// public:
//     GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName),Memory(MemoryCompanyName){
//         cout << "конструктор GraphicCard" << endl;
//     }
// };



// class Character{
// public:
//     Character(){
//         cout << "конструтор Character " << endl;
//     }
//     int HP;
// };

// class Orc: public virtual Character{
// public:
//     Orc(){
//         cout << "конструктор Orc" << endl;
//     }
// };

// class Warrior : public virtual Character{
// public:
//     Warrior(){
//         cout << "констуктор Warrior" << endl;
//     }
// };

// class OrcWarrior : public Orc, public Warrior{
// public:
//     OrcWarrior(){
//         cout << "конструктор OrcWarrior" << endl;
//     }
// };


// class Point{
// private:
//     int a;
//     int b;
//     int c;
// public:
//     Point(){
//         a = b = c = 0;
//     }

//     Point(int a, int b, int c){
//         this->a = a;
//         this->b = b;
//         this->c = c;
//     }

//     void print(){
//         cout << "a: " << a << " b: " << b << " c: " << c << endl;
//     }
// };




// class Point{
// private:
//     int a;
//     int b;
//     int c;
// public:
//     Point(){
//         a = b = c = 0;
//     }

//     Point(int a, int b, int c){
//         this->a = a;
//         this->b = b;
//         this->c = c;
//     }
//     friend ostream & operator <<(ostream &os, const Point &point);
//     friend istream & operator >> (istream &is, Point &point);
// };

// ostream & operator <<(ostream &os, const Point &point){
//     os << point.a << " " << point.b << " " << point.c;
//     return os;
// }

// istream & operator >> (istream &is, Point &point){
//     is >> point.a >> point.b >> point.c;
//     return is;
// }



//throw!!!!
// void Foo(int value){
//     if(value < 0){
//         // throw invalid_argument("число меньше 0 ");
//         throw " число меньше 0";
//     }
//     if(value == 0){
//         throw overflow_error("число равно 0");
//     }
//     if(value == 1){
//         throw 1;
//     }
//     cout << "переменнная " << value << endl;
// }




// class MyException : public invalid_argument{
// private:
//     int dataState;
// public:
//     MyException(const char *msg, int dataState): invalid_argument(msg){
//         this->dataState = dataState;
//     }
//     int GetDataState(){
//         return dataState;
//     }
// };


// void Foo(int value){
//     if(value < 0){
//         throw invalid_argument("число меньше 0 ");
//         // throw " число меньше 0";
//     }
//     // if(value == 0){
//         // throw exception("число равно 0");
//     // }
//     if(value == 1){
//         throw MyException("число равно 1", value);
//     }
//     cout << "переменнная " << value << endl;
// }



//enum!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// class PC{
// private:
// PCState State;
// public:
//     enum PCState{
//         OFF,
//         ON,
//         SLEEP
//     };

//     PCState GetState(){
//         return State;
//     }

//     void SetState(PCState State){
//         this->State = State;
//     }
// };


// enum Speed{
//     MIN = 150,
//     RECOMEND = 600,
//     MAX = 800
// };



//namespace

// namespace firsNS{
//     void Foo(){
//         cout << "foo firsNS" << endl;
//     }
// }
// namespace secondNS{
//     void Foo(){
//         cout << "foo secondNS" << endl;
//     }
// }


// namespace thidNS{
//     namespace secondNS{
//         void Foo(){
//             cout << "foo thidNS" << endl;
//         }
//     }
// }
// using namespace secondNS; //глобальный






// template<typename T1, typename T2>
// class MyClass{
// private:
//     T1 value;
//     T2 value2;
// public:
//     MyClass(T1 value, T2 value2){
//         this->value = value;
//         this->value2 = value2;
//     }


//     void DataTypeSize(){
//         cout << "value " << sizeof(value) << endl;
//         cout << "value2 " << sizeof(value2) << endl;

//     }

//     T1 Foo(){
//         return value;
//     }
// };


// class Point{
// private:
//     int a;
//     int b;
//     int c;
// public:
//     Point(){
//         a = b = c = 0;
//     }

//     Point(int a, int b, int c){
//         this->a = a;
//         this->b = b;
//         this->c = c;
//     }
// };



// template<typename T1>
// class TypeSize{
// protected:
//     T1 value;
// public:
//     TypeSize(T1 value){
//         this->value = value;
//     }


//     void DataTypeSize(){
//         cout << "value " << sizeof(value) << endl;
//     }

// };

// template<typename T1>
// class TypeInfo : public TypeSize<T1>{
// private:
// public:
//     TypeInfo(T1 value):TypeSize<T1>(value){}

//     void ShowTypeName(){
//         cout << "название типа " << typeid(T1).name() << endl;
//     }
// };



// template<typename T>
// class Printer{
// public:
//     void print(T value){
//         cout << value << endl;
//     }
// };

// template<>
// class Printer<string>{ //можно запретить какой то метод или он может по другому отображаться!!!
// public:
//     void print(string value){
//         cout << "_______" << value << "_________"<< endl;
//     }
// };


//struct сразу паблик

// class MyClass{
// //будет привате
// public:
//     int a = 10;
// };

// class MyClass2 : MyClass{ //наследует как прайвет
// public:
//     int a = 10;
// };

// struct  MyStruct{

//     int a = 20;

// };

// struct  MyStruct2 : MyStruct{ //наследует как паблик

//     int a = 20;
// };




//умные указатели

// template<typename T>
// class SmartPoint{
// private:
//     T *ptr;
// public:

//     SmartPoint(T *ptr){
//         this->ptr = ptr;
//         cout << "constructor" << endl;
//     }

//     ~SmartPoint(){
//         delete ptr;
//         cout << "destructor" << endl;
//     }

//     T & operator * (){
//         return *ptr;
//     }
// };

//реализация односвязанного списка
// template<typename T>
// class List{
// private:

//     template<typename>
//     class Node{
//     public:
//         Node *pNest;
//         T data;
//         Node(T data = T(), Node *pNest  = nullptr){
//             this->data = data;
//             this->pNest = pNest;
//         }
//     };

//     int Size;
//     Node<T> *head;

// public:
//     List();
//     ~List();

//     void pop_front();
//     void push_back(T data);
//     void clear();
//     int GetSize(){return Size;}
//     T & operator [] (const int index);
//     void push_front(T data);
//     void insert(T data, int index);
//     void removeAt(int index);
//     void pop_back();
// };

// template<typename T>
// List<T>::List(){
//     Size = 0;
//     head = nullptr;
// }

// template<typename T>
// List<T>::~List(){
//     clear();
// }

// template <typename T>
// void List<T>::push_back(T data)
// {
//     if(head == nullptr){
//         head = new Node<T>(data);
//     }else{
//         Node<T> *current = this->head;
//         while(current->pNest != nullptr){
//             current = current->pNest;
//         }
//         current->pNest = new Node<T>(data);
//     }

//     Size++;
// }

// template <typename T>
// T &List<T>::operator[](const int index){
//     int counter = 0;
//     Node<T> *current = this->head;
//     while(current != nullptr){
//         if(counter == index){
//             return current->data;
//         }

//         current = current->pNest;
//         counter++;
//     }
// }


// template <typename T>
// void List<T>::pop_front()
// {
//     Node<T> *temp = head;
//     head = head->pNest;
//     delete temp;

//     Size--;
// }

// template <typename T>
// void List<T>::clear()
// {
//     while(Size){
//         pop_front();
//         // Size--;
//     }
// }

// template <typename T>
// void List<T>::push_front(T data) //числа идут наоборот
// {
//     head = new Node<T>(data, head);
//     Size++;
// }

// template <typename T>
// void List<T>::insert(T data, int index) //добовлять элемент!
// {

//     if(index == 0){
//         push_front(data);
//     }else{
//         Node<T> *previous = this->head;

//         for(int i = 0; i < index - 1; i++){
//             previous = previous->pNest;
//         }

//         Node<T> *newNode = new Node<T>(data, previous->pNest);
//         previous->pNest = newNode;

//         Size++;
//     }
// }

// template <typename T>
// void List<T>::removeAt(int index)//удалить элемент по индексу!!
// {
//     if(index == 0){
//         pop_front();
//     }else{
//         Node<T> *previous = this->head;

//         for(int i = 0; i < index - 1; i++){
//             previous = previous->pNest;
//         }

//         Node<T> *toDelete = previous->pNest;
//         previous->pNest = toDelete->pNest;

//         delete toDelete;
//         Size--;
//     }
// }

// template <typename T>
// void List<T>::pop_back() // удаление последнего элемента!!!
// {
//     removeAt(Size-1);
// }


//union

// union Myunion{
//     short int a;
//     int b;
//     float c;
// };



//function

// void Foo(int a){
//     if(a > 10 && a < 40){
//         cout << "foo " << a << endl;
//     }
// }

// void bar(int a){
//     if(a % 2 == 0){
//         cout << "bar " << a << endl;
//     }
// }

// void b(int a){
//     cout << "baz" << endl;
// }

// int Sum(int a, int b){
//     return a + b;
// }

// void Dowork(vector<int> &v, vector<function<void(int)>> funcVector){
//     for(auto var : v){
//         for(auto &vor : funcVector){
//             vor(var);
//         }
//     }
// }



// void Foo(int a){
//     if(a > 10 && a < 40){
//         cout << "foo " << a << endl;
//     }
// }

// void bar(int a){
//     if(a % 2 == 0){
//         cout << "bar " << a << endl;
//     }
// }

// void b(int a){
//     cout << "baz" << endl;
// }


// void Dowork(vector<int> &v, function<void(int)> func){
//     for(auto var : v){
//         func(var);
//     }
// }



// class myclass{
// public:
//     int a = 11;
//     void Msg(){
//         cout << "msg" << endl;
//     }

//     void lambda(){
//         auto f = [this](){
//             this->Msg();
//         };
//         f();
//     }

// };


// class myfunctor{
// private:
//     int count = 0;
// public:

//     int operator ()(int a, int b){
//         cout << "func " << endl;
//         return a + b;
//     }

// };

// class even{
// private:
//     int evenSum = 0;
//     int evenCount = 0;
// public:

//     void operator()(int value){
//         if(value % 2 == 0){
//             evenSum += value;
//             evenCount++;
//         }
//     }

//     void ShowSum(){
//         cout << "sum: " << evenSum << endl;
//     }

//     void ShowCount(){
//         cout << "count: " << evenCount << endl;
//     }
// };


//предикаты

// bool graterThanZero(int a){
//     return a > 0;

// }


// bool lessThonZero(int a){
//     return a < 0;
// }

// class Person{
// public:

//     string name;
//     double score;

//     Person(string name, double score){
//         this->name = name;
//         this->score = score;
//     }

//     bool operator()(const Person &p){
//         return p.score > 100;
//     }
// };


















int main(){
    // setlocale(LC_ALL, "RU");
    // Human firstHuman;
    // firstHuman.age = 20;
    // firstHuman.name = "andrey";
    // firstHuman.weigth = 100;
    // firstHuman.print();


    // Point a(1, 1);

    // Point b(a);
    // b.Print();


    // CoffeGrinder a;
    // a.Start();


    // MyClass a(1);
    // MyClass b(2);
    // MyClass c(3);
    // foo();

    // MyClass a(10);
    // MyClass b(2);
    // MyClass c(5);
    // MyClass e(6);
    // e = c = a = b;
    // foo(a);
    // foo2();    cout << h;

    // a.Print();
    // b.Print();
    // ChangeX(a, b);
    // a.Print();
    // b.Print();


    // int year;
    // cin >> year;

    // TestArr a;
    // cout << a[0];


    // MyClass a;
    // a.PrintMessage();


    // Apple apple(150, "red");

    // Human human;
    // human.TakeApple(apple);



    // Apple apple(150, "red");
    // Apple apple2(255, "blue");
    // Apple apple3(2324, "white");


    // Apple::ChangetColor(apple, "Green");
    // apple.ChangetColorNoStatic("blue");
    // cout << Apple::Count << endl; //скажет  // string path = "myFile.txt";
    // fstream fs;
    // fs.open(path, fstream::in | fstream::out | fstream::app);




    // cout << apple3.Getid() << endl;
    // cout << apple2.Getid() << endl;

    // cout << Apple::GetCount() << endl;
    // human.TakeApple(apple);


    // Image img;
    // img.GetImageInfo();


    // const int LENGTH = 5;

    // Pixel arr[LENGTH]{
    //     Pixel(33, 7676, 66),
    //     Pixel(788, 65, 56),
    //     Pixel(29, 877, 984),
    //     Pixel(85, 837, 94),
    //     Pixel(69, 877, 9353)
    // };

    // cout << arr[3].GetInfo();



    // int LENGTH = 5;

    // Pixel *arr = new Pixel[LENGTH];

    // arr[0] = Pixel(12, 2323, 224);

    // cout << arr[0].GetInfo();

    // delete [] arr;


    // Human human;
    // human.Think();
    // human.InspectTheCap();
    // cout << endl;
    // Model model;
    // model.InspectModel();

    // Student st;
    // st.Learn();
    // st.SetName("anton");
    // cout << st.GetName() << endl;
    // cout << st.GetName() << endl;

    // ExtramuralsStudent es;
    // es.Learn();
    // es.SetName("anjela");
    // cout << es.GetName() << endl;


    // B b;
    // b.PrintMsg();


    // A a("hiii");
    // a.PrintMsg();



    // Bazooka baz;
    // Gun gun;
    // SubmachineGun scg;
    // Gun *machine = &scg;
    // machine->Shoot();

    // Player play;
    // play.Shoot(&baz);
    // Knife knife;
    // play.Shoot(&knife);


    // A *bptr = new B;
    // delete bptr;

    // Human h("аристарх", 30, 80, 3);
    // h.print();


    // BraketsMsg m("привет");
    // Printer p;
    // p.Print(&m);



    // FlyingCar fc;
    // ((Car)fc).Use(); //если одинковые функции то так делать чтобы понимало что хочу вызвать


    // SimpleBicycle sb;
    // SportBicycle sportb;


    // Human h;
    // h.RideOn(sportb);


    // GraphicCard gc("amd", "sumsung");

    // OrcWarrior();



//РАБОТА С ФАЙЛАМИ

//ofstream ОТКРЫВАЕТ ФАЙЛ!!!
    // string path = "myFile.txt";
    // ofstream fout;
    // fout.open(path, ofstream::app);

    // if(!fout.is_open()){
    //     cout << "ошибка открытие файла " << endl;
    // }else{
    //     for(int i = 0; i < 5; i++){
    //     cout << "введите число: ";
    //     int a;
    //     cin >> a;
    //     fout << "\n" << a;
    //     }
    // }

    // fout.close();


//ifstream ОТКРЫВАЕТ ФАЙЛ!!!
    // string path = "myFile.txt";
    // ifstream fin;
    // fin.open(path);

    // if(!fin.is_open()){
    //     cout << "ошибка открытие файла" << endl;
    // }else{

    //     cout << "файл открыт" << endl;
    //     string str;

    //     while(!fin.eof()){
    //         str = "";
    //         getline(fin, str);
    //         cout << str << endl;
    //     }
    // }

    // fin.close();


    // string path = "myFile.txt";

    // Point point(543645, 646464646, 545645646);

    // ofstream fout; //ЗАПИСЬ ФАЙЛА
    // fout.open(path, ofstream::app);

    // if(!fout.is_open()){
    //     cout << "ошибка открытие файла " << endl;
    // }else{
    //     cout << "файл открыт" << endl;
    //     fout.write((char*)&point, sizeof(Point));
    // }
    // fout.close();


    // ifstream fin; //ЧТЕНИЕ ФАЙЛА
    // fin.open(path);

    // if(!fin.is_open()){
    //     cout << "ошибка открытие файла" << endl;
    // }else{

    //     cout << "файл открыт" << endl;
    //     Point pnt;

    //     while(fin.read(char*)&pnt, sizeof(Point)){
    //         pnt.print();
    //     }
    // }

    // fin.close();




    // string path = "myFile.txt";
    // fstream fs;
    // fs.open(path, fstream::in | fstream::out | fstream::app);

    // if(!fs.is_open()){
    //     cout << "ошибка открытия " << endl;
    // }else{
    //     string msg;
    //     int value;
    //     cout << "файл открыт!" << endl;
    //     cout << "введите 1 для записи сообщения в файл: " << endl;
    //     cout << "нажмите 2 для считывания всях сообщений из файла: " << endl;
    //     cin >> value;

    //     if(value == 1){
    //         cout << "введите ваше сообщение " << endl;
    //         cin >> msg;
    //         fs << msg << "\n";
    //     }else if(value == 2){
    //         cout << "чтение данных из файла" << endl;
    //         while(!fs.eof()){
    //             msg = "";
    //             fs >> msg;
    //             cout << msg << endl;
    //         }
    //     }else{
    //         cout << "я тебя не понимаю " << endl;
    //     }
    // }
    // fs.close();


    // string path = "myFile.txt";
    // Point point(23423, 23424, 66);
    // // cout << point << endl;


    // fstream fs;
    // fs.open(path, fstream::in | fstream::out | fstream::app);
    // if(!fs.is_open()){
    //     cout << "ошибка открытия файла" << endl;
    // }else{
    //     cout << "файл открыт" << endl;
    //     fs << point << "\n";
    //     while (!fs.eof()){
    //         Point p;
    //         fs >> p;
    //         if(fs.eof()){
    //             break;
    //         }
    //         cout << p << endl;
    //     }

    // }
    // fs.close();



    // string path = "myFile.tx";
    // ifstream fin;
    // fin.exceptions(ifstream::badbit | ifstream::failbit);


    // try
    // {
    //     cout << "попытка открытия файла" << endl;
    //     fin.open(path);
    //     cout << "файл успешно открыт" << endl;

    // }
    // catch(const ifstream::failure & ex)
    // {
    //     cout << ex.what() << endl;
    //     cout << ex.code() << endl;
    //     cout << "ошибка открытие файла" << endl;
    // }





    // try
    // {
    //     Foo(0);
    // }
    // catch(const overflow_error & e)
    // {
    //     cout << "блок 1 " << e.what() << endl;
    // }
    // catch(const char *e)
    // {
    //     cout << "блок 2" << e << endl;
    // }
    // catch(...)
    // {
    //     cout << "что то пошло не так!" << endl;
    // }



    // try
    // {
    //     Foo(-1);
    // }
    // catch(MyException & ex)
    // {
    //     cout << "блок 1 " << ex.what() << endl;
    //     cout << "состояние данных " << ex.GetDataState() << endl;
    // }
    // catch(invalid_argument &ex) //нужно сначало более важный в начале ввести
    // {
    //     cout << " блок 2" << ex.what() << endl;
    // }


    // PC pc;
    // pc.SetState(PC::PCState::ON);

    // if(pc.GetState() == PCState::OFF){
    //     cout << "пс выключен" << endl;
    // }else if(pc.GetState() == PCState::ON){
    //     cout << "пс работает" << endl;
    // }else{
    //     cout << "пс находится в спящем режиме" << endl;
    // }

    // switch (pc.GetState())
    // {
    // case PC::PCState::OFF:
    //     cout << "выключен" << endl;break;
    // case PC::PCState::ON:
    //     cout << "включен" << endl;break;
    // case PC::PCState::SLEEP:
    //     cout << "спит" << endl;break;
    // default:
    //     break;
    // }



    // Speed sp = Speed::MAX;
    // cout << sp;


//namespace
    // secondNS::Foo();
    // thidNS::secondNS::Foo();
    // Foo();
    // thidNS::secondNS::Foo();



    // Point a;
    // MyClass<Point> c(a);
    // c.DataTypeSize();
    // Point p;
    // int a = 2;
    // MyClass<int, Point> c(a, p);
    // c.DataTypeSize();



    // int a = 2;
    // TypeInfo<int> c(a);
    // c.DataTypeSize();
    // c.ShowTypeName();


    // Printer<string> p;
    // p.print("hello world");


//умные указатели
    // SmartPoint<int> Sm = new int(5);

    // cout << *Sm << endl;
    // cout << *Sm << endl;



    // SmartPoint<int> Sm = new int(5);
    // SmartPoint<int> Sm2 = Sm;

    // auto_ptr<int> ap1(new int(5));
    // auto_ptr<int> ap2(ap1);

    // unique_ptr<int> ap1(new int(5));
    // unique_ptr<int> ap2;
    // ap2 = move(ap1)
    // ap2.swap(ap1);
    // int *p = ap1.get();

    // int *p = new int(5);
    // unique_ptr<int> p1(p);
    // p1.reset(); //все стирается
    // p1.release(); //данные остаются но указатель стирается

    // shared_ptr<int> p1(new int(5));
    // shared_ptr<int> p2(p1); //если все р удалились только тогда значение исчезает

//умные указатели в масиве
    // int SIZE = 5;
    // cin >> SIZE;

    // shared_ptr<int[]> ptr(new int[SIZE]{3, 76, 55, 55, 88});
    // for(int i = 0; i < SIZE; i++){
    //     ptr[i] = rand() % 10;
    //     cout << ptr[i] << endl;
    // }


//реализация односвязанного списка

    // List<int> l;
    // l.push_back(5);
    // l.push_back(10);
    // l.push_back(24);

    // cout << l.GetSize();
    // cout << l[1] << endl;

    // int numbersCount;
    // cin >> numbersCount;
    // for(int i = 0; i < numbersCount; i++){
    //       l.push_back(rand() % 10);
    // }

    // for(int i = 0; i < l.GetSize(); i++){
    //     cout << l[i] << endl;
    // }

    // List<int> l;
    // l.push_back(965);
    // l.push_back(13);
    // l.push_back(26);


    // for(int i = 0; i < l.GetSize(); i++){
        // cout << l[i] << endl;
    // }
    // cout << endl << "элементов в списки: " << l.GetSize() << endl << "выполняю метод pop_front " << endl << endl;
    // l.pop_front();

    // cout << endl << "insert " << endl << endl;
    // l.insert(345, 9);

    // cout << endl << "removeAt " << endl << endl;
    // l.removeAt(1);

    // cout << endl << "pop_back " << endl << endl;
    // l.pop_back();

    // l.clear();
    // for(int i = 0; i < l.GetSize(); i++){
    //     cout << l[i] << endl;
    // }

    // cout << endl << "элементов в списке " << l.GetSize() << endl;

//auto!!!

    // auto a = 1.4;
    // cout << a;

    // auto d = true;

    // vector<int> myVector = {232, 66, 987};

    // vector<int>::iterator it = myVector.begin();
    // auto it2 = myVector.begin();

    // for(auto it = myVector.begin(); it != myVector.end(); it++){
    //     cout << *it << endl;
    // }


//range-based

    // int arr[] = {55, 65, 44, 9, 665};
    // list<int> myList = {1, 2, 3, 4, 5};

    // for(auto var : arr){
    //     cout << var << endl;
    // }

    // for(auto &var : arr){
    //     var = -1; //через ссылку можно менять сам масив
    //     cout << var << endl;
    // }

    // for(const auto var : myList){
    //     cout << var << endl;
    // }



//typedef

    // std::vector<int> myVector;

    // int_vector myVector2;
    // float_vector myVector3
    // myVector2.begin();


// myname::MyClass m;
//     m.print("hello");

//union
//на одно число выделяется память когда и когда срабатывает другая функция то первая изчезает и появляется в ней мусор

    // Myunion m;
    // m.a(1);
    // m.b(23424234);
    // m.c(2424.2342424);




    // function<void()> f;
    // f = Foo;
    // f();


    // f = aoeu;
    // f();


    // function<int(int, int)> s;
    // s = Sum;
    // int result = s(2, 24);
    // cout << result << endl;


    // vector<int> v = {55, 22, 34, 31, 52};
    // vector<function<void(int)>> fvector;
    // fvector.emplace_back(Foo);
    // fvector.emplace_back(bar);
    // fvector.emplace_back(b);
    
    // Dowork(v, fvector);


//лямбда-выражение


    // vector<int> v = {55, 22, 34, 31, 52};

    // Dowork(v, [](int a){
    //     if(a % 2 == 0)
    //         cout << "bar " << a << endl;
    // });

    // Dowork(v, [](int a){
    //     cout << "anonim" << a << endl;
    // });



    // int p = 9;
    // auto f = [&p](){
    //     p = 6;
    //     cout << p;
    // };
    // f();


    // auto f = [](){
    //     return
    // };

    // auto j = f(); //будет работать если в функции написать какая она return true, a+b,




    // int a = 23;
    // int b = 123;

    // auto p = [&]()mutable //можно использовать все через ссылку
    // auto p = [=]()mutable //в конце вернет число которое было в начале
    // auto p = [a, b]()mutable{
    //     a = 53;
    //     cout << a << endl;
    //     b = 3;
    //     cout << b << endl;
    // };
    // p();

    // myclass m;


    // m.lambda();

    // auto f = []()->float //сразу говорю что float а если написать int то выведет без знаков после точки
    // {
    //     return 1.432;
    // };

    // auto result = f();

    // cout << result;



    // myfunctor f;
    // cout << f(5, 8);

    // int arr[] = {223, 6, 44, 763};

    // even e;


    // for(auto var : arr){
    //     e(var);
    // }

    // e.ShowSum();
    // e.ShowCount();

//предикаты

    // vector<int> v = {23, 45, -54, -65, 78, 5, -9, 1};

    // int result = count_if(v.begin(), v.end(), graterThanZero);

    // cout << result << endl;


    // int var = count_if(v.begin(), v.end(), lessThonZero);

    // cout << var;



    // vector<Person> people{
    //     Person("вася", 2),
    //     Person("некит", 29),
    //     Person("дима", 23),
    //     Person("виктор", 673),
    //     Person("петя", 99),
    //     Person("леня", 256),
    //     Person("джибулани", 241),

    // };
    
    // int result = count_if(people.begin(), people.end(), people.front());

    // cout << result;











    return 0;
}

