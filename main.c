#include <stdio.h>
#include <stdlib.h>
int main(){
    char money[1000];
    char addedmoney[1000];
    char addedmoney2[1000];
     FILE *fp = fopen("data.txt", "r");
      if (fp != NULL)
    {
         fclose(fp);
         FILE *fp2 = fopen("data.txt","r");
         fgets(money,100,fp2);
       printf("You have %s money in your account \n",money);
       fclose(fp2);
       FILE *fp3 = fopen("data.txt","w");
       printf("How much money do you want to add to your account:");
       scanf(" %s",addedmoney);
           fputs(addedmoney, fp3);
           printf(" added %s money to account \n",addedmoney);
fclose(fp3);
    

    }
    else {
       
        printf("Hello, it seems you are new to the software you don't have any previous records before, we have made an account for you write how much money you want to put into it \n.");
        FILE *fp4;
   fp4 = fopen("data.txt","w");
   printf("How much money do you want to add:");
   scanf(" %s",addedmoney2);
     fputs(addedmoney2, fp4);
   printf("You added %s money to your account \n",addedmoney2);

    }
    return 0;
}