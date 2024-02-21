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

    list<int> v = {1,2,3,4,5};
    list<int> victor = {6,7,8,9,10};
    v.insert(v.end(), victor.begin(), victor.end());
    for(auto var : v){
        cout << var << endl;
    }

    // list<int> l1 = {1, 2, 3, 4, 5}, l2 = {6, 7, 8};
    // l1.insert(l1.end(), l2.begin(), l2.end());
    // for (const auto x : l1){
    //     std::cout << x << " ";
    // }

    return 0;
}

