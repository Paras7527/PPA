#include<stdio.h>
//Assignment3

void fun();
void gun ();

int main()
{
    printf("Inside Main\n");

    fun();

    printf("End of Main");

    return 0;
}

void gun()
{
    printf("Inside Gun\n");
}

void fun()
{
    printf("Inside Fun\n");
    gun();
    printf("End of Fun\n");
}