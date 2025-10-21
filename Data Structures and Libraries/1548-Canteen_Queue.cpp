#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int m,places = 0;
        cin >> m;
        vector<int> students(m);

        for(int i=0;i<m;i++){
            cin >> students[i];
        }
        vector<int> copy = students;
        sort(copy.begin(),copy.end(),greater<int>());
        
        for(int i=0;i<m;i++){

            if(copy[i] == students[i])
                places++;
        }
        cout << places << "\n";
    }

    return 0;
}