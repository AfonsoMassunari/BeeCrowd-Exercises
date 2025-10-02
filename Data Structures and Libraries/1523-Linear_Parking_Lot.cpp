#include <bits/stdc++.h>
using namespace std;

struct Vehicle {
    int arrivalTime, departureTime;
    Vehicle(int a, int b) : arrivalTime(a), departureTime(b) {}
};

stack<Vehicle> parkingStack;
vector<Vehicle> vehicles;

int main() {
    int numVehicles, maxCapacity;
    while(cin >> numVehicles >> maxCapacity, numVehicles || maxCapacity) {
        bool canPark = true;
        vehicles.clear();
        
        for(int i = 0; i < numVehicles; i++) {
            int arrival, departure; 
            cin >> arrival >> departure;
            
            int currentTime = 0;
            while(parkingStack.size() > 0 && arrival >= parkingStack.top().departureTime) {
                canPark &= parkingStack.top().departureTime >= currentTime;
                currentTime = parkingStack.top().departureTime;
                parkingStack.pop();
            }
            
            canPark &= parkingStack.size() < maxCapacity;
            parkingStack.push(Vehicle(arrival, departure));
        }
        
        int finalTime = 0;
        while(parkingStack.size() > 0) {
            canPark &= parkingStack.top().departureTime >= finalTime;
            finalTime = parkingStack.top().departureTime;
            parkingStack.pop();
        }
        
        cout << (canPark ? "Sim" : "Nao") << endl;
    }
}
