#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int X;
    float Y, spentfuel;
    cin >> X >> Y;
    spentfuel = X/Y;
    cout << fixed << setprecision(3)  << spentfuel << " km/l"<< endl;
}