#include<iostream>
using namespace std;
class solution{
    public:
    int * data;
    solution(int value){
        data=new int(value);
    }
    //deep constructor
    solution(const solution &s1){
        data=new int(*s1.data);
    }
};
int main(){
    solution s1(10);
    solution s2(s1);
    *s1.data=20;
   cout<< *s2.data;
}