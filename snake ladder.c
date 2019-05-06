#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int out1(int a[],int n,int c,int m,int b);
int check(int n,int m);
void print();
void out();
int dice(int n);
int out2(int a[],int n,int m);
void main()
{
    int a[100],i,j,l=0,l1=0,x,k=0,k1=0,p1=0,p2=0,p,n,s,t,c1,c2;
    for(i=0;i<100;i++)
        a[i]=i+1;
         out();
          printf("\n");
         print();
    while(p1!=100&&p2!=100)
{
    printf("Player 1 press 1:\n");
    scanf("%d",&p);
    if(p==1)
    {
    srand(time(0));
    n=1+(rand()%6);
    if(n==1&&l==0)
    {
       l++;
       p1=p1+n;
       c1=out1(a,p1,c2,1,0);
        dice(n);
       }
    else if(n!=0&&l==0&&k>=1)
    {
         out2(a,c2,0);
         print();
         dice(n);
    }
    else if(l>=1)
    {
        if(c1>0)
            p1=c1;
     p1=p1+n;
      if(p1>100)
        p1=p1-n;
    c1=out1(a,p1,c2,1,0);
     dice(n);
    }
    else if(n!=1&&l==0&&k==0)
    {
     system("cls");
       out();
         printf("\n");
       print();
        dice(n);
   }
    }
    if(p1==100)
    {
        printf("Congrats ...Player 1.\nYou have won!!!!\n");
        break;
         }
     printf("Player 2 press 2:\n");
    scanf("%d",&p);
    if(p==2)
    {
    srand(time(0));
    n=1+(rand()%6);
    if(n==1&&k==0)
    {
       k++;
       p2=p2+n;
     c2=out1(a,p2,c1,0,1);
      dice(n);
       }
      else if(n!=0&&l>=1&&k==0)
    {
    out2(a,c1,1);
    print();
     dice(n);
    }
    else if(k>=1)
    {
    if(c1>0)
    p2=c2;
     p2=p2+n;
     if(p2>100)
        p2=p2-n;
    c2=out1(a,p2,c1,0,1);
     dice(n);
        }
    else if(n!=1&&k==0&&l==0)
     {
     system("cls");
      out();
      printf("\n");
      print();
      dice(n);
    }
    }
    if(p2==100)
    {
         printf("Congrats ...Player 2.\nYou have won!!!!\n");
        break;
    }
  }
}
int out1(int a[],int n,int c,int m1,int b1)
{
    system("cls");
    printf("\t\tSNAKE AND LADDER\n");
    printf("PLAYER 1--*\t\tPLAYER 2--#\n");
    int i,j,l,x,k=0,t,s,b,m,t1,s1,t3=0;
    if(b1==0){
        t=n;
        s=c;
        }
    else{
      s=n;
      t=c;
    }
    t1=t;
    s1=s;
        b=1;
        m=1;
       for(i=99;i>=0;i=i-10)
    {
        t=check(t,b1);
        s=check(s,b1);
        if(t1==t&&s1==s&&t3==0)
        {
         printf("\n\n");
         t3++;
        }
        x=k/10;

        if(x%2==0){

          for(j=i;j>i-10;j--)
        {
           if(j+1==100)
           {
                 if(a[j]==t&&a[j]==s&&s==t&&m==1&&b==1)
            printf("*#   ");
              else if(a[j]==t&&m==1)
               printf("*    ");
             else  if(a[j]==s&&b==1)
               printf(" #   ");
               else
                printf("%d  ",a[j]);
           }
           else{
                if(a[j]==t&&a[j]==s&&s==t&&m==1&&b==1)
            printf("*#  ");
             else  if(a[j]==t&&m==1)
               printf("*    ");
             else if(a[j]==s&&b==1)
               printf(" #   ");
               else
            printf("%d   ",a[j]);
           }
           k++;
        }
        printf("\n\n");
        }
         else
         {
              for(l=i-9;l<=i;l++)
              {
                  if(k>=90)
                  {
                if(a[l]==t&&a[l]==s&&s==t&&m==1&&b==1)
               printf("*#   ");
                 else if(a[l]==t&&m==1)
               printf("*    ");
                 else if(a[l]==s&&b==1)
               printf(" #   ");
            else
                  printf("%d    ",a[l]);
                  }

                else{
                if(a[l]==t&&a[l]==s&&s==t&&m==1&&b==1)
                printf("*#  ");
                else  if(a[l]==t&&m==1)
               printf("*    ");
             else  if(a[l]==s&&b==1)
               printf(" #   ");

                  else
                   printf("%d   ",a[l]);
               }
                  k++;
              }
              printf("\n\n");
         }
    }
     print();
    if(b1==0)
      return t;
    else
        return s;
}
int check(int n,int m)
{
    if(m==1)
        m=2;
    else
        m=1;
    switch(n)
    {
        case 4:n=14;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 9:n=31;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 21:n=42;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 28:n=84;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 51:n=67;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 54:n=34;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);break;
        case 62:n=19;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);break;
        case 64:n=60;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);break;
        case 71:n=91;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 80:n=99;printf("Congrats!!!Player %d.\nYou are on the ladder to %d.\n",m,n);break;
        case 87:n=24;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);break;
        case 93:n=73;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);break;
        case 95:n=75;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);;break;
        case 98:n=79;printf("Oops!!!Player %d.\nYou are caught by snake to %d\n",m,n);break;
        }
        return n;
}
void print()
{
    printf("Snake\t\tLadder\n");
    printf("98--79\t\t4--14\n95--75\t\t9--31\n93--73\t\t21--42\n64--60\t\t71--91\n62--19\t\t80--99\n54--34\t\t51--67\n87--24\t\t28--84\n");
}
void out()
{
     printf("\t\tSNAKE AND LADDER\n");
    printf("PLAYER 1--*\t\tPLAYER 2--#\n");
    printf("\n\n");
    printf("100  99   98   97   96   95   94   93   92   91\n\n81   82   83   84   85   86   87   88   89   90\n\n80   79   78   77   76   75   74   73   72   71\n\n61   62   63   64   65   66   67   68   69   70\n\n");
    printf("60   59   58   57   56   55   54   53   52   51\n\n41   42   43   44   45   46   47   48   49   50\n\n40   39   38   37   36   35   34   33   32   31\n\n21   22   23   24   25   26   27   28   29   30\n\n");
    printf("20   19   18   17   16   15   14   13   12   11\n\n1    2    3    4    5    6    7    8    9    10\n");
}
int dice(int n)
{
    if(n==6)
        {
    printf("\t|*  *  *|\n");
    printf("\t|       |\n");
    printf("\t|*  *  *|\n");
        }
        if(n==5)
        {
    printf("\t|*     *|\n");
    printf("\t|   *   |\n");
    printf("\t|*     *|\n");
        }
      else   if(n==4)
        {
    printf("\t|*     *|\n");
    printf("\t|       |\n");
    printf("\t|*     *|\n");
        }
       else  if(n==3)
        {
    printf("\t|*      |\n");
    printf("\t|   *   |\n");
    printf("\t|      *|\n");
        }
        else  if(n==2)
        {
    printf("\t|*      |\n");
    printf("\t|       |\n");
    printf("\t|      *|\n");
        }
         else if(n==1)
        {
    printf("\t|       |\n");
    printf("\t|   *   |\n");
    printf("\t|       |\n");
        }
}

