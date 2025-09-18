#include <bits/stdc++.h>
using namespace std;

struct Tshirt{
    string name;
    string color;
    char size;
};

bool SortTshirt(Tshirt X,Tshirt Y){
    if(X.color == Y.color){
        if(X.size == Y.size)
            return X.name < Y.name;
        return X.size > Y.size;
    }
    return X.color < Y.color;
}

int main(){
    int n;
    int flag = 0;

    while(1){
        cin >> n;
        cin.ignore();

        if(n==0)break;

        Tshirt class1[60];

        for(int i=0;i<n;i++){
            getline(cin, class1[i].name);
            cin >> class1[i].color;
            cin >> class1[i].size;
            cin.ignore();
        }

        sort(class1,class1+n,SortTshirt);
        if(n!=0 && flag) cout << endl;
        flag = 1;
        for(int i=0;i<n;i++){
            cout << class1[i].color << " " << class1[i].size << " " << class1[i].name << endl;
            //printf("%s %s %c\n", class1[i].color.c_str(), class1[i].size, class1[i].name.c_str());
        }  
    }

    return 0;
}