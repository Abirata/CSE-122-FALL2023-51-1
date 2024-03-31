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
    string postfix;
    stack<char>symbol;
    for(int i = 0 ; i < s.length() ; i++){
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)) postfix += s[i];
        else if(s[i]=='(') symbol.push(s[i]);
        else if(s[i]==')'){
            while(symbol.top()!='('){
                postfix += symbol.top();
                symbol.pop();
            }
            symbol.pop();
        }else if(symbol.empty()==false ){
            while(cut(s[i]) >= cut(symbol.top())){
                postfix += symbol.top();
                symbol.pop();
            }
            symbol.push(s[i]);
        }else symbol.push(s[i]);
    }
    while(!symbol.empty()){
        postfix += symbol.top();
        symbol.pop();
    }
    cout << postfix << endl;
}
