#include <iostream>
using namespace std;

int main(){
    long long int n;
    while(cin >> n){
        int state = 0;

        if(n%4 == 0){
            if(n%100 == 0){
                if(n%400 == 0){
                    state = 2;
                    cout << "This is leap year.\n";
                }
                else
                    state = 0;
            }
            else{
                 cout << "This is leap year.\n";
                 state = 2;
            }
        }

        if(n%15==0){
            cout << "This is huluculu festival year.\n";
            state++;
        }

        if((n%55==0) && (state > 1)){
            cout << "This is bulukulu festival year.\n";
            state++;
        }

        if(state == 0)
            cout << "This is an ordinary year.\n";

    }
    return 0;
}