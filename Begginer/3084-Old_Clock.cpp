#include <bits/stdc++.h>
using namespace std;

int main(){
int h,m;

    while(cin >> h >> m){
        int hours,minutes;

        hours = (h*12)/360;
        minutes = m/6;
        
        if(hours>9)
            cout << hours <<":" ;
        else
            cout << "0" << hours <<":" ;

        if(minutes>9)
            cout << minutes <<"\n" ;
        else
            cout << "0" << minutes <<"\n" ;
    }

}

// cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << endl;