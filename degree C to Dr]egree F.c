#include<stdio.h>
int main(){
    float tempc,tempf;
    printf("Enter the temp in degree C:");
    scanf("%f",&tempc);
    tempf=(tempc*1.8)+32;
    printf("Temp in degree F is:%.2f",tempf);
    return 0;
}
