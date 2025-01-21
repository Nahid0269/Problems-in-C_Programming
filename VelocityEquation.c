//Write a C program that will calculate the terminal velocity of a moving body by using the following equation: v2=u2+2as
#include <stdio.h>

int main()
{

    int u,a,s;
    printf("Enter the value of u,a,s :");
    scanf("%d %d %d",&u,&a,&s);

    float v = sqrt(u*u +2*a*s);
    printf("The Velocity(v)=%.2f",v);
}
