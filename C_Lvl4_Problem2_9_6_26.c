#include<stdio.h>
int main(){
    int x;
    x=5;
    loop: if(0<x)
    {
        //your code here;
        printf("%d",x);
        printf("\n");
        x = x-1;
        goto loop;
    }
}