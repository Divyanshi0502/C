#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter the principal amount , rate of interest and time:");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The calculated simple interest is:%.2f",si);
    return 0;
}
