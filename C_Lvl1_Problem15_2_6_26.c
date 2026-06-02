#include <stdio.h>

int main(){
    int num,a,b,c,d,e,f,g;
    scanf("%d/",&num); 
    a = num/1000; 
    b = num%1000; 
    c =  b/100; 
    d = b%100; 
    e = d/10; 
    f = d%10; 
    printf("%d",((a*1000)+(c*100)+(f*10)+e));


}
