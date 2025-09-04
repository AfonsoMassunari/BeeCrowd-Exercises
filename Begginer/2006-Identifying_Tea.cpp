#include <bits/stdc++.h>
using namespace std;

int main(){
    int correctAnswer,number=0,answers;
    cin >> correctAnswer;
    for(int i=0;i<5;i++){
        cin >> answers;
        if(correctAnswer==answers)number++;
    }
    cout << number << "\n";

    return 0;
}