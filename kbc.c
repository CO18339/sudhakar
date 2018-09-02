#include<stdio.h>
#include<stdlib.h>
char _ch[]={'a','a','c','d','a','b','d','a','d','c','c','b','d','a','b','\0'};
int amt=0;
void assign(char);
int i=0,k, j=1,p=1;// Global variables
int main()
{char z;//Local variable
char name[20],ch;
          printf("WELCOME TO THE KAUN BANEGA CROREPATI(KBC)!!!\n");
          printf("Used the small letters\n"); 
        printf("U can use following lifelines for one time:\n ");
printf("1. 50-50 lifline for by pressing 'h'\n ");
printf("2. Audience poll by pressing p\n");
printf("\n To quit- Press q\n");


                    printf("ENTER THE GAME ZONE***\n");
         printf("ENTER YOUR NAME\n");
     scanf("%s",&name);
               printf("NAME OF THE PLAYER:%s\n",name);
               printf("PLAY THE GAME\n");
          printf("YOUR FIRST QUESTION IS\n");
  printf("Which was the first  metal used by the man?\n");
              printf("a) COPPER       b) SILVER\n");
              printf("c) BRONZE       d) BRASS\n");
scanf(" %c",&z);
assign(z);
  printf("the winning amount is %d\n",amt);
          printf("YOUR SECOND QUESTION IS\n");                        
  printf("The Indus Valley Civilisation flourished during\n");
              printf("a) 2350-1750       b) 3000-1500\n");
              printf("c) 5000-3500       d) 1500-500\n");
scanf(" %c",&z);
assign(z);
  printf("the winning amount is %d\n",amt);
          printf("YOUR THIRD QUESTION IS\n");                        
  printf("Which is the oldest Veda?\n");
              printf("a) Samaveda       b) Yajurveda\n");
              printf("c) Rigveda        d) Atharvaveda \n");
scanf(" %c",&z);
assign(z);
   printf("the winning amount is %d\n",amt);
           printf("YOUR FOURTH QUESTION IS\n");                        
  printf("How many Union Territories does Indian have\n");
              printf("a) 8        b) 9 \n");
              printf("c) 6        d) 7 \n");
scanf(" %c",&z);
assign(z);
   printf("the winning amount is %d\n",amt);
            printf("YOUR FIFTH QUESTION IS\n");                        
  printf("What is the Capital of Arunchal pradesh\n");
              printf("a) Ita nagar       b) Dispur\n");
              printf("c) Imphal          d) Shillong\n");
scanf(" %c",&z);
assign(z);
     printf("the winning amount is %d\n",amt);
            printf("YOUR SIXTH QUESTION IS\n");
  printf("Who was the only Indian Governor General\n");
              printf("a) DR.Rajendra Prasad       b) C Rajapalachari\n");
              printf("c) Jawaharlal Nehru         d) none of the above\n");
scanf(" %c",&z);
assign(z); 
     printf("the winning amount is %d\n",amt);
            printf("YOUR SEVENTH QUESTION IS\n");
  printf("The Constitution names our country as\n");
              printf("a) Hindustan                  b) Bharat\n");
              printf("c) None of the above          d) India,that is Bharat\n");
scanf(" %c",&z);
assign(z);
    printf("the winning amount is %d\n",amt);
            printf("YOUR EIGHTH QUESTION IS\n");
  printf("Buland Darwaza i situated in\n");
              printf("a) Fatehpur sikri       b) Agra\n");
              printf("c) Delhi                d) Mathura\n");
scanf(" %c",&z);
assign(z);
    printf("the winning amount is %d\n",amt);
            printf("YOUR NINTH QUESTION IS\n");
  printf("Who is the father of Constitution\n");
              printf("a) Jl Nehru              b) Mahatma Gandhi\n");
              printf("c) Sardar Patel          d) DR. BR Ambedkar\n");
scanf(" %c",&z);
assign(z);
    printf("the winning amount is %d\n",amt);
            printf("YOUR TENTH QUESTION IS\n");
  printf("The title of 'Sparrow' is given to\n");
              printf("a) Napolean                         b) Sardar Patel\n");
              printf("c) Maj Gen Rajindra Singh           d) None of the above\n");
scanf(" %c",&z);
assign(z);
     printf("the winning amount is %d\n",amt);
            printf("YOUR ELEVENTH QUESTION IS\n");
  printf("Any component of the computer you can see and touch\n");
              printf("a) Storage           b) Software\n");
              printf("c) Hardware          d) CPU\n");
scanf(" %c",&z);
assign(z);
    printf("the winning amount is %d\n",amt);
            printf("YOUR TWELVETH QUESTION IS\n");
  printf("Which Computer memory is used for storing programs and data currently being processed by the CPU?\n");
              printf("a) Mass memory                  b) Internal memory\n");
              printf("c) Non-volatile memory          d) PROM\n");
scanf(" %c",&z);
assign(z);
    printf("the winning amount is %d\n",amt);
            printf("YOUR THIRTEENTH QUESTION IS\n");
  printf("Which of the folowing is known father of computer\n");
              printf("a) Herman Hollerith       b) Napier\n");
              printf("c) Grace Hoppers          d) Charles babbage\n");
scanf(" %c",&z);
assign(z); 
    printf("the winning amount is %d\n",amt);
            printf("YOUR FOURTEENTH QUESTION IS\n");
  printf("The brain of the Computer\n");
              printf("a) Central processing unit         b) Control unit\n");
              printf("c) Arithematic logic unit          d) Storage unit\n");
scanf(" %c",&z);
assign(z);
printf("the winning amount is %d\n",amt);
            printf("YOUR FIFTEENTH QUESTION IS\n");
  printf("For seeing the output,we use\n");
              printf("a) keyboard        b) monitor\n");
              printf("c) joystick        d) mouse\n");
scanf(" %c",&z);
assign(z);
              printf( "hurraaa!!!!!\n");
    
                printf("CONGRATULATION YOU WINS THE GAME\n");

               printf("THE TOTAL WINNING AMOUNT IS %d FOR WINNING PLAYER %s\n",amt,name);

return 0;
}