int out2(int a[],int n,int m)
{
     int i,j,k=0,x,t,b,l;
    system("cls");
    printf("\t\tSNAKE AND LADDER\n");
    printf("PLAYER 1--*\t\tPLAYER 2--#\n");
    printf("\n\n");
    t=n;
    for(i=0;i<100;i++)
        a[i]=i+1;
           for(i=99;i>=0;i=i-10)

    {
        x=k/10;

        if(x%2==0){

          for(j=i;j>i-10;j--)
        {
           if(j+1==100)
           {
              if(a[j]==t&&m==1)
               printf("*    ");
             else  if(a[j]==t&&m==0)
               printf(" #   ");
               else
                printf("%d  ",a[j]);
           }
           else{
             if(a[j]==t&&m==1)
               printf("*    ");
             else if(a[j]==t&&m==0)
               printf(" #   ");
               else
            printf("%d   ",a[j]);
           }
           k++;
        }
        printf("\n\n");
        }
         else
         {
              for(l=i-9;l<=i;l++)
              {
                  if(k>=90)
                  {
                if(a[l]==t&&m==1)
               printf("*    ");
                 else if(a[l]==t&&m==0)
               printf(" #   ");
                  else
                printf("%d    ",a[l]);
                  }

                else{

                if(a[l]==t&&m==1)
               printf("*    ");
             else  if(a[l]==t&&m==0)
               printf(" #   ");

                  else
                   printf("%d   ",a[l]);
               }
                  k++;
              }
              printf("\n\n");
         }
    }
}
