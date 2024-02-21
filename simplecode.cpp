#include <iostream>
#include <string>
#include <ctime>
#define DEBUG
// #define FOO(x, y) ((x) * (y))
// #define tab "\t" //можно менять надпись который нравится к примеру #define you "lox" если вводишь you то будет стринг lox 

using namespace std;


// void foo(){
//     cout << "я функция, меня вызвали!" << endl;
// }


// int Sum(int a, int b){
//     return a + b;
// }


// int add(int a, int b, int c){
//     return a + b + c;
// }

// void anton(float a, float b, float c){
//     cout << a + b + c;
// }


// void foo(int a){
//     a++;
// }


// void FillArray(int arr[], const int size){;
//     int a = sizeof(arr);
//     for(int i = 0; i < size; i++)
//         arr[i] = rand() % 10;
// }

// void PrintArray(int arr[], const int size){
//     for(int i = 0; i < size; i++)
//         cout << arr[i] << endl;
// }


// inline int Sum(int a, int b){
//     return a + b;
// }



// int Sum(int a, int b, int c){
//     cout << "3 числа " << endl; 
//     return a + b + c;
// }

// int Sum(int a, int b){
//     return a + b;
// }

// double Sum(double a, double b){
//     a++;
//     return a + b;
// }

// template <typename T1, typename T2>
// void Sum(T1 a, T2 b){
//     cout << a << endl;
//     cout << b << endl;
// }


// РЕКУРСКИЯ 
// int Foo(int a){
//     if(a < 1)
//         return 0;
    
//     a--;
//     cout << a << endl;

//     return Foo(a); 
// }



// ФАКТОРИАЛ 
// int Fact(int  N){
//      if(N == 0)
//         return 0;
//     if(N == 2) // ЗНАЧИТ 3*4*5 Fact(5)
//         return 1;
//     return N * Fact(N - 1);
// }


//передача указателя 
// из 16 ричную добовляют 1 и тогда работает а если просто а то он будет только в этой функции работать!!!!!!!№!!
// void Foo(int *pa, int *pb, int *pc){
//     (*pa)++;
//     (*pb) = 62;
//     (*pc) = -20;
// }



// void Swap(int *pa, int *pb){
//     int temp = *pa;
//     *pa = *pb;
//     *pb = temp;
// }



// void Foo(int a){
//     a = 1;
// }

// void Foo2(int &a){
//     a = 2;
// }

// void Foo3(int *a){
//     *a = 3;
// }


// void Foo(int &a, int &b, int &c){
//     a = 10;
//     b *= 2;
//     c -= 100; 
// }




// template <typename T>
// void Swap(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp; 
// }


// void FillArray(int* const arr, const int size){
//     for(int i = 0; i < size; i++)
//         arr[i] = rand() % 10;
// }


// void ShowArray(int* const arr, const int size){
//     for(int i =0; i < size; i++)
//         cout << arr[i] << "\t";
//     cout << endl;
// }


// void push_back(int *&arr, int &size, const int value){
//     int *newArray = new int[size + 1];
//     for(int i = 0; i < size; i++){
//         newArray[i] = arr[i];
//     }

//     newArray[size] = value; 

//     size++;

//     delete[]arr;

//     arr = newArray;
// }


// void pop_back(int *&arr, int &size){
//     size--;
//     int *dontArray = new int [size];
//     for(int i = 0; i < size; i++){
//         dontArray[i] = arr[i];
//     }

//     delete[]arr;

//     arr = dontArray;
// }


// void foo(char *str){
//     cout << strlen(str) << endl;
// }



// int strLengt(char *str){
//     int counter = 0;

//     while (str[counter] != '\0')
//     {
//         counter++;
//     }
    


//     return counter;
// }



// int foo1(int a){
//     return a - 1;
// }

// int foo2(int a){
//     return a * 2;
// }



// string GetDataFromBD(){
//     for(int i = 0; i < 10; i++){
//         cout << "enter: " << i << endl;
//     }
// }

// string GetDataFromWebServer(){
//     return "Data web server";
// }

// string GetDataFromDalbaeb(){
//     return "you facking animal";
// }

// void ShowInfo(string (*foo)()){
//     cout << foo() << endl;
// }























