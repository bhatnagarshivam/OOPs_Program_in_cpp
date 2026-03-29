#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string Erp_password;
    public:
    void setPassword(string password){
        Erp_password=password;
    }
    string  getPassword(){
        return Erp_password;
    }
};
int main(){
    student s1;
    s1.setPassword("bhat@123");
    cout<<s1.getPassword();
}
