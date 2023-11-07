#include <iostream>
using namespace std;

void bigger(int n)
{
    if(n==1)
    {
        int p,q,r;
        cin>>p>>q>>r;
        if (p >= q && q >= r)cout<<q;
        else if (q >= q && q >= r) cout<<q;
        else cout<<r;
    }
    else if(n==2)
    {
        char p,q,r;
        cin>>p>>q>>r;
        if (p >= q && p >= r)cout<<p;
        else if (q >= p && q >= r) cout<<q;
        else cout<<r;
    }
    else if(n==3)
    {

        float p,q,r;
        cin>>p>>q>>r;
        if (p >= q && p >= r) cout<<p;
        else if (q >= p && q >= r) cout<<q;
        else cout<<r;
    }
}

int main()
{
    cout<<"Enter 1 for integer"<<endl<<"Enter 2 for character"<<endl<<"Enter 3 for float"<<endl;
    int n;
    cin>>n;
    bigger(n);

    return 0;
}

