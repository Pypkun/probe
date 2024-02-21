#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <forward_list>
#include <array>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <ctime>

using namespace std;



// template<typename T>
// void PrintList(const list<T> &lst){
//     for(auto i = lst.cbegin(); i != lst.cend(); ++i){
//         cout << *i << endl;
//     }
// }



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
//     int age;

//     Person(string name, double score, int age){
//         this->name = name;
//         this->score = score;
//         this->age = age;
//     }

//     bool operator()(const Person &p){
//         return p.score > 100;
//     }
// };



// class Point{
// public:

//     int a;
//     int b;

//     Point(int a, int b){
//         this->a = a;
//         this->b = b;
//     }

// };




class IAction{
public:
    virtual void action() = 0;
};

class CatAction : public IAction{
    virtual void action() override{
        cout << "cat" << endl;
    }
};


class TeaAction : public IAction{
    virtual void action() override{
        cout << "tea" << endl;
    }
};

class DogAction : public IAction{
    virtual void action() override{
        cout << "dog" << endl;
    }
};

class SleepAction : public IAction{
    virtual void action() override{
        cout << "sleep" << endl;
    }
};








int main(){
    setlocale(LC_ALL, "RU");

    // myList.assign(); //старые стирает 1 число сколько а 2 какие элементы будут там
    // myList.remove(66); //удаляет конкретное чилсо если есть такой элемент!!!
    // myList.insert();                                                           
    // myList.clear(); //удаляет все элемента
    // myList.reverse(); // числа идут в обратном порядке
    // myList.unique(); //удаляет дубликаты которые идут друг за другом!!!
    // myList.pop_back(); //удаляет последний элемент
    // myList.pop_front(); //удаляет первый элемент
    // myList.sort();//сортировка от меньшего до большего
    // myList.push_back(5); //в конец
    // myList.push_front(152); //в начало


    // vector<int>::reverse_iterator // с конца вызывается rbegin нужно исполозовать и остальное
    // myVector.end(); //вызывает следующий элемент пока не остановить, != в цикле работает
    // myVector.begin() //выводит первый элемент!
    // vector<int> v(20, 52);//воздаться 20 ячеек и там будет написано 52!
    // v.shrink_to_fit();//удалит не нужные элементы которые не используются
    // vector<int> v; // = {232, 6, 670, 7, 76};
    // cout << v.empty(); //возращает тру или фолс, элементы есть или нет!! фолс если есть а тру если нет!!
    // v.resize(20); //вызвать объекты !!
    // v.insert(it, 6); //вставка элемента
    // v.erase(); //стереть элементы
    // v.reserve(100); //скажет сколько элементов должно создаться изначально в массив
    // cout << v.at(10) << endl; //выводит число под индексом
    // v.pop_back(); //удаляет последний вектор!


    // auto it = myList.begin(); добовление элемента хоть куда главное ++
    // advence(it, 3) на сколько хочу сдвинуть
    // myList.insert(it, 1111);


    // auto it = myList.begin();
    // it++;
    // myList.erase(it, 1111); удаляет выбраный элемент
    // myList.insert(it, 1111); // добовляет выбраный элемент
    // myVector.erase(itErase, itErase + 3); //можно удалять сразу нельсколько

    // list<int> mylist = {23,78,768}
    // list<int> mylist2 = {1,,2,3,4}
    //  mylist.assign(mylist2.begin(), mylist.end())
    // PrintList(mylist) с 2 списка все элементы добавятся в 1 список

////////////////////////////////////////////////////////////////////////////////////


    // vector<int> v; // = {232, 6, 670, 7, 76};

    // v.reserve(100); //скажет сколько элементов должно создаться изначально в массив
    // v.push_back(2);
    // v.push_back(78);
    // v.push_back(45);




    // cout << "количество элементов" << v.size() << endl;
    // v.pop_back(); //удаляет последний вектор!
    // cout << "количество элементов" << v.capacity() << endl;
    // // v.push_back(4);
    // cout << v.empty(); //возращает тру или фолс, элементы есть или нет!!
    // v.shrink_to_fit();//удалит не нужные элементы которые не используются
    // cout << "количество элементов" << v.size() << endl;
    // cout << "количество элементов" << v.capacity() << endl;

    // cout << "количество элементов" << v.size() << endl;

    // cout << v.at(10) << endl; //выводит число под индексом

    // v[0] = 2;

    // cout << "количество мосивов в векторе " << v.size() << endl;
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << endl;
    // }




    // list<int> myList = {72234, 667, 556, 76, 76};

    // myList[0]//нельзя
    // list<int>::iterator it = myList.begin();
    // auto it = myList.begin();

    // auto it = myList.begin();

    // PrintList(myList);




    // vector<int> myVector = {72234, 667, 556, 76, 96};

    // vector<int>::iterator it = myVector.begin();

    // for(vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++){
    //     cout << *it << endl;
    // }
    // cout << endl << "insert " << endl << endl;

    // advance(it, 3);
    // myVector.insert(it, 23);



    // for(vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++){
    //     cout << *it << endl;
    // }
    // cout << endl << "erase " << endl << endl;

    // auto itErase = myVector.begin();
    // advance(itErase, 4);
    // myVector.erase(itErase, itErase + 3);

    // for(vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++){
    //     cout << *it << endl;
    // }



    // list<int>::operator it;

    // it++;


//forward_list выводит все в перед, не хранит предыдущие значения!

    // --it; //нельзя сделать!!
    //before_begin начинает с 0 элемента а begin с 1 элемента


    // forward_list<int> fl = {6, 66, 7, 65};

    // forward_list<int>::iterator it = fl.before_begin();
    // fl.insert_after(it, 9999);
    // fl.erase_after(it); //удаляет 1 элемент а счет начинается с 0

    // for(auto var : fl){
        // cout << var << endl;
    // }

//array

    //arr.at(0) если нет такого объекта сразу бросает ошибку
    //arr.fill(-1); заполняет сколько выделено полей числами 
    //arr.front() 1 элемент в таблице
    //arr.back() последний элемент в таблице



    // array<int, 4> arr = { 1, 2, 3, 4};


    // for(int i = 0; i < arr.size(); ++i){
    //     cout << arr[i] << endl;
    // }

    // for(auto var : arr){
    //     cout << var << endl;
    // }


//deque
//vector и двух связаный список это deque

//быстрее чем в списке но медленнее чем в векторе
//добавление быстрее чем в векторе
    

    // deque<int> d = {1, 2, 3, 4, 5};
    // d


//set
//multiset

    //s.insert() добовление к меньшему к большему как в бинарном дереве!не хранит одинаковые значения
    //s.find() скажет есть ли этот элимент в списке
    //s.erase() удаляет элемент

    //m.insert() может хранить несколько одинаковых значений
    //auto it = m.lower_bound(1); ищет число и выведет первое которое нашло
    //auto it2 = m.upper_bound(1); выведет число которое больше числа которое ввели
    //auto it3 = m.equal_range(1); вызывает число которое ввели и больше которое, ловер и апер вместе



    // set<int> s = {23, 665, 65, 3, 23, 9};
    // s.insert(10);
    // s.insert(2);



    // auto result = s.erase(2); //возращает 1 тру и 0 фолс
    // auto result = s.insert(111); //возращает тру и что смог добавить число или фолс

    // int value;
    // cin >> value;

    // if(s.find(value) != s.end()){
    //     cout << "присутствует: " << value << endl;
    // }else{
    //     cout << "отсутствует: " << value << endl;
    // }

    // for(auto var : s){
    //     cout << var << endl;
    // }

    // multiset<int> m = {1, 2432, 655, 65, 6588, 5557}; 
    
    // m.insert(1);


    // auto it = m.lower_bound(1);
    // auto it2 = m.upper_bound(1);
    // // auto it3 = m.equal_range(1);

    // for(auto var : m){
    //     cout << var << endl;
    // }



//map
//multimap может хранить дублирующие ключи


//не добовляет новые элемент с одинаковым числом


    //m.emplace(10, "phone"); добавляет элементы
    // auto it = m.find(10);
    // cout << it->second; выведет phone
    //cout << m["гриша"]; можно получать значение чисел
    //m["кирилл"] = 23223; //добавиться если нету
    //m.at("петя") = 2; // если его нет то он не добавиться
    //m.erase("петя"); удалит элемент



    // pair<int, string> p(1, "phone");
    // cout << p.first << endl; //первая 
    // cout << p.second << endl; //второй


    // map<string, int> m;
    // m.insert(make_pair(1, "phone"));
    // auto res = m.insert(pair<int, string>(2, "phone"));
    // auto res2 = m.emplace(10, "phone");
    // auto res3 = m.emplace(3, "huouoeuoeuouoe");

    // m.emplace("петя", 42);
    // m.emplace("гриша", 38);
    // m.emplace("алена", 12);
    // m["петя"] = 33;
    // cout << m["петя"];
    // m["кирилл"] = 23223; //добавиться если нету
    // m.at("петя") = 2; // если его нет то он не добавиться
    // m.erase("петя");

    // auto it = m.find(12);
    
    // if(it != m.end()){
    //     cout << it->second << endl;
    // }else{
    //     cout << "элемент не найден" << endl;
    // }


//stack

//может взаимодействовать vector list deque

    // s.empty(); //буливое значение есть или нет числы
    //s.top(); // выведет последний элемент который был добавлен
    // s.pop(); //удаляет последний элемент


    // stack<int, list<int>> s;
    // s.push(2); //копирует что внутри
    // s.push(4);
    // s.push(23);
    // s.emplace(234); // добовляет что внутри без копирования

    // auto a = s._Get_container(); // нк работает

    // cout << s.size(); //возращает кол-во элементов в стеке
    // s.empty(); //буливое значение есть или нет числы
    // cout << s.top() << endl;
    // s.pop(); //удаляет последний элемент
    // cout << s.top() << endl;

    // while(!s.empty()){
    //     cout << s.top() << endl;
    //     s.pop();
    // }


//queue 
//по умолчанию deque
//может взаимодействовать list deque

// priority_queue vector
//может взаимодействовать vector deque


    // q.back() //предоставляет доступ к последнему элементау
    //q.emplace(234);// добовляет элемент
    // q.empty(); //буливое значение есть или нет числы
    // q.front(); //доступ к первому элементу 
    // q.pop(); извлекает последний элемент в очереди то есть первый который туда попал

    

    // priority_queue<int> p;
    // p.emplace(23); //добавляеться от большему к меньшему 
    // p.emplace(77);
    // p.emplace(63);
    
    
    // while(!p.empty()){
    //     cout << p.top() << endl;
    //     p.pop();
    //     cout << "size: " << p.size() << endl;
    // }




    // queue<int> q;
    // q.emplace(23);
    // q.emplace(77);
    // q.emplace(63);

    // cout << q.back(); //предоставляет доступ к последнему элементау
    // cout << "size: " << q.size() << endl;
    // while(!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    //     cout << "size: " << q.size() << endl;
    // }

    // auto a = q.c; //Get_counteiner()
    // a.



    // for(auto var : arr){
    //     cout << var << endl;
    // }



    // vector<int> v = {16, 22, 352, 44, 57};

    // sort(v.begin(), v.end(), [](int a, int b){
    //     return a < b;
    // });


    // for(auto var : v){
    //     cout << var << endl;
    // }


    // const int SIZE = 5;
    // int arr[SIZE] = {16, 22, 352, 44, 57};

    // sort(arr, arr + SIZE, [](int a, int b){return a > b;});

    // for(auto var : arr){
    //     cout << var << endl;
    // }


    // vector<Person> people{
    //     Person("антон", 2),
    //     Person("некит", 29),
    //     Person("дима", 23),
    //     Person("виктор", 673),
    //     Person("яша", 99),
    //     Person("леня", 256),
    //     Person("джибу", 241),

    // };


    // sort(people.begin(), people.end(), [](const Person &p1, const Person &p2){
    //     return p1.name < p2.name;

    // });

    // sort(people.begin(), people.end(), [](const Person &p1, const Person &p2){
    //     return p1.score < p2.score;

    // });


    // for(auto el : people){
    //     cout << "name: \t" << el.name << "\tball: " << el.score << endl;
    // }



//find_if

    // vector<Person> people{
    //     Person("антон", 2),
    //     Person("некит", 29),
    //     Person("дима", 23),
    //     Person("виктор", 673),
    //     Person("яша", 99),
    //     Person("леня", 256),
    //     Person("джибу", 241),

    // };


    // vector<int> v = {234, 45, 66, 76, 7789, 46};

    // auto result = find(v.begin(), v.end(), 24);
    // auto result = find_if(v.begin(), v.end(), [](int a){
    //     return a < 0;
    // });
    // auto result = find_if_not(v.begin(), v.end(), 24); //работает наоборот если не правльно то тру если правильно то фолсе

    // auto result = find_if(people.begin(), people.end(), [](const Person &p){
    //     return p.name == "яша" && p.score == 99;
    // }); 

    // if(result == people.end()){
    //     cout << "ne nashli" << endl;
    // }else{
    //     cout << "nashel" << endl;
    // }


//copy_if

    // vector<Person> people{
    //     Person("антон", 200, 17),
    //     Person("некит", 29, 22),
    //     Person("иван", 23, 18),
    //     Person("виктор", 673, 40),
    //     Person("яша", 99, 23),
    //     Person("иван", 256, 19),
    //     Person("джибу", 241, 20),

    // };

    // vector<Person> result;

    // // copy(people.begin(), people.end(), back_inserter(result));
    // copy_if(people.begin(), people.end(), back_inserter(result), [](const Person &p){
    //     return p.age > 10;
    // });

    // sort(result.begin(), result.end(), [](const Person &p1, const Person &p2){
    //     // return p1.age > p2.age; //сначала старшие потом младшие
    //     return p1.name < p2.name; //от а до я имена
    // });

    // cout << "el: " << result.size() << endl;

    // for(auto element : result){
    //     cout << "name: " << element.name << "\tscore: " << element.score << "\tage: " << element.age << endl;
    // }

//remove_if

    // vector<int> v = {2, 45, 66, 76, 2, 46};

    // auto result = remove(v.begin(), v.end(), 2);

    // v.erase(result, v.end());


    // vector<Person> people{
    //     Person("антон", 200, 25),
    //     Person("некит", 29, 22),
    //     Person("иван", 23, 18),
    //     Person("виктор", 63, 40),
    //     Person("яша", 99, 23),
    //     Person("иван", 256, 32),
    //     Person("джибу", 241, 23),
    // };

    // auto result = remove_if(people.begin(), people.end(), [](const Person &p){
    //     return p.score < 150;
    // });

    // people.erase(remove_if(people.begin(), people.end(), [](const Person &p){
    //     return p.score < 150 || p.age > 30;
    // }), people.end());


    // cout << "el: " << people.size() << endl;

    // for(auto var : people){
    //     cout << "name: " << var.name << "\tball: " << var.score << "\tage: " << var.age << endl;
    // }


    // string str = "hi, my name is Gitler228";
    // cout << str << endl;

    // str.erase(remove(str.begin(), str.end(), ' '), str.end());

    // cout << str << endl;


//max_element,  min_element, minmax_element


    // vector<int> v = {12, 34, 12, 45, 23, 56, 72, 25};

    // list<int> l = {23, 66, 97, 65, 67};

    // auto result = min_element(l.begin(), l.end());
    // cout << *result << endl;


    // const int SIZE = 5;
    // int arr[SIZE] = {1, 2, 3, 4, 5};


    // auto result = max_element(arr, arr + SIZE);
    // cout << *result;


    // auto result = minmax_element(v.begin(), v.end());
    // cout << "min: " << *result.first << "max: " << *result.second << endl;

//accumulate

    // const int SIZE = 5;
    // int arr[SIZE] = {1, 2, 3, 4, 5};

    // auto result = accumulate(arr, arr + SIZE, 0); //посчитает все значение массива
    // cout << result; 
 
    // int v[] = {12, 43, 56, 23, 7, 23};
    // auto result = accumulate(begin(v), end(v), 0); 
    // cout << result;    


    // vector<int> v = {1, 2, 3, 5, 2, 5};

    // auto result = accumulate(begin(v), end(v), 0, [](int a, int b){
    //     if(b % 2 == 0){
    //         return a + b;
    //     }else{
    //         return a;
    //     }
    // });

    // auto result = accumulate(next(begin(v)), end(v), to_string(v[0]), [](string a, int b){
    //     return a + "-" + to_string(b);//разделяет 1-2-3-5-2-5
    // });

    // cout << result;


//equal одинаковы массивы или нет
//mismatch если не равно выведет 2 числа которые не равны


    // int arr[] = {12, 123, 123, 124, 45, 63, 12};
    // vector<int> arr2 = {122, 123, 123, 124, 45, 63, 12};

    // sort(begin(arr), end(arr));
    // sort(begin(arr2), end(arr2));

    // bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));

    // cout << result;


    // auto result = mismatch(begin(arr), end(arr), begin(arr2), end(arr2));

    // if(result.first == end(arr) && result.second == end(arr2)){
    //     cout << "+" << endl;
    // }else{
    //     cout << "-" << endl;
    // }


    // vector<Point> v1{
    //     Point(1,4),
    //     Point(2,4),
    //     Point(5,3),   
    // };

    // vector<Point> v2{
    //     Point(2,4),
    //     Point(1,4),
    //     Point(5,3),   
    // };

    // sort(v1.begin(), v2.end());
    // sort(v2.begin(), v2.end());

    // bool result = equal(begin(v1), end(v1), begin(v2), end(v2), [](const Point &p1, const Point &p2){
    //     return p1.a == p2.a && p1.b == p2.b;;
    // });

    // cout << result << endl;


//& тогда массив тоже меняется

    // int arr[] = {23, 45, 23, 45, 22};

    // for_each(begin(arr), end(arr), [](int a ){ //& тогда массив тоже меняется
    //     ++a;
    //     cout << a << endl;
    // });


    // for(auto var : arr){
    //     cout << var << endl;
    // }


//удалить повторяющиеся элементы

//vector 
//list

    // int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    // auto result = unique(begin(arr), end(arr));

    // for_each(begin(arr), result, [](int a){
    //     cout << a << endl;
    // });


    // vector<int> v = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    // auto result = unique(begin(v), end(v));

    // v.erase(result, end(v));

    // for(auto var : v){
    //     cout << var << endl;
    // }



    // vector<int> v = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    // list<int> v2;
    // unique_copy(v.begin(), v.end(), back_inserter(v2));




//random_shuffle

    // srand(time(NULL));

    // int arr[] = {1, 2, 3, 4, 5};

    // random_shuffle(begin(arr), end(arr));

    // for(auto var : arr){
    //     cout << var << " ";
    // }



    srand(time(NULL));

    IAction *arr[] = {
        new CatAction(),
        new TeaAction(),
        new DogAction(),
        new SleepAction(),
    };

    std::random_shuffle(begin(arr), end(arr));


    for(auto &var : arr){
        var->action();
    }















    return 0;
}