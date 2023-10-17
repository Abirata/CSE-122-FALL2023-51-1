#include <bits/stdc++.h>
using namespace std;
void solve()
{

long long a,b,c; cin>>a>>b>>c;
if(a>=c)
cout<<"-1 ";
else
cout<<"1 ";
if(b*a <= c)
cout<<"-1\n";
else
cout<<b<<"\n";

return;
}

int main()
{
	int t=1;
	cin>>t;
while(t--)
{
solve();
}
}
