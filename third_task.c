#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    // declare variables
    float a,b,c,disc,value,x,x1,x2;
    printf("Input the parabolic parameters a, b and c \n");
    // get user input
    scanf("%f %f %f",&a,&b,&c);
    disc= pow(b,2)-4*a*c;
    if (disc<0)
        printf("The discriminant is negative, the zeroes are going to be imaginary");
        else if(disc==0){
        x=-b/2*a;
        printf("there is going to be a single solution x_0:%.1f",x);
        }
        else{
            x1=(-b+sqrt(disc))/(2*a);
            x2=(-b-sqrt(disc))/(2*a);
            printf("the zeroes are going to be %.1f and %.1f",x1,x2);
        }
        
    

    // get user input

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */

    // according to the value of the discriminant, calculate the roots and print the results

    return 0;
}