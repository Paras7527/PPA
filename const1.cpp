#include<iostream>
using namespace std;
int main(){
    int no1=10;
    const int no2=10;

    no1++;      //Allowed
    no2++;      //Not allowed

    no1=21;     //Allowed
    no2=21;     //Not allowed
    
    return 0;
}