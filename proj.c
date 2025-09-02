#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
   printf("                                                         *************welcome to zomiggy****************                                                \n");
   char username[10], password[10],method;
   int bill=0,d[10],q[10],c=0;
   long i;
   printf("enter your username and password respectively:");
   scanf("%s%s",&username,&password);
   printf("username=%s\npassword=%s\n",username,password); 
   printf("you are logged in successfully %s\n",username); 
   printf("here are some categories of food items:-\nsouth indian\nnorth indian\nchinese\nselect from the above\n");
   int category;
while(1)
{
   printf("press 1 for south indian\npress 2 for north indian\npress 3 for chinese \npress 4 for bill\n");
   scanf ("%d",&category);
   if(category==1){
    printf("here are some listed south indian food items along with price:\nmasala dosa------>$6\nvada sambhar------>$4\nidli sambhar------>$4\n");
    while(1){
    int food;
    printf("press 1 masala dosa\npress 2 for vada sambhar\npress 3 for idli sambhar\npress 4 to exit\n ");
    scanf("%d",&food);
    if(food==1){
        printf("masala dosa------>$6\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=1;
        q[c]=qty;
        c++;
        bill=bill+(6*qty);
    }
    if(food==2){
        printf("vada sambhar------>$4\nadded to your cart\n");
         int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=2;
        q[c]=qty;
        c++;

        bill=bill+(4*qty);
    }
    if(food==3){
        printf("idli sambhar------>$4\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=3;
        q[c]=qty;
        c++;

        bill=bill+(4*qty);
        
    }
    if(food==4){
        break;
    }
}
}   else if(category==2){
    printf("here are some listed north indian food items along with price:\nbutter chicken------>$8\ndal makhani------>$6\nbutter naan------>$2\n");
    while(1){
    int food;
    printf("press 1 butter chicken\npress 2 for dal makhani\npress 3 for butter naan\npress 4 to exit\n");
    scanf("%d",&food);
    if(food==1){
        printf("butter chicken------>$8\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=4;
        q[c]=qty;
        c++;

        bill=bill+(8*qty);
    }
    if(food==2){
        printf("dal makhani------>$6\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=5;
        q[c]=qty;
        c++;

        bill=bill+(6*qty);
    }
    if(food==3){
        printf("butter naan------>$2\nadded to your cart\n");
                int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=6;
        q[c]=qty;
        c++;

        bill=bill+(2*qty);
    }
    if(food==4){
        break;
    }

   }}
   else if(category==3){
    printf("here are some listed chinese food items along with price:\nveg manchurian------>$6\nspring roll------>$5\nveg momos------>$4\n");
    while(1){
    int food;
    printf("press 1 veg manchurian\npress 2 for spring roll\npress 3 for veg momos\npress 4 to exit\n ");
    scanf("%d",&food);
    if(food==1){
        printf("veg manchurian------>$6\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=7;
        q[c]=qty;
        c++;

        bill=bill+(6*qty);
    }
    if(food==2){
        printf("spring roll------>$5\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=8;
        q[c]=qty;
        c++;

        bill=bill+(5*qty);
    }
    if(food==3){
        printf("veg momos------>$4\nadded to your cart\n");
        int qty;
        printf("enter quantity: ");
        scanf("%d",&qty);
        d[c]=9;
        q[c]=qty;
        c++;

        bill=bill+(4*qty);
    }
    if(food==4){
        break;
    }
   }}
   else if(category==4){
    printf("item name\t\tqty\t\tprice\t\ttotal price\n");
    for(i=0;i<c;i++){
        if(d[i]==1){
            printf("masala dosa\t\t%d\t\t$6\t\t%d$\n",q[i],q[i]*6);
        }
        if(d[i]==2){
            printf("vada sambhar\t\t%d\t\t$4\t\t%d$\n",q[i],q[i]*4);
        }
        if(d[i]==3){
            printf("idli sambhar\t\t%d\t\t$4\t\t%d$\n",q[i],q[i]*4);
        }
        if(d[i]==4){
            printf("butter chicken\t\t%d\t\t$8\t\t%d$\n",q[i],q[i]*8);
        }
        if(d[i]==5){
            printf("dal makhani\t\t%d\t\t$6\t\t%d$\n",q[i],q[i]*6);
        }
        if(d[i]==6){
            printf("butter naan\t\t%d\t\t$2\t\t%d$\n",q[i],q[i]*2);
        }
        if(d[i]==7){
            printf("veg manchurian\t\t%d\t\t$6\t\t%d$\n",q[i],q[i]*6);
        }
        if(d[i]==8){
            printf("spring roll\t\t%d\t\t$5\t\t%d$\n",q[i],q[i]*5);
        }
        if(d[i]==9){
            printf("veg momos\t\t%d\t\t$4\t\t%d$\n",q[i],q[i]*4);
        }
    }
    printf("your total bill is %d$\n",bill);
    printf("select your payment method:- credit/debit card,cash,upi\n");
    printf("press 'c' for card\npress 'm' for cash\npress 'u' for upi\n");
    scanf("%s",&method);
        if(method=='c'){
            int cvv;
            long cardno;
            char name;
            printf("enter your 16 digit card number: ");
            scanf("%ld",&cardno);
            printf("%ld\n",cardno);
            c=0;
            for(i=cardno;i>0;i=i/10){
                c++;
            }
            if(c==16){
            printf("cvv: ");
            scanf("%d",&cvv);
            printf("name: ");
            scanf("%s",&name);
            printf("*********************yayyyy!!!!!!!!!!!!!!!!!!order succesfully placed************************\n");
        }
        else{
            printf("invalid card number");
        }
    }
        if(method=='m'){
            printf("*********************yayyyy!!!!!!!!!!!!!!!!!!order succesfully placed************************\n");
        }
        if(method=='u'){
            int upi;
            printf("enter your upi id: ");
            scanf("%d",&upi);
            printf("*********************yayyyy!!!!!!!!!!!!!!!!!!order succesfully placed************************\n");
        }
    exit(0);
   }
   else{
    exit(0);
   }
}
    
}

