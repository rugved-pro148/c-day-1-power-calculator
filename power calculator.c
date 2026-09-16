#include<stdio.h>
int main()
{
    int voltage,current,power;
    printf("voltage= ",voltage);
    scanf("%d",&voltage);
    printf("current= ",current);
    scanf("%d",&current);
    power=voltage*current;
    printf("power=%d*%d=%d ",voltage,current,power);
    return 0;


}