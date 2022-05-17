#include<stdio.h>
void toh(int,char,char,char);
int main()
{
    int n;
    printf("Enter the number of disk:");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}
void toh(int num,char x,char y,char z)
{
    if(num>0){
        toh(num-1,x,z,y);
        printf("\n %c to %c",x,y);
        toh(num-1,z,y,x);
    }
}
