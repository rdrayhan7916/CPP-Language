#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        

        Student(int r,int c,char* n)
        {
            roll=r;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Limon Mia";
    Student r(2,10,name);
    return r;
}
int main()
{
    Student limon=fun();

    cout<<limon.name<<endl;
    cout<<limon.roll<<endl;
    cout<<limon.cls<<endl;
    return 0;
}