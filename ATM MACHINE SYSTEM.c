#include <stdio.h>
int main() {
    unsigned long amount = 1000, deposit, withdraw;
    int choice, pin, k;
    char transaction = 's';
    void main() {
        while (pin != 1520){
            printf("ENTER YOUR SECRET PIN NUMBER :");
            scanf("%d", &pin);
            if(pin != 1520)
            printf("PLEASE ENTER VALID PASSWORD ! \a\n");
        }
        do {
            printf("\n*******Welcome to ABC Bank ATM Service*******\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw Cash\n");
            printf("3. Deposit Cash\n");
            printf("Quit\n");
            printf("***********\n\n");
            printf("Enter your choice :");
            scanf("%d",&choice);
            switch (choice) {
                case 1:
                printf("\n YOUR BALANCDE IS TK : %lu", amount);
                break;
                case 2:
                printf("\n ENTER THE AMOUNT TO WITHDRAW :");
                scanf("%lu",&withdraw);
                if(withdraw%100 != 0){
                   printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
                }
                else if(withdraw > (amount-500)){
                    printf("\n INSUFFICIENT BALANCE");
                } else {
                    amount = amount - withdraw;
                    printf("\n\n PLEASE COLLECT CASH");
                    printf("\n YOUR CURRENT BALANCE IS %lu", amount);
                }
                break;
                case 3:
                printf("\n ENTER THE AMOUNT TO DEPOSIT");
                scanf("lu", &deposit);
                amount = amount + deposit;
                printf("YOUR BALANCE IS %lu", amount);
                break;
                case 4:
                printf("\n THANK YOU FOR USING ABC Bank ATM");
                break;
                default:
                printf("\n INVALID CHOICE");
            }
            printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION ? (y/n) : \n");
            fflush(stdin);
            scanf("%c", &transaction);
            if(transaction == 'n' || transaction == 'N')
            k=1;
        }
        while(!k);
        printf("\n\n THANKS FOR USING ABC Bank ATM SERVICE");
    }
}
