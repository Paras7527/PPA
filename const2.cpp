#include<iostream>
using namespace std;
class Demo{
    public:
        int no1 , no2;
        const int no3;
        const int no4;

        Demo():no3(30),no4(40)
        {
         no1=10;
         no2=20;
        }
        Demo(int A,int B,int C,int D):no3(C),no4(D)
        {
         A=10;
         B=20;
        }
};
int main(){
    Demo obj1;
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\t"<<obj1.no3<<"\t"<<obj1.no4<<"\n";
    
    Demo obj2(11,31,51,101);
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\t"<<obj2.no3<<"\t"<<obj2.no4<<"\n";

    obj1.no1++;
    obj1.no2++;
    //obj1.no3++;
    //bobj1.no4++;
    
    
    
    return 0;
}