#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;


// void DoWork(){
//     for(int i = 0; i < 10; ++i){
//         cout << "id: " << this_thread::get_id() << "\tDoWork\t" << i << endl;
//         this_thread::sleep_for(chrono::milliseconds(1000));
//     }
// }



// void DoWork(int a, int b, string msg){
//     cout << msg << endl;
//     this_thread::sleep_for(chrono::milliseconds(3000));
//     cout << "=======\t" << "dowork start 10 \t=========" << endl;

//     this_thread::sleep_for(chrono::milliseconds(5000));
//     cout << "a + b = " << a + b << endl;
//     this_thread::sleep_for(chrono::milliseconds(3000));
//     cout << "=======\t" << "dowork stop\t=========" << endl;
// }



// int Sum(int a, int b){
//     this_thread::sleep_for(chrono::milliseconds(3000));
//     cout << "id: " << this_thread::get_id() << "   =========\t dowork start  \t=========" << endl;
//     this_thread::sleep_for(chrono::milliseconds(5000));


//     cout << endl;
//     cout << "id: " << this_thread::get_id() << "   =======\t" << "dowork stop\t=========" << endl;
//     return a + b;
// }


// class SimpleTimer{
// private:
//     std::chrono::time_point<std::chrono::_V2::system_clock> start, end; //на линукс
// public: 
//     SimpleTimer(){
//         start = std::chrono::high_resolution_clock::now();
//     }

//     ~SimpleTimer(){
//         end = std::chrono::high_resolution_clock::now();
//         std::chrono::duration<float> duration = end - start;
//         cout << "duration: " << duration.count() << "sec" << endl;
//     }
// };


// int Sum(int a, int b){
//     this_thread::sleep_for(chrono::milliseconds(2000));
//     cout << "id: " << this_thread::get_id() << "   =========\t dowork start  \t=========" << endl;
//     this_thread::sleep_for(chrono::milliseconds(4000));


//     cout << endl;
//     cout << "id: " << this_thread::get_id() << "   =======\t" << "dowork stop\t=========" << endl;
//     return a + b;
// }



// void Foo(){
//     SimpleTimer st;
    
//     while(true){
//         for(int i = 0; ; ++i){
//             this_thread::sleep_for(chrono::milliseconds(100));
//             cout << i << endl;
//         }
//     }
// }



// class MyClass{
// public:
//     void DoWork(){
//         this_thread::sleep_for(chrono::milliseconds(3000));
//         cout << "id: " << this_thread::get_id() << "=======\t" << "dowork start 10 \t=========" << endl;

//         this_thread::sleep_for(chrono::milliseconds(5000));
//         cout << "id: " << this_thread::get_id() << "=======\t" << "dowork stop\t=========" << endl;
//     }

//     void DoWork2(int a){
//         this_thread::sleep_for(chrono::milliseconds(3000));
//         cout << "id: " << this_thread::get_id() << "=======\t" << "dowork start 10 \t=========" << endl;
//         cout << "DoWork2:" << a << endl;
//         this_thread::sleep_for(chrono::milliseconds(5000));
//         cout << "id: " << this_thread::get_id() << "=======\t" << "dowork stop\t=========" << endl;
//     }

//     int Sum(int a, int b){
//         this_thread::sleep_for(chrono::milliseconds(2000));
//         cout << "id: " << this_thread::get_id() << "   =========\t dowork start  \t=========" << endl;
//         this_thread::sleep_for(chrono::milliseconds(4000));
//         cout << endl;
//         cout << "id: " << this_thread::get_id() << "   =======\t" << "dowork stop\t=========" << endl;
//         return a + b;
//     }
// };



// mutex mtx;

// void print(char ch){
//     this_thread::sleep_for(chrono::milliseconds(2000));

//     mtx.lock();
//     for(int i = 0; i < 5; ++i){
//         for(int i = 0; i < 10; ++i){
//             cout << ch;
//             this_thread::sleep_for(chrono::milliseconds(20));

//         }
//         cout << endl;
//     }
//     cout << endl;

//     mtx.unlock();

//     this_thread::sleep_for(chrono::milliseconds(2000));

// }


//lock_guard в его владение все что ниже до конца void


// mutex mtx;

// void print(char ch){

//     lock_guard<mutex> guard(mtx);

//     for(int i = 0; i < 5; ++i){
//         for(int i = 0; i < 10; ++i){
//             cout << ch;
//             this_thread::sleep_for(chrono::milliseconds(20));

//         }
//         cout << endl;
//     }
//     cout << endl
// }






//взаимная блокировка

// mutex mtx1;
// mutex mtx2;



// void print1(char ch){

//     mtx1.lock();
//     this_thread::sleep_for(chrono::milliseconds(1));
//     mtx2.lock();

//     for(int i = 0; i < 5; ++i){
//         for(int i = 0; i < 10; ++i){
//             cout << '*';
//             this_thread::sleep_for(chrono::milliseconds(20));

