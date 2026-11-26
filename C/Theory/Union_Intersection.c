// You are using GCC
#include <stdio.h>
#include <stdlib.h>

union students{
    //char name [50];
    double id;
    int roll_no;
    int batch;
}

int main (){
    union Students s1;
    //strcpy (s1.name, "Harsh")
    s1.id = 2323.12;
    s1.roll_no = 71;
    s1.batch = 2023;
    
    printf("%lf %d %d", s1.id, s1.roll_no  s1.batch);
}

struct students{
    char name [50];
    double id;
    int roll_no;
    int batch;
}
int main (){
    struct Students s1;
    strcpy (s1.name, "Harsh")
    s1.id = 2323.12;
    s1.roll_no = 71;
    s1.batch = 2023;
    for(int i=0; i<3; i++){
        scanf("%lf",&s1[i].id);
        scanf("%lf",&s1[i].roll_no);
        scanf("%lf",&s1[i].batch);
    }
    printf("%lf %d %d", s1.id, s1.roll_no  s1.batch);
}

int main(){
    int *arr = (int *) malloc (5 *sizeof(int));
    
    int *arr = (int *) calloc (5, sizeof(int));
    
    for (int i = 0; i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i<5;i++){
        printf("%d",arr[i]);
    }
    
    printf("\n")
    
    arr = (int *) realloc(arr, 10 * sizeof(int));
    
    for (int i = 5; i<10;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i = 5; i<10;i++){
        printf("%d",arr[i]);
    }
}