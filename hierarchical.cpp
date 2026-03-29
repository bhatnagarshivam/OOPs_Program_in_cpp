#include<iostream>
using namespace std;
class car{
    public:
    void drive(){
        cout<<"car is driving"<<endl;
    }
};
class BMW : public car {
    public:
    void speed(){
        cout<<"tatal speed of BMW car"<<endl;
    }
};
class jaguar : public car {
    public:
    void speed(){
        cout<<"tatal spped of jaguar car"<<endl;
    }
};
int main(){
    BMW b1;
    jaguar j1;
    b1.drive();
    j1.drive();
    b1.speed();
    j1.speed();
}