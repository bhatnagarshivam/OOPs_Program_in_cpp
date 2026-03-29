#include<iostream>
using namespace std;
class father{
    public:
    void talk(){
        cout<<"way of talking"<<endl;
    }
};
class mother{
    public:
    void cooking(){
        cout<<"cooking food"<<endl;
    }
};
class children:public father,public mother{
    public:
    void personality(){
        cout<<"personality of child";
        }
};
int main(){
    children c1;
    c1.talk();
    c1.cooking();
    c1.personality();
}