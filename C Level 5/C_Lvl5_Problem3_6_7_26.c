#include <stdio.h>
int main(){
    int i,sum;
    sum = 0;
    for(i=5;i>=1;i--){
        sum = sum + i;
    }
    printf("%d",sum);
}