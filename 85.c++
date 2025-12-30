#include<iostream>
using namespace std;
class base{
    public:
    void fun1()
    {
        cout<<" fun1 of base"<<endl;
    }
};
class Derived : public base{
    public:
    void fun2() {
        cout<<" fun2 of Derived"<<endl;
    }
};
int main(){
    base *p;
    p=new Derived();
    p->fun1();
    //p->fun2();
}
