#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stringstream ss;
    ss<<str;
    string word;
    int flg=0;
    while (ss>>word)
    {
        if (word=="Ratul")
        {
            flg=1;
            break;
        }
        
    }
    

    if (flg==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
  
   

    // int exist= str.find("Ratul");
    
    // if (exist <=-1)
    // {
    //     cout<<"NO";
    // }
    // else
    // {
    //     cout<<"YES";
    // }
    
    
    return 0;
}