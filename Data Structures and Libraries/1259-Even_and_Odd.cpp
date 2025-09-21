#include <bits/stdc++.h>

int main(){
    long int n;
    int num,quantityOdd = 0,quantityEven = 0;

    scanf("%li",&n);
    int even[n],odd[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&num);
        if(num%2 == 0){
            even[quantityEven] = num;
            quantityEven++;
        }else{
            odd[quantityOdd] = num;
            quantityOdd++;
        }
    }

    std::sort(even,even+quantityEven);
    std::sort(odd,odd+quantityOdd);
    std::reverse(odd,odd+quantityOdd);

    for(int i=0;i<quantityEven;i++){
        printf("%i\n",even[i]);
    }

    for(int i=0;i<quantityOdd;i++){
        printf("%i\n",odd[i]);
    }

    return 0;
}

// #include <algorithm>
// #include <cstdio>
// #include <iostream>
// #include <queue>
// #include <string>
// #include <vector>
// #define mp make_pair
// #define pb push_back
// #define REP(i, n) for (int i = 0; i < n; ++i)

// using namespace std;

// typedef pair<int, int> ii;

// int main()
// {
//     ios::sync_with_stdio(false);
//     int n, t;
//     cin >> n;
//     vector<ii> oddeven;
//     while (n--) {
//         cin >> t;
//         if (t % 2)
//             oddeven.pb(mp(1, -t));
//         else
//             oddeven.pb(mp(0, t));
//     }
//     sort(oddeven.begin(), oddeven.end());
//     REP(i, oddeven.size())
//     {
//         if (oddeven[i].second < 0)
//             cout << -oddeven[i].second << "\n";
//         else
//             cout << oddeven[i].second << "\n";
//     }
//     return 0;
// }