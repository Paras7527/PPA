#include<iostream>
using namespace std;
class Demo{
    public:
        int A;
    private:
        int B;
    public:
        Demo(){
            A=11;
            B=21;
        }
        void fun(){
            cout<<"Value of A:\n"<<A;   //Allowed
            cout<<"Value of B:\n"<<B;   //Allowed
        }
};
int main(){
    Demo obj;
    obj.fun();                      //Allowed
    cout<<"Value of A:\n"<<obj.A;   //Allowed
    cout<<"Value of B:\n"<<obj.B;   //Not Allowed
    return 0;
}