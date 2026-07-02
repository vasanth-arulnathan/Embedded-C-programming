#include<stdio.h>
int main(){
    int input_num,rem_num,msb,count,output,temp;
    scanf("%d",&input_num);
    count = 1;
    temp = input_num;
    loop: if (input_num/10!=0){
        input_num = input_num/10;
        count = count * 10;
        goto loop;
    }
    rem_num = temp - (input_num*count);
    if (input_num%2!=0){
        input_num = input_num-1;
        if (input_num==0){
            input_num = 1;
        }
    }

    output = ((input_num*count)+rem_num);
    printf("%d",output);
}