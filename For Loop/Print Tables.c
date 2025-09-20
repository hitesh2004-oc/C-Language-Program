#include <stdio.h>

int main()
{
    int m,t =0;
    printf("Enter m: ");
    scanf("%d",&m);
    
    for(int i = 1; i <= m*10 ; i++ ){
        if(i%m == 0){
            t++;
            printf("%d x %d = %d\n",m,t,i);
        }
    }
    
    return 0;
}