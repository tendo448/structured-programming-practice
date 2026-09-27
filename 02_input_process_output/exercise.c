#include <stdio.h>


int main()
{
    int num1, num2;
    int  sum,product,difference,quotient;


    printf("Enter two integers:");
    scanf("%d %d", &num1,&num2);
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=num1/num2;

    printf("sum=%d\n",sum);
    printf("product=%d\n", product);
    printf("difference=%d\n",difference);
    printf("quotient=%d\n",quotient);

    return 0;
}
 
