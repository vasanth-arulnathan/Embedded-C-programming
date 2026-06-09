#include<stdio.h>
int main(){
    int x;
    x=1;
    loop: if(x<6)
    {
        //your code here;
        printf("%d",x);
        printf("\n");
        x = x+1;
        goto loop;
    }
}