#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables<-- These are comments, you can remove them if you want to
    float x1,y1,x2,y2,dist;
    printf("Input the x and y coordinates for the 2 points: \n");
    // get user input
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    // calculate the length
    dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("The distance is %f",dist);
    // print the result

    return 0;
}