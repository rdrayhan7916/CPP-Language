#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
int main()
{
    Student limon(11,'C',10,"limon Khan");
    Student rayhan(55,'D',11,"Rayhan Hossen");
   
    return 0;
}