void assign(char z)
{
k= i+1;

if(z=='q')
{
printf("\nYour prize money: Rs.%d",amt);
exit(0);
}

if(z=='h')
{
if(j==0)
{

printf("\nYou have already used your lifeline\n");
printf("Choice=");
scanf(" %c",&z);
assign(z);
return ;
}
else
{j=0;
if(_ch[i]=='a')
printf("\n(B)and(D)are wrong Options");
else if(_ch[i]=='b')
printf("(C)and(D)are wrong options");
else if(_ch[i]=='c')
printf("(A)and(D)are wrong options");
else
printf("(A)and(B)are wrong options");
printf("\nChoice=");
scanf(" %c",&z);
assign(z);
return ;
}

}

if(z=='p')
{if(p==0)
{
printf("\nYou have already used this lifeline\n");
printf("Choice=");
scanf(" %c",&z);
assign(z);
return ;
}
else
{p=0;
 printf("\nChances for correctness\n");

if(_ch[i]=='a')
{
printf("80%--(A)");
printf("60%--(D)");
printf("40%--(B)");
printf("20%--(C)");
}
else if(_ch[i]=='b')
{printf("80%--(B)");
printf("60%--(A)");
printf("40%--(D)");
printf("20%--(C)");
}
else if(_ch[i]=='c')
{printf("80%--(C)");
printf("60%--(A)");
printf("40%--(B)");
printf("20%--(D)");
}
else
{printf("80%--(D)");
printf("60%--(A)");
printf("40%--(B)");
printf("20%--(C)");
}
}
printf("choice:");
scanf(" %c",&z);
assign(z);
return ;
}
if(_ch[i]==z)
{
printf("Correct answer\n");

amt=amt+100000;
i++;}
else
{printf("BETTER LUCK FOR NEXT TIME\a\n");
exit(0);
}
}
