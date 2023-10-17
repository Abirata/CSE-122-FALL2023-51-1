#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n, Anton = 0, Danik = 0;
    char m;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        if(m == 'A'){
            Anton = Anton + 1;
        }
        else if(m == 'D')
        {
            Danik = Danik + 1;
        }
    }
    if(Anton == Danik)
    {
        cout << "Friendship" <<'\n';
    }
    else if(Anton > Danik)
    {
        cout << "Anton" << '\n';
    }
    else if(Anton < Danik)
    {
        cout << "Danik" <<'\n';
    }
    return 0;
}
