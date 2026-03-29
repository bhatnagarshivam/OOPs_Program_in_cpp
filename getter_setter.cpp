#include<iostream>
using namespace std;
class  Account{
    private:
    int balance;
    string password;
    public:
    //setter
    void setValue(string password,int balance){
        this->password=password;
        this->balance=balance;
    }
    //getter
    int  getValue(){
        return balance;
    }
};
int main(){
    Account acc1;
    acc1.setValue("bhatnagar1008",15000);
    cout<<acc1.getValue();

}