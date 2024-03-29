#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    double avg, sum;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    avg = sum/n;
    cout<<avg;
}
