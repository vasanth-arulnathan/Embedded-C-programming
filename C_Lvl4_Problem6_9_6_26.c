#include<stdio.h>
int main(){
    int x;
    x=1;
    loop: if(x<20)
    {
        if (x%2==1 & x/10!=0){
            printf("%d",x);
            printf("\n");
        }
        x=x+1;
        goto loop;
    }
   
}
    