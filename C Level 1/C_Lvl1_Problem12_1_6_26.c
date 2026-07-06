#include <stdio.h>
int main(){
    int num,num_1s,num_10s,num_100s;
    scanf("%d",&num);
    num_1s = ((num%100)%10);
    num_100s = num/100;
    num_10s = ((num%100)/10);
    printf("%d",num_1s+num_10s+num_100s);
}