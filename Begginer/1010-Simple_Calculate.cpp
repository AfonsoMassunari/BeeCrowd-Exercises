#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int code1, number1, code2, number2;
    float price1, price2, total;

    cin >> code1 >> number1 >> price1;
    cin >> code2 >> number2 >> price2;

    total = number1*price1 + number2*price2; 
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
}