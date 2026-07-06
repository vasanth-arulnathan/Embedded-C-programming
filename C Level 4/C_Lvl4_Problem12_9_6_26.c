#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    y = 0;
    loop: if (x/10!=0)
    {
        z = x%10;
        x = x/10;
        
        y = y+z;
        goto loop;
    }
    y = y+x;
    printf("%d",y);
}
    