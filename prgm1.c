#include<stdio.h>
void unsig32bitTo4_8bit(unsigned int *ip)
{
     char bytes[4];
     bytes[0]=*ip & 0xFF;
     bytes[1]=(*ip>>8) & 0xFF;
     bytes[2]=(*ip>>16) & 0xFF;
     bytes[3]=(*ip>>24) & 0xFF;
     printf("%d.%d.%d.%d\n",bytes[3],bytes[2],bytes[1],bytes[0]);
}
int main()
{
    int a;
    printf("Enter unsigned 32 bit IP address:");
    scanf("%d",&a);
    unsig32bitTo4_8bit(&a);
    return 0;
}
