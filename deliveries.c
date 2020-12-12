#include <stdio.h>
#include <string.h>

//structure to create newspapers and magazines
struct create{    
  char *name;
  double price;
};

struct totals{
  int p;   //newspapers
  int m;   //magazines
};

//structure with array to input prices of the week
struct week{          
  struct totals days[7];
};

//structure for newspapers
struct create news(char *name){
  struct create newso ;
  newso.name=name;
  newso.price=1.5;
  return newso;
}

//structure for magazines
struct create mag(char *name){
  struct create  mags;
  mags.name=name;
  mags.price=2.99;
  return mags;
}

//structure to insert the distribution of the week
struct week fillweek(){
   struct week who;

  who.days[0].p = 52000;   //monday
  who.days[0].m = 25000;
  who.days[1].p = 108000;  //tuesday
  who.days[1].m = 50000;
  who.days[2].p = 54000;    //wednesday
  who.days[2].m = 50000;
  who.days[3].p = 54000;   //thursday
  who.days[3].m = 5000;
  who.days[4].p = 108000;  //friday
  who.days[4].m = 5000;
  who.days[5].p = 216000; //saturday
  who.days[5].m = 50000;
  who.days[6].p = 432000;  //sunday
  who.days[6].m = 500000;

  return(who);
}

//1st function for total distribution
void totaldelis(struct week who){

  int a,i,m;
  float p;

      printf("\nChoose an option:\n1 for total deliveries of both papers and mags\n2 for only papers\n3 only for mags\n");

      scanf("%d",&a);

if(a==1){

    printf("Total Delivery of papers and magazines per week:\n");
    for(i=0; i<=6; i++){
    p = p + who.days[i].p; 
    }

    for(i=0; i<=6; i++){
     m = m + who.days[i].m;
    }

    printf("total papers %7.0f",p);
    printf("  total mags %6.0d",m);
    }

if(a==2){

  for(i=0; i<=6; i++){
  p = p + who.days[i].p;
  }

  printf("total papers  %7.0f",p);
}

if(a==3){

    for(i=0; i<=6; i++){
     m = m + who.days[i].m;
    }

   printf("total mags %6.0d",m);
}

}

//2nd function for distrubution per shop
void totaldelis1(struct week who){

  int a,i,m;
  float p;
  
    printf("Total Delivery of papers and magazines per shop per week:\n");
    for(i=0; i<=6; i++){
    p = p + who.days[i].p; 
    }

    for(i=0; i<=6; i++){
     m = m + who.days[i].m;
    }

    printf("total papers %7.0f",p/5);
    printf("  total mags %6.0d",m/5);

}

//3rd function for distribution per shop with an option
void totaldelis2(struct week who){

  int a,i,m;
  float p;

    
      printf("\nChoose an option:\n1 For Papers\n2 For Mags\n");

      scanf("%d",&a);

if(a==1){

    for(i=0; i<=6; i++){
    p = p + who.days[i].p; 
    }
    printf("total papers per shop %7.0f",p/5);
}

if (a==2){

    for(i=0; i<=6; i++){
     m = m + who.days[i].m;
    }

    printf("total mags per shop %6.0d",m/5);
  }
}

//4th function for distribution for specific day 
void totaldelis3(struct week who){

  int a,i,m;
  float p;

    printf("\nChoose an option:\n1 For Papers\n2 For Mags\n");

    scanf("%d",&a);

if(a==1){
    printf("\nChoose a day:\n0 For Monday\n1 Tuesday\n2 Wednesday\n3 Thursday\n4 Friday\n5 Saturday\n6 Sunday\n");

    scanf("%d",&a);

    printf("Total papers for that day per shop:\n");
    printf("%d",who.days[a].p/5);
}
else if(a==2)

    printf("\nChoose a day:\n0 For Monday\n1 Tuesday\n2 Wednesday\n3 Thursday\n4 Friday\n5 Saturday\n6 Sunday\n");

    scanf("%d",&a);

    printf("Total papers for that day per shop:\n");
    printf("%d",who.days[a].m/5);
}

//5th function for distribution per shop or/and both items for X months
void totaldelis4(struct week who){

  int a,i,m;
  float p;

      printf("\nChoose an option:\n1 For Papers\n2 For Mags\n3 for Both\n");
      scanf("%d",&a);

 if(a==1){
    
      printf("\nIn how many months?\n");
      scanf("%d",&a);
      a=a*4;

       for(i=0; i<=6; i++){
       p = p + who.days[i].p; 
       }
       p=(p/5)*a;
       
      printf("\nTotal Papers per shop in given months: %7.0f",p);
 }    

 else if(a==2){

      printf("\nIn how many months?\n");
      scanf("%d",&a);
      a=a*4;

       for(i=0; i<=6; i++){
       m = m + who.days[i].m;
       }
       m=(m/5)*a;
    printf("\nTotal mags per shop in given months: %6.0d",m);
  }

else if(a==3){

      printf("\nIn how many months?\n");
      scanf("%d",&a);
      a=a*4;

       for(i=0; i<=6; i++){
       p = p + who.days[i].p; 
       }
       p=(p/5)*a;

      for(i=0; i<=6; i++){
       m = m + who.days[i].m;
       }
       m=(m/5)*a;

      printf("\nTotal mags per shop in given months: %6.0d",m);
      printf("\nTotal Papers per shop in given months: %7.0f",p);
}

}

