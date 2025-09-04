#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159

int main(){
    float A,B,C,rectriangle,circle,trapezium, square, rectangle;
    cin >> A >> B >> C;
    rectriangle = A*C/2;
    circle = pi*C*C;
    trapezium = (A + B)*C/2;
    square = B*B;
    rectangle = A*B;
    cout << "rectriangle: " << fixed << setprecision(3) << rectriangle << endl;
    cout << "circle: " << fixed << setprecision(3) << circle << endl;
    cout << "trapezium: " << fixed << setprecision(3) << trapezium << endl;
    cout << "square: " << fixed << setprecision(3) << square << endl;
    cout << "rectangle: " << fixed << setprecision(3) << rectangle << endl;
}