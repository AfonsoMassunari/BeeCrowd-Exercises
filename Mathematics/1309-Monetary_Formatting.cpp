#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dollar, cents;
    while (getline(cin, dollar) && getline(cin, cents))
    {
        cout << "$";
        for (int i = 0; i < dollar.size(); i++)
        {
            if (i > 0 && (dollar.size() - i) % 3 == 0)
            {
                cout<<",";
            }
            cout<<dollar[i];
        }
        cout<<".";
        if (cents.size() < 2)
        {
            cout<<"0";
        }
        for (int i = 0; i < cents.size(); i++)
        {
            cout<<cents[i];
        }
        cout<<"\n";
    }
}