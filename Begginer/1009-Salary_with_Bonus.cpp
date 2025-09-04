#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string name;
    float a,b;

    cin >> name >> a >> b;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << a + 0.15*b << endl;
}