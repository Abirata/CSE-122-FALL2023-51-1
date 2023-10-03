#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i;
    cin>>k >>n >>w;
    int sum=0;
    for(i=1;i<=w; i++)
    {
        sum+=i;
    }
    int d=(sum*k)-n;
    if(d<0)
    cout <<"0";
    else
    cout <<d;
    return 0;
}
