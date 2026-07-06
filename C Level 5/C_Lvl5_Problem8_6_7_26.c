#include <stdio.h>
int main(){
    int i,x,y;
    for(i=1;i<=99;i++){
        if(i/10!=0 && i%2==0){
            y = i%10;
            if (x+y==6){
                printf("%d",i);
                printf("\n");
            }
        }
    }
}