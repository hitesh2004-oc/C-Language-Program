#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a value: ");
    scanf("%d",&a);
    
    printf("Enter b value: ");
    scanf("%d",&b);
    
    printf("Before Swapping Number:-\n"); 
    printf("a = %d b = %d\n",a,b);
    
    int c = a;
        a = b;
        b = c;
        
    printf("Atfer Swapping Number:-\n");   
    printf("a = %d b = %d",a,b);
    return 0;
}