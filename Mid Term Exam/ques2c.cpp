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
    char name[100]="limon Khan";
    Person* limon = new Person(5.4,11,name);


    cout<<limon->name<<endl;
    cout<<limon->height<<endl;
    cout<<limon->age<<endl;

    return 0;
}