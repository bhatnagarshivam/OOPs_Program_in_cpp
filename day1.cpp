#include<iostream>
using namespace std;
class person{
    public:       //access modifier
    //data member
    string name;
    int age;
    char gender;
    //parameterized constructor
     person(string name,int age,char gender){
        this->name=name;
        this->age=age;
        this->gender=gender;
     }
     // function member
     void display(){
        cout<<name<<endl<<age<<endl<<gender<<endl;
     }
};
int main(){
    person p1("shivam",22,'M');
    p1.display();

}