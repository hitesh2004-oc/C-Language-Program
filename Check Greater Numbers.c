#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a value: ");
    scanf("%d",&a);
    
    printf("Enter b value: ");
    scanf("%d",&b);
    
    printf("Enter c value: ");
    scanf("%d",&c);
    
    if(a>c && a>b){
        printf("a is Greater");
    }else if(b>c) {
        printf("b is Greater");
    }else if(c>a) {
        printf("c is Greater");
    }

    return 0;
}