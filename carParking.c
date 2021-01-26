#include<stdio.h>
#include<stdlib.h>
void twoWheeler();
void threeWheeler();
void fourWheeler();
void heavyVehicle();
void show();
void del_detail();
int main()
{
    int amt=0,count=0,ch,two=0,three=0,four=0,heavy=0;
    while(1)
    {
        printf("\n 1.two wheeler");
        printf("\n 2.three wheeler");
        printf("\n 3.four wheeler");
        printf("\n 4.more than four wheeler");
        printf("\n 5.show the details");
        printf("\n 6.delete the details");
        printf("\n 7.exit");

      printf("\n enter u r choice");
      scanf("%d",&ch);

   switch(ch)
   {
       case 1: twoWheeler();break;

       case 2: threeWheeler();break;

       case 3: fourWheeler();break;

       case 4: heavyVehicle();break;

       case 5: show();break;

       case 6: del_details();break;



       default : printf("\n enter correct choice");

   }
  }
}

 void twoWheeler()
 {
     two++;
     if(count<=50)
     {
         if(ch==1)
         {
             amt=amt+50;
             count=count++;
         }
     }
     else
        printf("\n parking is full");
 }

 void threeWheeler()
 {
     three++;
     if(count<=50)
     {
         if(ch==2)
         {
             amt=amt+100;
             count=count++;
         }
     }
     else
        printf("\n parking is full");
 }

 void fourWheeler()
 {
     four++;
     if(count<=50)
     {
         if(ch==3)
         {

             amt=amt+200;
             count=count++;
         }
     }
     else
        printf("\n parking is full");
 }

 void heavyVehicle()
 {
     heavy++;
     if(count<=50)
     {
         if(ch==4)
         {
             amt=amt+350;
             count=count++;
         }
     }
     else
        printf("\n parking is full");
 }

 void show()
 {
     printf("\n total no of vehicles are",count);
     printf("\n total amount is",amt);
     printf("\n no of two wheelers are",two);
     printf("\n no of three wheelers are",three);
     printf("\n no of four wheelers are",four);
     printf("\n no of heavy vehicle are",heavy);
 }

 void del_details()
 {
     amt=0;
     count=0;
     two=0;
     three=0;
     four=0;
     heavy=0;

     printf("\n details deleted");


 }
