#include <stdio.h>
int main(){
    int i,x,y;
    for(i=1;i<=99;i++){
        if(i/10!=0 && i%2==1){
            x = i/10;
            y = i%10;
            if (x+y==7){
                printf("%d",i);
                printf("\n");
            }
        }
    }
}