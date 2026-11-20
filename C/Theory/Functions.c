// FUNCTIONS

#include <stdio.h>

void printhello(int a) {
    
    if (a==0){
        return;
    }
    
    printf("Hello %d",a);
    printhello (a-1);
}

int main(){
    printhello(5);
}

int SumOfNumber(int n){ 
    
    // 5 + SumOfNumber(4) 4+3+2+1 -> 4+SumOfNumber(3) 3+2+1 -> 3+SumOfNumber(2) 2+1 -> 2+SumOfNumber(1) 1 -> 1
    // 5 * SumOfNumber(4) 4*3*2*1 -> 4*SumOfNumber(3) 3*2*1 -> 3*SumOfNumber(2) 2*1 -> 2*SumOfNumber(1) 1 -> 1
    
    if(n==1){
        return 1;
    }
    
    return n + SumOfNumber(n-1); //use * instead of + for factorial/products
    
}

int main(){
    int Ans = SumOfNumber(5);
    printf("%d",Ans);
}