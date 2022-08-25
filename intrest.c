#include<stdio.h>

int main(){
    //Find the simple interest
    
    int principle=1000,rate=8,time=2;
    
    int intrest=(principle*rate*time)/100;
    
    printf("the simple interest is %d", intrest);
     return 0;
}