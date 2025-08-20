#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        float food;
        int days = 0;
        cin >> food;

        while(food > 1.0){
            days++;
            food /= 2;
        }

        cout << days << " dias\n";
    }
    return 0;
}