//         }
//         cout << endl;
//     }
//     cout << endl;

//     mtx1.unlock();

//     mtx2.unlock();
// }



// void print2(char ch){

//     mtx1.lock();
//     this_thread::sleep_for(chrono::milliseconds(1));
//     mtx2.lock();


//     for(int i = 0; i < 5; ++i){
//         for(int i = 0; i < 10; ++i){
//             cout << '#';
//             this_thread::sleep_for(chrono::milliseconds(20));

//         }
//         cout << endl;
//     }
//     cout << endl;


//     mtx2.unlock();

//     mtx1.unlock();
// }



// recursive_mutex rm; //много раз может вызвать себя и так же выключить сколько раз включил



// void foo(int a){
//     rm.lock();

//     cout << a << " ";


//     this_thread::sleep_for(chrono::milliseconds(20));

//     if(a <= 1){
//         cout << endl;
//         rm.unlock();
//         return;

//     }

//     a--;
//     foo(a);

//     rm.unlock();

// } 


// unique_lock


// mutex mtx;

// void print(char ch){

//     this_thread::sleep_for(chrono::milliseconds(2000));

//     unique_lock<mutex> ul(mtx, defer_lock);

//     ul.lock();

//     for(int i = 0; i < 5; ++i){
//         for(int i = 0; i < 10; ++i){
//             cout << ch;
//             this_thread::sleep_for(chrono::milliseconds(20));

//         }
//         cout << endl;
//     }
//     cout << endl;


// }












int main(){

//многопоточность
    // thread th(DoWork);
    // thread th3(DoWork);
    // // th.detach(); //когда основной заканчивает этот тоже прекращает работу даже если не сделал все операции
    // for(int i = 0; i < 10; ++i){
    //     cout << "id: " << this_thread::get_id() << "\tmain\t" << i << endl;
    //     this_thread::sleep_for(chrono::milliseconds(1000));
    // }

    // th.join(); //работает до конца
    // th3.join();




    // thread th(DoWork, 2, 3, "Hachalo");


    // for(int i = 1; true; ++i){
    //     cout << "id: " << this_thread::get_id() << "\tmain\t" << i << endl;
    //     this_thread::sleep_for(chrono::milliseconds(500));
    // }


    // th.join();




    // int j = 5;

    // thread t(DoWork, std::ref(j));


    
    // for(int i = 0; i < 10; ++i){
    //     cout << "id: " << this_thread::get_id() << "\tmain\t" << i << endl;
    //     this_thread::sleep_for(chrono::milliseconds(1000));
    // }

    // t.join();
    // cout << j << endl;



//можно вызвать функцию и получить ответ лямбда
    // int result;
    // thread t([&result](){
    //     result = Sum(21, 2);
    // });

    // for(int i = 0; i < 10; ++i){
    //     cout << "id: " << this_thread::get_id() << "\tmain\t" << i << endl;
    //     this_thread::sleep_for(chrono::milliseconds(500));
    // }


    // t.join();
    // cout << result << endl;



    // SimpleTimer st;

    // int result;
    // thread t([&result](){
    //     result = Sum(21, 2);
    // });

    // auto start = chrono::high_resolution_clock::now();

    // for(int i = 1; i < 15; ++i){
    //     cout << "id: " << this_thread::get_id() << "\tmain\t" << i << endl;
    //     this_thread::sleep_for(chrono::milliseconds(500));
    // }

    // t.join();
    // cout << result << endl;



    // auto end = chrono::high_resolution_clock::now();
    // chrono::duration<float> duration = end - start;
    // cout << "duration " << duration.count() << "sec" << endl;


    // Foo();

    // int result;
    // MyClass m;

    // thread t([&](){
    //     result = m.Sum(42, 8);
    // });

    // thread t([&](){
    //     m.DoWork();
    // });

    // thread t(&MyClass::DoWork, m);

    // thread t(&MyClass::DoWork2, m, 5);

    // thread t([&](){
    //     m.DoWork2(5);
    // });

    // for(int i = 0; i <= 10; ++i){
    //     cout << "id: " << this_thread::get_id() << "\tmain\t" << i << endl;
    //     this_thread::sleep_for(chrono::milliseconds(500));

    // }

    // t.join();
    // cout << "result: " << result << endl;


//mutex


    // thread t1(print, '*');
    // thread t2(print, '#');

    // t1.join();
    // t2.join();


//lock_guard



    // thread t1(print, '*');
    // thread t2(print, '#');

    // t1.join();
    // t2.join();



    // thread t1(print1);
    // thread t2(print2);

    // t1.join();
    // t2.join();



    // thread t1(foo,10);
    // thread t2(foo,10);


    // t1.join();
    // t2.join();



//unique_lock


    // thread t1(print, '*');
    // thread t2(print, '#');


    // t1.join();
    // t2.join();


    return 0;
}