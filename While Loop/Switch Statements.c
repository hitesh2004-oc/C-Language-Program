#include <stdio.h>

int main()
{
    int day;
    printf("Enter day num:-");
    scanf("%d",&day);
    
    switch(day){
        case 1:
        printf("Monday");
        break;
        
        case 2:
        printf("tuesday");
        break;
        
        case 3:
        printf("Wednesday");
        break;
        
        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
        
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("Sunday");
        break;
        
        default:
        printf("Input is wrong!");
        break;
    }
    return 0;
}