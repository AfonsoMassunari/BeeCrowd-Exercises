#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string>words;
    string line;
    int aux=0; //this aux was used only for test the code 
    while(getline(cin,line)){
        string word = "";
        for(int i=0;i<line.size();i++){
            
            if(line[i] == '0'){
                aux=1;
                break; 
            }
            if(isalpha(line[i])){
                word+=tolower(line[i]);
            }else{
                if(!word.empty()){
                    words.insert(word);
                    word = "";
                }
            }
        }


        if(aux == 1)break;

        if(!word.empty()){
            words.insert(word);
        }    
    }

    for(const string &s : words){
        cout << s << "\n";
    }
    return 0;
}


