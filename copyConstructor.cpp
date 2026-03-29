#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age;
    //parameterized constructor
    student(string name,int age){
        this->name=name;
        this->age=age;
    }
    //copy constructor
    student(const student & s1){
          name=s1.name;
          age=s1.age;
    }
};
int main(){
    student s1("shivam Bhatnagar",22);
    student s2(s1);
    cout<<s2.age;
}