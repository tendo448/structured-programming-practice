#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    for (int i=7;i<=100;i+=7){
        sum+=i;
    }

    printf("the sum of multiples of 7 from 1 to 100 is:%d\n",sum);

    return 0;
}