int main(){
    setlocale(LC_ALL, "RU");

    // int symvolCoutn, lineType, index = 0;
    // char sybol;

    // cout << "введите кол-во в линии: ";
    // cin >> symvolCoutn;

    // cout << "тип символа для ввода:";
    // cin >> sybol;

    // cout << "ввебирите тип линий\n1 - вертикальная\n2 - горизонтальная" << endl;;
    // cin >> lineType;

    // if(lineType != 1 && lineType != 2)
    //     cout << "не коректный тип линии";
    //     return;

    // while(index < symvolCoutn){
    //     if(lineType == 1)
    //         cout << sybol << endl;
    //     if(lineType == 2)
    //         cout << sybol;
    //     index++;
    // }
    
    // cout << endl << endl;

    // int i = 0;

    // cout << "1й цикл" << endl;
    // for(; i < 11; i++){
    //     cout << "переменная i = " << i << endl;
    // }

    // cout << "2й цикл" << endl;
    // for(; i < 21; i++){
    //     cout << "переменная i = " << i << endl;
    //     if(i == 15)
    //         break;
    // }
    // cout << "переменная равна 15";



    // int i = 0;
    // while(true){
    //     cout << "i: " << i + 1 << endl;
    //     i++;
    //     if(i == 8)
    //         break;
    // }


    // for(int i = 0; i < 10; i++){
    //     if(i == 5)
    //         continue;
    //     cout << "i: " << i << endl;

    // }

    // int i = 0;
    // do{
    //     cout << "i:" << i << endl;
    //     i++;
    //     if(i == 5){
    //         continue;
    //     }

    // }while(i < 10);


    // cout << "один" << endl;

    // goto link;
    
    // cout << "два" << endl;
    // cout << "три" << endl;

    // link:

    // cout << "четыре" << endl;
    // cout << "пять" << endl;

    // for(int i = 0; i < 6; i++){
    //     cout << "i: " << i << endl;
    //     if(i == 3)
    //         continue;
    //     else if (i == 4)
    //         continue;
    // }

    // int i = 0;
    // do{
    //     i++;
    //     if(i == 2)
    //         continue;
    //     else if(i == 3)
    //         continue;
    //     cout << "i: " << i << endl;
    // }while(i < 6);


    // int i = 0;
    // do
    // {
    //     i++;
    //     if(i <= 2){
    //     cout << "before the continue\n";
    //     continue;
    //     }
    //     cout << "after the continue, should never print\n";
    //  } while (i < 3);

    // cout << "after the do loop\n";



    // int heigth, weigth;
    // char znak;

    // cout << "Введите высотку: ";
    // cin >> heigth;

    // cout << "Введите длину: ";
    // cin >> weigth;

    // cout << "Введите знак: ";
    // cin >> znak;

    // for(int i = 0; i < heigth; i++){
    //     for(int j = 0; j < weigth; j++)
    //         cout << znak;
    //         cout << endl;
    // }



    // for(int i = 0; i < 1; i++){
    //     cout << "*****" << endl;
    //     for(int j = 0; j < 2; j++){
    //         cout << "*****" << endl;
    //     }
    // }


    
    // string words = "hi pidor";
    // words[];
    
    // string arr[9];
    // arr[0] = "h";
    // arr[1] = "i";
    // arr[2] = " ";
    // arr[3] = "p";
    // arr[4] = "i";
    // arr[5] = "d";
    // arr[6] = "o";
    // arr[7] = "r";
    // arr[8] = "!";
    
    // cout << arr;

    // int ar[4];
    // ar[0] = 6;
    // ar[1] = 9;
    // ar[2] = 7;
    // ar[3] = 6;
    // cout << ar[0] << endl;
    // cout << ar[1] << endl;
    // cout << ar[2] << endl;
    // cout << ar[3] << endl;
    // cout << ar[10] << endl; // ошибка
    
    // int arr[4] = {5, 6, 7, 9};
    // cout << arr[2];


    // const int size = 5;
    // int arr[size]{44, 67, 768, 66, 80};


    // for(int i = 0; i < size; i++)
    //     arr[i] = i;

    // for(int i = 0; i < size; i++)
    //     cout << arr[i] << endl;


    // МОСИВЫ!!!!
    // const int SIZE = 10;
    // int arr[]{5, 7, 87, 67};
    
    // cout << sizeof(arr)/sizeof(arr[0]) << endl; // скажет сколько масивов 
    // for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
        // cout << arr[i] << endl;

    
    // for (int i = 0; i < SIZE; i++)
    //     arr[i] = i;


    // for(int i = 0; i < SIZE; i++)
    //     cout << arr[i]     ad(23, 377, 88);
    // cout << add(23, 323, 88) << endl;
    

    // anton(11.11, 12.12, 13.13);
//  endl;
    // cout << sizeof(float);


// РАНДОМНОЕ ЧИЛСО ОТ 0 ДО 20!!!!
    // srand(time(NULL));
    // bool alreadlyThere;
    // const int SIZE = 10;
    // int arr[SIZE];

    // for(int i = 0; i < SIZE;){
    //     alreadlyThere = false;
    //     int newRandomValue = rand() % 20;

    //     for(int j = 0; j < i; j++){
    //         if(arr[j] == newRandomValue){
    //             alreadlyThere = true;
    //             break;
    //         }
    //     }
    //     if(alreadlyThere != true){
    //         arr[i] = newRandomValue;
    //         i++;
    //     }
        
    // }
    // for(int i = 0; i < SIZE; i++)
    //     cout << arr[i] << endl;

    // int minValue;

    // for(int i = 0; i < SIZE; i++){
    //     if(arr[i] < minValue)
    //         minValue = arr[i];
    // }
    
    // cout << "минимальное число: " << minValue;



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


    // int j = 12, i = 2323
    // int c = Sum(j, i);
    // cout << c;

    // int c = Sum(45, 43);
    // cout << c;

    // ad(23, 377, 88);
    // cout << add(23, 323, 88) << endl;
    

    // anton(11.11, 12.12, 13.13);



    // int a = 1;
    // foo(a);
    // cout << a << endl;

    // srand(time(NULL));
    // const int SIZE = 10;
    // int masiv[SIZE];

    // int a = sizeof(masiv);
    
    // FillArray(masiv, SIZE);
    // PrintArray(masiv, SIZE);



    // const int ROW = 3;
    // const int COL = 4;
    // int arr[ROW][COL];

    // for(int i = 0; i < ROW; i++){
    //     for(int j = 0; j < COL; j++){
    //         arr[i][j] = rand() % 10;
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }



    // cout << Sum(5, 8) << endl;
    // cout << Sum(4.8, 45.9) << endl;
    // cout << Sum(5.7, 43.3);
    
    // cout << Sum(5, 10) << endl;
    // cout << Sum(5.2, 52.9) << endl;
    // cout << Sum(5, 64.9) << endl;


    // Foo(5);

    // cout << Fact(5) << endl;


