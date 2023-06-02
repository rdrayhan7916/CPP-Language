#include<bits/stdc++.h>
using namespace std;

class Studen {
    public:
    string name;
    int cls;
    char sec;
    int match_marks;
    int eng_marks;
};

int main()
{
    int n;
    cin>>n;
    Studen arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].match_marks>>arr[i].eng_marks;
}

for (int i = n-1; i >=0; i--)
{
    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].match_marks<<" "<<arr[i].eng_marks<<endl;
}

    return 0;
}