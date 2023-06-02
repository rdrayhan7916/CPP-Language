#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student rayhan;
    rayhan.roll=2;
    rayhan.cls=5;
    rayhan.section='B';
    char nm[100]="Rayhan Hossen";
    strcpy(rayhan.name,nm);

    return 0;
}