// УКАЗАТЕЛЬ!!

    // int a = 5;

    // int *px = &a;
    // cout << px << endl; //0x7fffffffdacc
    // cout << *px << endl; // =5

    // int *px2 = &a; //одинаковый с *px
    // *px2 = 4;
    // cout << a;




    // const int SIZE = 5;
    // int arr[SIZE]{4, 553, 87, 85, 657}; // масивы начинаются с 0!!!!
    // cout << *arr << endl; // получаешь 1 значение масива!!!!!!
    // cout << *(arr+1) << endl; // получаешь 2 значение масива и +4 байта!!!!


    // for(int i = 0; i < SIZE; i++)
    //     cout << *(arr+i) << endl; // (arr+i) получится список адресов 0x7fffffffdad0


    // cout << *(arr+10) << endl;


    // for(int i = 0; i < SIZE; i++)
    //     cout << arr[i] << endl;

    // cout << "================================" << endl;

    // int *parr = arr;

    // for(int i = 0; i < SIZE; i++)
    //     cout << parr[i] << endl;


    // cout << arr << endl;
    // cout << parr << endl;



    // int var1 = 22;
    // int var2 = 44;
    // cout << "var1\t" << var1 << endl;
    // cout << "var2\t" << var2 << endl;

    // cout << "swap" << endl;
    // Swap(&var1, &var2);

    // cout << "var1\t" << var1 << endl;
    // cout << "var2\t" << var2 << endl;


//указатели и ссылки!!
//     int a = 5;
//     int *pa = &a;

//     int &aref = a;

//     cout << pa << endl;
//     pa++; //шаг +4 байта !!! 0x7fffffffdac4
//     cout << pa;
// // они меняются если в вверхнем добавить * а в нижним &
//     cout << aref << endl;
//     aref++ ; //шаг +1!!!
//     cout << aref;


    // int a = 5;
    // int *pa = &a;
    // int &ppa = *pa;
    // int *pppa = &ppa;
    // cout << *pa << endl;
    // cout << ppa << endl;
    // cout << *pppa << endl;



    // int value = 5;

    // cout << value << endl;
    // cout << endl;
    // Foo(value);
    // cout << value << endl;
    // Foo2(value);
    // cout << value << endl;
    // Foo3(&value);
    // cout << value << endl;




    // int a = 0, b = 4, c = 34;
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // cout << "foo" << endl;
    // Foo(a, b, c);

    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;



    // string value1;
    // string value2;
    
    // cout << "введите два значения и я их переверну" << endl;
    // cout << "введите первое значение: ";
    // cin >> value1;
    // cout << "введите второе значение: ";
    // cin >> value2;

    // cout << endl;
    // cout << "наоборот" << endl;
    // cout << endl;
    // Swap(value1, value2);


    // cout << value1 << endl;
    // cout << value2 << endl;


