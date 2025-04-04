#include<stdio.h>//Assignment3

void fun();
void gun();
int main(){
    printf("Inside Main\n");
    fun();
    gun();
    return 0;
}
void gun(){
    printf("Inside Gun\n");
}
void fun(){
    printf("Inside Fun\n");
}