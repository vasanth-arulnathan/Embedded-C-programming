#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("Enter Number : ");
    scanf("%d",&x);
    y = (x / 100);
    z = (x % 100);
        if (z == y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}