//ARRAY & STRINGS

#include <stdio.h>

int main(){
    int size = 5;
    scanf("%d",&size);
    
    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++){
        printf("%d\n",arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans += arr[i];
    }
    printf("The sum of all arrays is %d",ans);
    return 0;
}

// Input :-
// 5
// 1 2 3 4 5

//even odd

#include <stdio.h>

int main(){
    int size = 5;
    printf("Size of Array is %d",size);
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = -1; i < size; i+= 2){
        printf("The even number is %d\n",arr[i]);
    }
    for (int i = 0; i < size; i+= 2){
        printf("The odd number is %d\n",arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans += arr[i];
    }
    printf("The sum of all arrays is %d",ans);
    return 0;
}