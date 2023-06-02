#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a,Student b)
{
    if(a.eng_marks + a.math_marks > b.eng_marks +b.math_marks) {
return true;
    }
    else return false;
}

int main()
{
    int n;
    cin>>n;
    Student arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
}

sort(arr, arr+n,cmp);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i].eng_marks + arr[i].math_marks == arr[j].eng_marks + arr[j].math_marks)
            {
                if (arr[i].id> arr[j].id)
                {
                  swap(arr[i],arr[j]);
                }
                
              
            }
        }
    }


for (int i = 0; i <n; i++)
{
    cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
}

    return 0;
}