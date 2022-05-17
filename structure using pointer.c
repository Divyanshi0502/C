#include<stdio.h>
struct Divyanshi
{
    int roll;
    float pr;
};
int main()
{
    struct Divyanshi o={5,89};;
    struct Divyanshi *p;
    p=&o;
    scanf("%d",&p->roll);
    printf("The roll number is:%d\n",p->roll);
    scanf("%.2f",&p->pr);
    printf("The percentage is:%.2f\n",p->pr);
    return 0;
}
