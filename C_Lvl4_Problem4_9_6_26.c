#include<stdio.h>
int main(){
    int x,y;
    y=0;
    x=6;
    loop: if(0<x)
    {
        //your code here;
        y = y+x;
        x = x-1;
        goto loop;
    }
    printf("%d",y);
}
    