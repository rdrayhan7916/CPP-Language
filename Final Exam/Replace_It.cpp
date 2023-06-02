#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str,rep;
    for (size_t i = 0; i < n; i++)
    {
        cin>>str>>rep;
    
    while (str.find(rep)!= -1)
    {
        str.replace(str.find(rep),rep.size(), "$");
    }
    cout<<str<<endl;
    }
    

    return 0;
}