#include <stdio.h>

int main(){
    int num,a,b,c;
    scanf("%d",&num);
    a = num/100;
    b = num%10;
    printf("%d",((a*100)+b));
}