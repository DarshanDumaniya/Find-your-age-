#include<stdio.h>

int main()
{
    int a;
    printf("enter your birth year =");
    scanf("%d",&a);

    int b;
    printf("\nenter current year =");
    scanf("%d",&b);

    if (a < 1000){
    printf("\nplease your birth year invalid fill try again\n");
        
    }
    

    if(b < 1000) {
        printf("\nplease your current year invalid fill try again\n");
        
    }

    if(a > b) {

        printf("\ninvalid years please trye again\n\n");
        
    }

    if(1000&&9999){
        int old = b - a;
        printf("\nyou are %d years old\n",old);
        }
    
    
    return 0;
}