#include<stdio.h>
int main(){
    int input_num,count,temp;
    temp = input_num/2;
    count = 0;
    loop: if (temp>0 && count<=2){
        if (input_num%temp==0){
            count = count+1;
        }
        temp = temp - 1;
        goto loop;
    }
    if (count<=1){
        printf("%s","Prime");
    }
    else{
        printf("%s","Not Prime");
    }
}