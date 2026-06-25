#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    y = 1;
    loop: if (x/10!=0)
    {
        x = x/10;
        y = y+1; 
        goto loop;
    }
    printf("%d",y);
}
    