#include <stdio.h>
int subDelate(int a,int b);
int sub(){
    int n1,n2;
    printf("Please enter n1;");
    scanf("%d", &n1);
    printf("Please enter n2;");
    scanf("%d", &n2);
    subDelate(n1, n2);
    return 0;
}

int subDelate(int a,int b){
    int sub = a - b;
    printf("Sub: %d - %d = %d", a, b, sub);
    return 0;
}