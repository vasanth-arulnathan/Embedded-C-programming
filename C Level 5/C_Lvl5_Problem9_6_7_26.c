#include <stdio.h>
int main(){
    int i,x,sum;
    sum = 0;
    for(i=1;i<=99;i++){
        if(i/10!=0){
            x = i%10;
            if (x==5){
                sum = sum + i;
            }
        }
    }
    printf("%d",sum);
}