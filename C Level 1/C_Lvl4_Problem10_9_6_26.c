#include<stdio.h>
int main(){
    int x,y;
    x=1;
    y=0;
    loop: if(x<99)
    {
        if (x%2==1 & x/10!=0 & (x/10==7)){
            y = y+x;
        }
        x=x+1;
        goto loop;
    }
    printf("%d",y);
   
}
    