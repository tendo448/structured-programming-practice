#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account_number;
    double old_limit,current_balance, new_limit;
    for(int i=1;i<=3;i++){
        printf("\n Customer %d \n",i);
        printf("Enter account number:");
        scanf("%d", &account_number);
        printf("Enter old credit limit:");
        scanf("%lf",&old_limit);
        printf("Enter current balance:");
        scanf("%lf",&current_balance);
        new_limit=old_limit/2.0;
        printf("Customer %d's new credit limit is:$.2f\n",account_number,new_limit);
        if(current_balance>new_limit){
            printf("WARNING:Balance($%.2f) exceeds the  newcredit limit!\n",current_balance);
        } else {
            printf("Balance is within the new credit limit.\n");
        }
        }
        return 0;

}
