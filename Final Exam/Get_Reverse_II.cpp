#include<bits/stdc++.h>
using namespace std;

class Studen {
    public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin>>n;
    Studen arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].id;
}
for (int i = 0, j=n-1; i < j; i++, j--)
{
    swap(arr[i].id, arr[j].id);
}


for (int i = 0; i <n; i++)
{
    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].id<<endl;
}

    return 0;
}