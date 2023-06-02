#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
        

        Person(float h,int a,char* n)
        {
            height=h;
            age=a;
            strcpy(name,n);
        }
};
int main()
{
    char name[100]="Limon Khan";
    Person* limon = new Person(5.4,22,name);

    char name1[100]="Rayhan Hossen";
    Person* rayhan = new Person(5.2,23,name1);

if (rayhan->age >limon->age)
{
    cout<<rayhan->name;
}
else{
    cout<<limon->name;
}


    return 0;
}