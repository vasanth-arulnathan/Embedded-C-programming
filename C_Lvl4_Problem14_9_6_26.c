#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i;
    scanf("%d",&a);
    e = a%10;
    f = a/10;
    h = a/10;
    c = 0;
    d = 1;

    loop: if (a/10!=0)
    {
        
        b = a%10;
        a = a/10;
        d = d*10;
        goto loop;
    }
    d = d/10;
    g = (h-(a*d));
    i = ((e*d)+g);
    i = ((i*10)+a);
    printf("%d",i);
    
    

}