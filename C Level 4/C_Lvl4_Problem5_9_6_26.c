#include<stdio.h>
int main(){
    int x;
    x=1;
    loop: if(x<10)
    {
        if (x%2==1){
            printf("%d",x);
            printf("\n");
        }
        x=x+1;
        goto loop;
    }
   
}
    