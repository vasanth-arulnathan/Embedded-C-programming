#include<stdio.h>
int main(){
    int num,a,b,c,sum1,sum2,sum3;
    scanf("%d",&num);
    a = num/100;
    b = (num%100)/10;
    c = num%10;
    sum1 = a+b+c;
    sum2 = (sum1/10) + (sum1%10);
    sum3 = (sum2/10) + (sum2%10);
    printf("%d",sum3);
    

}