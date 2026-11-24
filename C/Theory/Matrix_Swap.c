//matrix

#include <stdio.h>

int main (){
    int size;
    scanf("%d",&size);
    int arr[size][size];
    for (int i = 0; i<5; i++){ //Row
        printf("\n%d",i);
        for (int j = 0;j<3;j++){ //COlumn
            printf("\n%d %d",i,j);
        }
    }
    for (int i = 0;i<size;i++){
        for (int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0;i<size;i++){
        for (int j=0;j<size;j++){
            printf("%d",arr[i][j]);
        }
    printf("\n");
    }
}

//String

#include <stdio.h>
int main(){
    
    char ch[50];
    
    scanf("%s",&ch);
    
    int len = strlen(ch);
    
    for (int i = 0; i<len/2;i++){
        
        char temp = ch[i];
        ch[i] = ch[len - 1 - i];
        ch[len - 1 - i] = temp;
        
        
    }
        
    printf("Reversed string: %s",ch);
    
}

//Swap Value
#include <stdio.h>
void SwapValue(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int arr[]= {2,3,4,5};
    SwapValue(arr[0],arr[3]);
    for (int i = 0; i<4; i++){
        printf("%d",arr[i]);
    }
}
