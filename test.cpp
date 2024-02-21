#include <iostream>
#include <string>

using namespace std;



int main(){
    setlocale(LC_ALL, "RU"); 

    // int num = 5;
    // int num_2 = 4;
    // int num_3 = 1;
    // int nums = num + num_2 + num_3;
    // std::cout << "переменная равна:" << nums << std::endl;
    // num_3 = 11;
    // nums = num + num_2 + num_3;
    // std::cout << "переменная равна:" << nums << std::endl;

    // int a, b = 10;
    // std::cout << "Введите ваш возраст: ";
    // std::cin >> a;
    // int c = a + b;
    // std::cout << "к твоему возраству я добавлю 10 лет: " << c << std::endl;

    // int a, b;
    // std::cout << "Введите первое значение: ";
    // std::cin >> a;

    // std::cout << "Введите второе значение: ";
    // std::cin >> b;

    // int c = a + b;
    // std::cout << "Ответ:" << c; 


    // int a, b;
    // std::cout << "Введите переменную а: ";
    // std::cin >> a;

    // std::cout << "Введите переменную b: ";
    // std::cin >> b;

    // std::cout << "a:" << a << ". b:" << b << std::endl;


    // ТИПЫ ДАННЫХ 
    // short num1 = 32; // 2 byte / -32k - 32k
    // int num2 = 9999999999; // 4 byte / -2B - 2B
    // long num3 = 999999999999999999; // 8 byte / 

    // unsigned num4 = 32; // 2 byte / 0 - 65k
    // unsigned num5 = 9999999999; // 4 byte / 0 - 4B
    // unsigned num6 = 999999999999999999; // 8 byte / 0 -  

    // // Числа с точкой
    // float num7 = 5.967567f;
    // double num8 = 5234.5437435434358f;

    // // Хранение символа
    // char sym = 'i'; // можно добавить любой 1 символ

    // bool isHappy = true; // либо true либо false


    // int num, big;
    // std::cout << "Введите число 1: ";
    // std::cin >> num;
    // std::cout << "Введите число 2: ";
    // std::cin >> big;
    // if(num >= 10){
    //     std::cout << "1) Ты выбрал число больше 10" << std::endl;
    // }
    // else if (num <= 10){
    //     std::cout << "1) Ты выбрал число меньше 10" << std::endl;
    // }
    // if(big <= 10){
    //     std::cout << "2) Ты выбрал число меньше или равно 10" << std::endl;
    // }
    // else{
    //     std::cout << "2) Ты выбрал число больше 10" << std::endl;
    // }


    // int num;
    // std::cout << "Введите число: ";
    // std::cin >> num;
    // if(num <= 9)
    //     std::cout << "Число больше 0" << std::endl;
    // else if(num <= 19)
    //     std::cout << "Ты выбрал число больше 10" << std::endl;
    // else if(num <= 29)
    //     std::cout << "Ты выбрал число больше 20" << std::endl;
    // else if(num <= 39)
    //     std::cout << "Тывыбрал число больше 30" << std::endl;
    // else if(num <= 49)
    //     std::cout << "Ты выбрал число больше 40" << std::endl;
    // else if(num <= 59)
    //     std::cout << "Ты выбрал число больше 50" << std::endl;
    // else
    //     std::cout << "Ты выбрал число больше 60" << std::endl;

    // int num;
    // std::cout << "Введите число: ";
    // std::cin >> num;

    // bool is_has_car = true;
    // if (num >= 3 || is_has_car){ // || - либо одно либо второе условие правильно выполняеться действие, && - два действие должны быть верными тогда запрос выполниться!!!! перед bool значение ставлю ! означает как ложь!!!!!!!!!!!
    //     std::cout << "Число у нас больше или равно 3" << std::endl;
    //     if (num == 5){
    //         std::cout << "число равно 5";
    //     }
    // }
    // else if (num ==2)
    //     std::cout << "просто лузер 2(((" ;
    // else if (num == 1)
    //     std::cout << "это просто 1 просто первый ";
    // else if (num == -12)
    //     std::cout << "Воу это значение с минусом)";
    // else
    //     std::cout << "ты не выбрал не одно значение с числами которые я загадал!!";
    
    // int num;
    // std::cout << "Введите число: ";
    // std::cin >> num;

    // switch(num){ 
    //     case 5: std::cout << "num is 5"; break;
    //     case 50: std::cout << "num is 50"; break;
    //     case 500: std::cout << "num is 500"; break;
    //     case 5000: std::cout << "num is 5000"; break;
    //     case 50000: std::cout << "num is 50000"; break;
    //     case 500000: std::cout << "num is 500000"; break;
    //     case 5000000: std::cout << "num is 5000000"; break;
    //     default:
    //         std::cout << "вы не попали в диапазон"; break;
    // }


    // int num1, num2;
    // std::cout << "Введите первое чилсо: ";
    // std::cin >> num1;
    // std::cout << "Введите второе число: ";
    // std::cin >> num2;
    // int num3 = num1 + num2;
    // std::cout << "Равно: " << num3;


// КАЛЬКУЛЯТОР!!!!
    // float num1, num2, res;
    // std::cout << "Enter num1: ";
    // std::cin >> num1;

    // std::cout << "Enter num2: ";
    // std::cin >> num2;

    // char math;
    // std::cout << "Enter math symbol: ";
    // std::cin >> math;

    // if (math == '+')
    //     res = num1 + num2;
    // else if (math == '-')
    //     res = num1 - num2;
    // else if (math == '*')
    //     res = num1 * num2;
    // else if (math == '/')
    //     res = num1 / num2;
    // else
    //     std::cout << "Я вас не понял!!!";
    
    // switch (math){
    // case '+':res = num1 + num2; break;
    // case '-':res = num1 - num2; break;
    // case '*':res = num1 * num2; break;
    // case '/':res = num1 / num2; break;
    // default: std::cout << "i do not understand"; break;
    // }

    // std::cout << "Result: " << res << std::endl;
    // -------------------------------------------------------------------

    // Остаток при делении
    // int a, b, z;
    // z = a % b;
    // std::cout << z;

//  сокращение операции
    // a += 5;
    // a++;

    // Рандомное число!
    // srand(time(NULL));
    // int result = 1 + rand() % 20;
    // cout << result << endl;

// for
    // for (int zx = 1000; zx >= -1; zx -= 7){
    //     cout << "i cen fly: " << zx << endl;
    // }
    // cout << "i'm giylb" << endl;


// while
    // int x = 1000;
    // while(x >= -1){
    //     cout << "i cen fly: " << x << endl;
    //     x -= 7;
    // }

// do while
    // int a = 1000;
    // do{
        // cout << "i cen fly: " << a << endl; 
        // a -= 7;
    // }while(a < 10);


    // for (int i = 1; i < 18; i++){
    //     if(i >= 10)
    //         cout << "el10: " << i << endl;
    //     else if(i <= 10)
    //         cout << "el: " << i << endl;
    //     if(i == 15)
    //         break;
        
    // }


        // for (int i = 1; i < 100; i++){
        //     if(i == 90)
        //         break;

        //     if(i % 3 == 0)
        //         continue;

        //     cout << "el: " << i << endl;
            

// ИГРА УГАДАТЬ ЦИФРУ
    // srand(time(NULL));
    // int rand_num = 1 + rand() % 5;
    // bool stop = false;
    // int user_input;

    // do{ 
    //     cout << "Enter number: ";
    //     cin >> user_input;
    //     if(user_input != rand_num)
    //         cout << "ВЫ ПРОИГРАЛИ" << endl;
    //     else
    //         stop = true;
            
    // }while(!stop);

    // cout << "ВЫ выграли";


    // int num[3];
    // num[0] = 34;
    // num[1] = 79;
    // num[2] = 36;

    // num[1]++;
    // // cout << num[1];

    // float num1[10] = {3, 5, 43, 45, 56, 78, 77, 54, 55, 97};
    
    // for(int x = 0; x < 10; x++){
    //     cout << "el " << x << ": " << num1[x] << endl;
    // }


    // float number[5];
    // for(int x = 0; x < 5; x++){
    //     cout << "enter number: " << x << ": ";
    //     cin >> number[x];
    // }


    // float summa = 0;
    // float min = number[0];
    // float max = number[0];
    // for(int x = 0; x < 5; x++){
    //     summa += number[x];
    //     if(number[x] < min)
    //         min = number[x];
    //     if(number[x] > max)
    //         max = number[x];
    // }
    // cout << "Summa: " << summa << endl;
    // cout << "min: " << min << endl;
    // cout << "max: " << max << endl;



    // for(int x = 0; x < 5; x++){
    //     cout << "el " << x << ": " << number[x] << endl;
    // }



    // float matrix[5][3] ={
    //     {1, 4, 5},
    //     {14, 16, 18},
    //     {43.78, 65.8, 88.8},
    //     {999, 888, 777},
    //     {123, 456, 789}
    // };
//     for(int x = 0; x < 5; x++){
//     for(i = 0; i < 3; i++){
//         cout << matrix[x][i] << endl;
//     } 
// }

// динамическая память
    // int *num = new int[3];
    // num[0] = 49;
    // cout << num[0] << endl;
    // delete[] num;
    // cout << "el:" << num[0] << endl;


    // char word[] = "hi!";    // {'H', 'i', '!'};
    // for(int i = 0; i < 3; i++)
    //     cout << word[i];



    // string words = "me  lox";
    // words[0] = 'Y';
    // words[1] = 'o';
    // words[2] = 'u';
    // words[3] = ' ';
    // cout << "\n" << words << endl;    

    // cout << "Скажи пару слов: ";
    // cin >> words;
    // cout << "new: " << words; 


    
    












    return 0;
}

