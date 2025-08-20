#include <iostream>
#include <sstream>
#include <iomanip>
#include <bitset>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int caseNum = 1; caseNum <= N; caseNum++) {
        string X, Y;
        cin >> X >> Y;
        
        int decimalNumber = 0;
        
        if (Y == "bin") {
            decimalNumber = stoi(X, nullptr, 2);
        } else if (Y == "dec") {
            decimalNumber = stoi(X); 
        } else if (Y == "hex") {
            decimalNumber = stoi(X, nullptr, 16); 
        }

        cout << "Case " << dec << caseNum << ":" << endl;
        
        if(Y != "dec")
            cout << dec << decimalNumber << " dec" << endl;

        if(Y != "hex")
            cout << hex << decimalNumber << " hex" << endl;
        
        if(Y != "bin"){
            if(decimalNumber != 0)
                cout << bitset<32>(decimalNumber).to_string().substr(bitset<32>(decimalNumber).to_string().find('1')) << " bin" << endl;
             else
                cout<<"0 bin" << endl;
        }
        cout << endl;
    }
    
    return 0;
}
