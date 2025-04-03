#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside base fun\n";      //Defination
        }
};

class Derived:public Base
{
    public:
        int x,y;
        void fun()
        {
            cout<<"Inside Derived fun\n";
        }
};

int main(){
    
    Derived dobj;
    Base bobj;

    Base *bptr=NULL;
    Derived *dptr=NULL;

    bptr=&bobj;     //No casting
    dptr=&dobj;     //No casting

    bptr=&dobj;     //Up casting
    
    dptr=&bobj;     //Down casting


    return 0;
}