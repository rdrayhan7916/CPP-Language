#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int maxE=INT_MIN;
    for (int i = 0; i <n-1; i++)
    {
       
        maxE=max(maxE, arr[i]);
    }
    
    
    cout<<maxE;
    return 0;
}