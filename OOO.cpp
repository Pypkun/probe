#include <iostream>
#include <cstring>

using namespace std;

// template<typename T>
// class List{
// private:
//     template<typename>
//     class Node{
//     public: 
//         Node *pNest;
//         T data;
//         Node(T data = T(), Node *pNest = nullptr){
//             this->data = data;
//             this->pNest = pNest;
//         }
//     };

//     int Size;
//     Node<T> *head;
// public:
//     List();
//     ~List();
//     void push_back(T data);
//     int GetSize(){return Size;}

//     T & operator [] (const int index);
// };

// template<typename T>
// List<T>::List(){
//     Size = 0;
//     head = nullptr;
// }

// template<typename T>
// List<T>::~List(){

// }

// template<typename T>
// void List<T>::push_back(T data){
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

// template<typename T>
// T & List<T>::operator[](const int index){
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







int main(){

    // List<int> l;


    // int numbersCount;
    // cin >> numbersCount;
    // for(int i = 0; i < numbersCount; i++){
    //       l.push_back(rand() % 10);
    // }

    // for(int i = 0; i < l.GetSize(); i++){
    //     cout << l[i] << endl;
    // }























    return 0;
}