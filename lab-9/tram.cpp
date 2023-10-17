#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    int totalPass = 0;
    int maxPass = 0;
    while(t--)
    {
        int a, b; cin >> a >> b;
        totalPass = (totalPass - a) + b;
        if(totalPass > maxPass)
        {
            maxPass = totalPass;
        }
    }
    cout << maxPass << "\n";
    return 0;
}