//6th function total distribution or/and both items per shop in X months in specific day
void totaldelis5(struct week who){

  int a,i,m;
  float p;

        printf("\nChoose an option:\n1 For Papers\n2 For Mags\n3 for Both\n");
        scanf("%d",&a);

  if(a==1){
        printf("\nChoose a day:\n0 For Monday\n1 Tuesday\n2 Wednesday\n3 Thursday\n4 Friday\n5 Saturday\n6 Sunday\n");

        scanf("%d",&a);
        p=who.days[a].p/5;

        printf("\nIn how many months?\n");
        scanf("%d",&a);
        a=a*4;

        p=p*a;
        printf("Total Papers per shop in given months and day:%.0f",p);
  }

 else if(a==2){
        printf("\nChoose a day:\n0 For Monday\n1 Tuesday\n2 Wednesday\n3 Thursday\n4 Friday\n5 Saturday\n6 Sunday\n");

        scanf("%d",&a);
        m=who.days[a].m/5;

        printf("\nIn how many months?\n");
        scanf("%d",&a);
        a=a*4;

      m=m*a;
      printf("Total mags per shop in given months and day:%d",m);
 }
 else if(a==3){
        printf("\nChoose a day:\n0 For Monday\n1 Tuesday\n2 Wednesday\n3 Thursday\n4 Friday\n5 Saturday\n6 Sunday\n");

        scanf("%d",&a);
        m=who.days[a].m/5;
        p=who.days[a].p/5;

        printf("\nIn how many months?\n");
        scanf("%d",&a);
        a=a*4;

        m=m*a;
        p=p*a;
        printf("Total Papers per shop in given months and day: %.0f\n",p);
        printf("Total mags per shop in given months and day: %d",m);
 }
}

//7th function to calculate profit
void profit(struct week who,struct create newso,struct create  mags){


  int a,i,m,l;
  float p;

    printf("\nChoose an option:\n1 For Papers\n2 For Mags\n3 for Both\n");
    scanf("%d",&a);

if(a==1){
      printf("\nIn how many months?\n");
      scanf("%d",&a);
      a=a*4;

     for(i=0; i<=6; i++){
       p = p + who.days[i].p; 
       }

      printf("Choose an option:\n1 For profit from all shops\n2 For profit per shop\n");
      scanf("%d",&l);
      if(l==1){
       p=p*a;
       // newso.price to calculate with programmer's thought instead of putting the price directly which is 1.50
       p=(p*newso.price)*0.006;  
       printf("Total profit from papers in given months from all shops is: %.0f€",p);
       }

    else if(l==2){
       p=(p/5)*a;
       p=(p*newso.price)*0.006;  
       printf("Total profit from papers in given months per shop is: %.0f€",p);
       }   
}
else if(a==2){
    printf("\nIn how many months?\n");
    scanf("%d",&a);
    a=a*4;

    for(i=0; i<=6; i++){
     m = m + who.days[i].m; 
      }

      printf("Choose an option:\n1 For profit from all shops\n2 For profit per shop\n");
      scanf("%d",&l);
      if(l==1){
       m=m*a;
       m=(m*mags.price)*0.006;  
       printf("Total profit from mags in given months from all shops is: %d€",m);
       }

    else if(l==2){
       m=(m/5)*a;
       m=(m*mags.price)*0.006;  
       printf("Total profit from mags in given months per shop is: %d€",m);
       }      
}
else if(a==3){
    printf("\nIn how many months?\n");
    scanf("%d",&a);
    a=a*4; 

     for(i=0; i<=6; i++){
     m = m + who.days[i].m; 
      }
     for(i=0; i<=6; i++){
     p = p + who.days[i].p; 
      } 

      printf("Choose an option:\n1 For profit from all shops\n2 For profit per shop\n");
      scanf("%d",&l);
      if(l==1){
       m=m*a;
       m=(m*mags.price)*0.006; 
       p=p*a;
       p=(p*newso.price)*0.006;
       printf("Total profit from papers in given months from all shops is: %.0f€\n",p);
       printf("Total profit from mags in given months from all shops is: %d€",m);
       }

    else if(l==2){
       m=(m/5)*a;
       m=(m*mags.price)*0.006;
       p=(p/5)*a;
       p=(p*newso.price)*0.006;  
       printf("Total profit from papers in given months per shop is: %.0f€\n",p);  
       printf("Total profit from mags in given months per shop is: %d€",m);
       }        

  }
}


int main() {
  struct create Pontiki = news("Ôï Ðïíôßêé");
  struct create Documento = news("Documento");
  struct create Lifo = news("Lifo");
  struct create Espresso = news("Espresso");
  struct create Capital = news("Capital");
  struct create Left = news("Left");

  struct create Pc = mag("Pc Magazine");
  struct create Drive = mag("Drive");
  struct create Auto = mag("Auto Moto");
  struct create Shape = mag("Shape");
  struct create Crash = mag("Crash");


struct week delis;
delis = fillweek();
int a;


printf("Choose a function:\n1 For total deliveries of all shops in a week\n2 For total deliveries per shop of papers & mags per shop per week\n3 For total deliveries per shop of papers OR mags\n4 For total deliveries of papers OR mags of a shop in a chosen day\n5 For total deliveries of papers OR/and mags of a shop in X months\n6 For total deliveries of papers OR/and mags of a shop in X months in a chosen day\n7 For calculating total profit or per shop in given months of papers OR/and mags\n");
scanf("%d",&a);

if (a==1){
  totaldelis(delis);
}

if (a==2){
  totaldelis1(delis);
}

if (a==3){
  totaldelis2(delis);
}

if (a==4){
  totaldelis3(delis);
}

if (a==5){
  totaldelis4(delis);
}

if (a==6){
  totaldelis5(delis);
}

if (a==7){
  profit(delis,Pontiki,Pc);
}


  return 0;
}
