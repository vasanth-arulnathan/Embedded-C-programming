#include<stdio.h>
int main(){
    int x,y,z,m;
    scanf("%d",&x);
    y = 0;
    z = 0;
    loop: if (x/10!=0)
    {
        
        z = x%10;
        x = x/10;
        y = (z+y)*10;
        goto loop;
    }
    y = y+x;
    printf("%d",y);
}
    