#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    double r, volume, pi;
    pi = 3.14159;
    cin >> r;
    volume = (4/3.0)*pi*pow(r,3);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
}