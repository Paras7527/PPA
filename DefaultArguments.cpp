

#include<iostream>
using namespace std;

float CalculateArea(float Rad=10.5f,float PI=3.14f)
{
    float Ans=0.0f;
    Ans=PI*Rad*Rad;
    return Ans;
}

int main()
{
    float Ret=0.0f;
    
    Ret=CalculateArea(10.5f,3.14f);
    cout<<"Area of circle is:"<<Ret<<"\n";
    
    CalculateArea(10.5f);
    cout<<"Area of circle is:"<<Ret<<"\n";

    Ret=CalculateArea();
    cout<<"Area of circle is:"<<Ret<<"\n";

    Ret=CalculateArea(10.5f,7.20f);
    cout<<"Area of circle is:"<<Ret<<"\n";
    return 0;
}