//ДИНАМИЧЕСКАЯ ПАМЯТЬ
    // int *pa = new int;
    // *pa = 10;
    // cout << *pa << endl;
    // delete pa;
    // pa = nullptr;

    // cout << *pa << endl;


    // int size = 0;
    // cout << "enter array size ";
    // cin >> size;
    // int *arr = new  int[size];
    // for(int i = 0; i < size; i++){
    //     arr[i] = rand() % 10;
    // }

    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << "\t";
    //     // cout << *(arr + i) << endl; //одинаково arr[i]
    //     cout << arr + i << endl; //0x55555556b504
    // }
    
    // delete [] arr;



    // int row;
    // int col;
    // cout << "количество строчек: ";
    // cin >> row;
    // cout << "количество калонок: ";
    // cin >> col;
    // int **arr = new int*[row];
    // for(int i = 0; i < row; i++){
    //     arr[i] = new int [col];
    // }

    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++)
    //         arr[i][j] = rand() % 20; 
    // }


    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++)
    //         cout << arr[i][j] << "\t"; 

    //     cout << endl;
    // }

    // for(int i = 0; i < row; i++){
    //     delete [] arr[i];
    // }


    // delete [] arr;



    // int size = 10;
    // int *firstArray = new int[size];
    // int *secondArray = new int [size];

    // FillArray(firstArray, size);
    // FillArray(secondArray, size);

    // cout << "FirstArray =\t";
    // ShowArray(firstArray, size);
    // cout << endl;
    // cout << "SecondArray =\t";
    // ShowArray(secondArray, size);

    // delete[]firstArray;
    // firstArray = new int[size]; // перезаписать его заново но уже он равен другому!!!!
    // for(int i = 0; i < size; i++){
    //     firstArray[i] = secondArray[i]; //масивы не копируются а становятся одним целым и = 1 и в = 1!!!!!
    // }
    // cout << endl <<  "======================================" << endl;
    // // это не 2 указателя на 1 объект а 2 разных масива!

    // cout << "FirstArray =\t";
    // ShowArray(firstArray, size);
    // cout << endl;
    // cout << "SecondArray =\t";
    // ShowArray(secondArray, size);

    // delete[]secondArray;
    // delete[]firstArray;

    


    // int size = 5;
    // int *arr = new int[size];

    // FillArray(arr, size);
    // ShowArray(arr, size);

    // // push_back(arr, size, 111);
    // // ShowArray(arr, size);

    // pop_back(arr, size);
    // ShowArray(arr, size);

    // delete[]arr;
 
    // char string[] = "hello pidor"; // {'h', 'e', 'l', 'l', 'o', '\0'}
    // cout << strlen(string);


//преобразовать типов!!!
    // double a = 33.3;
    // int b = 33.232424;
    // cout << (char)a;

    // for(int i = 0; i < 255; i++){
    //     cout << "code = " << i << "\t" << "char = " << (char)i << endl;
    // }

    // char *string = "hello";
    // cout << string = endl;

    // char *strArr[] = {"hello", "world", "you"};
    // cout << strArr[1] << endl;
    // for(int i = 0; i < 3; i++){
    //     cout << strArr[i];
    // }


    // char *newArr = "hello bitch";
    // foo(newArr);



    // char str[] = {'h','e','l','l','o','\0'}; //если по букве писать то в конце нужно самому дописывать иначе не поймет где конец  
    // char *str = "hello pediki";
    // cout << strLengt(str) << endl;
    // char arr[] = "hellooooeuhuoouhtuoetnoue";
    // cout << strlen(arr) << endl;
    // char arr[] = "hello pypok!";
    // cout << str(arr);


//конкатенация строк

    // язык С
    // char result[255]{};
    // char str[255] = "hello";
    // char str2[255] = "world";

    // cout << str << endl;
    // strcat(result, str);
    // strcat(result, str2);
    // cout << result << endl;


    // string str = "Антон";
    // string str2 = "Яковлевич";
    // string str3 = "Ленин";
    // string result;
    // result = "Фамилия: "  + str3 + "\tИмя: " + str  + "\tОтчество: " + str2;
    // cout << result; 


//передача функции в качестве параметра!!!
    // int(*fooPointer)(int a);
    // fooPointer = foo1;
    // cout << fooPointer(5) << endl;


    // ShowInfo(GetDataFromBD);



//условная компиляция

// #define DEBUG
//#define DEBUG 4
// if  DEBUG > 3
// cout << "больше 3"

// #ifdef DEBUG
//     cout << "начало цикла" << endl;
// #endif 

//     for(int i = 0; i < 4; i++){
//         cout << i << endl;
//     }

// #ifdef DEBUG
//     cout << "дебаг определен" << endl;
// #else
//     cout << "дебаг не определен" << endl;
// #endif



//тернарные опереторы
    // int a;
    // cout << "введите значение переменной а: "; 
    // cin >> a;

    // if(a < 10){
    //     cout << "меньше 10";
    // }else{
    //     if(a > 10){
    //         cout << "больше 10";
    //     else{
    //         cout << "равно 10";
    //     }
    
    // }

    // (a < 10) ? (cout << "меньше 10") : (a > 10) ? (cout << "больше 10") : (cout << "равно 10");


















































































































    return 0;

}