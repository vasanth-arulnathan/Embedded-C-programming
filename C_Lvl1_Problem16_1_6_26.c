#include <stdio.h>
int main(){
    int num,a,b,c,d;
    scanf("%d",&num);
    a = num/1000;
    b = num%1000;
    c = b/100;
    d = b%100;
    printf("%d",((c*1000)+(a*100)+d));
}