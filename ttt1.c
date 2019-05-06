#include<stdio.h>
void out(char a[]);
void main()
{
    int c=1,d,e;
    for(d=0;d<e;d++)
    {
    char a[10]={'0','1','2','3','4','5','6','7','8','9'};
    int b[10]={0,0,0,0,0,0,0,0,0,0};
    int n=9;
    int p=1,i=0,j,k=-1;
    char m;
    do{
    out(a);
    if(p%2==0)
        p=2;
        else
            p=1;
    printf("Player %d Enter the value:",p);
    scanf("%d",&j);
    m=(p==1)?'X':'O';
    if(j<=9&&b[j]==0&&j>0)
    {
       b[j]=j;
       a[j]=m;
       i++;
       p++;
    }
    else
    {
        if(j>9||j<=0)
        printf("Enter Valid Number.(Number should be with in 1 to 9.}\n");
        else
            printf("Don't Enter the existing value:\n");
            printf("Enter any key to continue************\n");
           getch();
    }
    if((a[1]==a[2]&&a[2]==a[3])||(a[4]==a[5]&&a[5]==a[6])||(a[7]==a[8]&&a[8]==a[9])||(a[1]==a[5]&&a[5]==a[9])||(a[3]==a[5]&&a[5]==a[7])||(a[1]==a[4]&&a[4]==a[7])||(a[2]==a[5]&&a[5]==a[8])||(a[3]==a[6]&&a[6]==a[9]))
        k=1;
     else if(i==9)
        k=0;
    }while(k==-1);
    out(a);
    if(k==1)
        printf("Player %d wins....\nCongrats*.........\n",--p);
    else
            printf("Match Draws....\n");
            printf("To play again....\nEnter 1.\nOr\nTo Exit press 2.\n");
            scanf("%d",&e);
            if(e==1)
            c++;
}
}
 void out(char a[])
 {
     system("cls");
     printf("\t\tTIC TAC TOE\n\n\n");
     printf("\tPlayer:1-'X'     Player:2-'O'\n\n");
     printf("\t\t %c | %c | %c \n",a[1],a[2],a[3]);
     printf("\t\t___|___|___\n");
     printf("\t\t %c | %c | %c \n",a[4],a[5],a[6]);
      printf("\t\t___|___|___\n");
     printf("\t\t %c | %c | %c \n",a[7],a[8],a[9]);
 }
