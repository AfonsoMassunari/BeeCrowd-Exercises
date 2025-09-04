#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float a,b,m;
    cin >> a >> b;
    m = ((3.5*a)+(7.5*b))/(3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << m << endl;
    return 0;
}