#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("Enter Number : ");
    scanf("%d",&x);
    y = (x % 10);
    z = ((x / 10) % 10);
        if (z == y){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}