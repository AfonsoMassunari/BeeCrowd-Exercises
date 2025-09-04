#include <iostream>
using namespace std;

int main() {
    int startHour, startMinute, endHour, endMinute;

    cin >> startHour >> startMinute >> endHour >> endMinute;

    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;

    int durationMinutes;

    durationMinutes = endTotalMinutes - startTotalMinutes;
    
    if (endTotalMinutes < startTotalMinutes) {
        endTotalMinutes += 24 * 60; 
    }

    int hours = durationMinutes / 60;
    int minutes = durationMinutes % 60;

    if(hours == 0 && minutes == 0)
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    else
        cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
