#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float a,b,c,m;
    cin >> a >> b >> c;
    m = (2*a + 3*b + 5*c)/10;
    cout << "MEDIA = " << fixed << setprecision(1) << m << endl;
    return 0;
}