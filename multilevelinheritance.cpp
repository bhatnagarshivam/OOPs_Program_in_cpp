#include<bits/stdc++.h>
using namespace std;
class vehicle{
    public:
    void start(){
        cout<<"vehicle is starting"<<endl;
    }
};
class car : public vehicle{
    public:
    void drive(){
        cout<<"car is driving"<<endl;
    }
};
class BMW : public car{
    public:
    void engine(){
        cout<<"engine is strong";
    }
};
int main(){
    BMW b1;
    b1.start();
    b1.drive();
    b1.engine();
}