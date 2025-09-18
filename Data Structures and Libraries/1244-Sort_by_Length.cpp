#include <bits/stdc++.h>
using namespace std;

bool compare(const string &a,const string &b){
    return a.size() > b.size();
}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string line,word;
        getline(cin,line);
        vector<string> words;

        for(char c:line){
            if(c == ' '){
                if(!word.empty()){
                    words.push_back(word);
                    word.clear();
                }            
            }
            else
                word += c;

        }

        if(!word.empty()){
                    words.push_back(word);
                    word.clear();
        }

        stable_sort(words.begin(),words.end(),compare);

        for(int i = 0; i < words.size(); i++){
            cout << words[i];
            if(i != words.size() - 1)
                cout << " ";
        }   
        cout << "\n";
    }

    return 0;
}