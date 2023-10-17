#include <bits/stdc++.h>
using namespace std;
/// 
string a , b , c;

void ans(){
    cin >> a >> b >> c;
    for(int i = 0 ;i < a.size();i++){
        if(c[i] != a[i] && c[i] != b[i]){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ans();
    }
}
