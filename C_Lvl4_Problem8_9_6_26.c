#include<stdio.h>
int main(){
    int x;
    x=1;
    loop: if(x<99)
    {
        if (x%2==0 & x/10!=0 & ((x%10)+(x/10)==6)){
            printf("%d",x);
            printf("\n");
        }
        x=x+1;
        goto loop;
    }
   
}
    