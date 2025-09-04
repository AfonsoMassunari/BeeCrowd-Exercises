#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,quantity;
    char animal;
    int coelho=0,rato=0,sapo=0;
    float percentual;
    cin >> n;
    while(n--){
        cin >> quantity >> animal;

        if(animal == 'C')
            coelho += quantity;
        else if(animal == 'R')
            rato += quantity;
        else if(animal == 'S')
            sapo += quantity;
    }

    cout << "Total: " << sapo+coelho+rato <<" cobaias\n";
    cout << "Total de coelhos: " << coelho <<"\n";
    cout << "Total de ratos: " << rato <<"\n";
    cout << "Total de sapos: " << sapo <<"\n";
    percentual = coelho*100.0/(sapo+coelho+rato);
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << percentual << " %\n";
    percentual = rato*100.0/(sapo+coelho+rato);
    cout << "Percentual de ratos: " << fixed << setprecision(2) << percentual << " %\n";
    percentual = sapo*100.0/(sapo+coelho+rato);
    cout << "Percentual de sapos: " << fixed << setprecision(2) << percentual << " %\n";
}