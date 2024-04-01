#include<bits/stdc++.h>
using namespace std;

int cut(char x){
    if(x=='+' || x=='-') return 3;
    else if(x=='*' || x=='/') return 2;
    else if(x=='^') return 1;
    else if(x=='(') return 4;
}
int main(){
    string s; cin >> s;
    string reverse_s;
    char a = '(' , b = ')';
    for(int i = s.length()-1 ; i >= 0 ; i--){
        if(s[i]=='(') reverse_s += ')';
        else if(s[i]==')') reverse_s += '(';
        else reverse_s += s[i];
    }
    string prefix;
    stack<char>symbol;
    for(int i = 0 ; i < reverse_s.length() ; i++){
        if((reverse_s[i]>=65 && reverse_s[i]<=90)||(reverse_s[i]>=97 && reverse_s[i]<=122)) prefix += reverse_s[i];
        else if(reverse_s[i]=='(') symbol.push(reverse_s[i]);
        else if(reverse_s[i]==')'){
            while(symbol.top()!='('){
                prefix += symbol.top();
                symbol.pop();
            }
            symbol.pop();
        }else if(symbol.empty()==false && cut(reverse_s[i]) >= cut(symbol.top())){
            while(symbol.empty()==false && (cut(reverse_s[i]) >= cut(symbol.top()))){
                prefix += symbol.top();
                symbol.pop();
            }
            symbol.push(reverse_s[i]);
        }else symbol.push(reverse_s[i]);
    }
    while(symbol.empty()==false){
        prefix += symbol.top();
        symbol.pop();
    }
    for(int i = prefix.length()-1 ; i >= 0 ; i--) cout << prefix[i];
}
//(A+B)*C-D+F
