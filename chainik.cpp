#include <iostream>
#include <string>

using namespace std;


int main(){

    string input;
    int i = 0;

    cout << "включаем чайник? - ";
    cin >> input;

    if(input == "yes"){
        for(; i < 51; i++){
            cout << i << "%" << endl;
            if(i == 50){
                cout << "продолжаем? - ";
                cin >> input;
                if(input == "yes"){
                    for(int i = 50; i < 101; i++){
                        cout << i << "%" << endl;
                        if(i == 100){
                            cout << "чайник разогрелся, приятного чаепития" << endl;
                        }
                    }
                }else{
                    cout << "я вас не понимаю, перезагрузите программу и сделайте правильно" << endl;
                }
                if(input == "no"){
                    for(int i = 50; i > -1; i--){
                        cout << i << "%" << endl;
                        if(i == 0){
                            cout << "чайник выключился" << endl;
                        }
                    }
                }
            }
        }
    }else{
        cout << "я вас не понимаю, перезагрузите программу и сделайте правильно" << endl;
    }
    
    if(input == "no"){
        cout << "чайник не будет нагреваться:(" << endl;
    }

    return 0;
}