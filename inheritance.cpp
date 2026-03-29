#include<iostream>
using namespace std;
class vehicle{
    public:
    void start(){
        cout<<"vehicle is starting"<<endl;
    }
};
class car:public vehicle{
    public:
    void drive(){
        cout<<"car is driving"<<endl;
    }
};
int main(){
    car c1;
    c1.start();
    c1.drive();
}