#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5] {1, 2, 3, 4, 5};

    int *b=new int[7];
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    b[5]=6;
    b[6]=7;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    
    delete[] a;
    
    return 0;
}