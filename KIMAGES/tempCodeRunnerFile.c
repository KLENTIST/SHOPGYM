
#include <stdio.h>

void main() {
    int pin,pin1=1111,c=1,ch,amt,balance=10000;
     printf("-WELCOME TO ATM-\n");
    start:
    printf("ENTER PIN:");
    scanf("%d",&pin);
    if(pin==pin1)
    {
    printf("SELECT YOUR CHOICE:\n");
    printf("1.DEPOSIT\n2.WITHDRAW\n3.DEBIT BALANCE\n4.CHANGE PIN\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("ENTER DEPOSIT:\n");
      scanf("%d",&amt);
    
      if(amt<=30000)
      {
      balance=balance+amt;
      printf("%d",balance);
      }
      else
      {
      printf("MAX LIMIT:20000\n");      
      }
      break;
      case 2: printf("ENTER THE WITHDRAW:\n");
      scanf("%d",&amt);
      if(amt<=10000)
      {
          if(amt<=balance)
          {
            balance=balance-amt;  
 printf("AFTER DEDUCTING-%d,CURRENT BALANCE IS=%d\n",amt,balance);
          }
          else
          {
               printf("insufficient balance\n");
          }
      }
      else
      {
     printf("MAX LIMIT:20000\n");
      }
      break;
      case 3:printf("YOUR BALANCE=%d\n");
      break;
      case 4:printf("ENTER NEW PIN:\n");
      scanf("%d",&pin1);
      printf("PIN CHANGED SUCCEFULY\nLOGIN AGAIN\n");
      goto start;
      break;
    
        
        
    }
    }  
    else{
    printf("PIN INCORECT\n");
    
    }
    if(c<3)
    {
    c++;
    goto start;
    }
    printf("PRESS ONE TO CONTINUE:\n");
    scanf("%d",&ch);
    if(ch==1)
    goto start;
    printf("-THANK YOU FOR USING THIS ATM-");
  
}