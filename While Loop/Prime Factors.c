#include<stdio.h>
int main(){
    
    int n;
    printf("Enter n Number: ");
    scanf("%d",&n);
    int d = 0;
    int i = 2;
    while(n > 1 ){
        if(n%i == 0){
            printf("%d ",i);
            n = n/i;
        }
        else if(n%i != 0){
       i++;
        }
    }
    return 0;
}