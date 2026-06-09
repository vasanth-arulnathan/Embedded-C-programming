#include<stdio.h>
int main(){
    int x,y;
    y=0;
    x=1;
    loop: if(x<6)
    {
        //your code here;
        y = y+x;
        x = x+1;
        goto loop;
    }
    printf("%d",y);
}
    