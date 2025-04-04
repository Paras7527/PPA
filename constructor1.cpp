#include<iostream>
using namespace std;

class Marvellous{
    public:
    int no1;
    int no2;

    Marvellous()
    {
        cout<<"Inside default constructor\n";
        no1=0;
        no2=0;
    }
    Marvellous(int A,int B)
    {
        cout<<"Inside parameterised constructor\n";
        no1=A;
        no2=B;
    }
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }
    void fun()
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
    Marvellous mobj1;           //Default
    Marvellous mobj2(11,21);    //Parameterised
    mobj1.fun();
    return 0;
}