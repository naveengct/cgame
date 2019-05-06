#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXL 30
void main()
{
    char a[MAXL];
    int l,n,i,m,g,j;
    char c[2];
    char b[MAXL];
    char con[20][MAXL]={
        "india",
        "africa",
        "newzland",
        "japan",
        "china",
        "england",
        "bangaladesh",
        "germany",
        "france",
        "italy",
        "burma",
		"pakistan",
		"nepal",
		"malaysia",
		"philippines",
		"australia",
		"iran",
		"ethiopia",
		"oman",
		"indonesia"};
		srand(time(0));
		n=(rand()%20);
		strcpy(b,con[n]);
		for(i=0;i<strlen(b);i++)
            a[i]=' ';
        a[i]='\0';
        l=6;
        while(l>0)
        {
            system("cls");
            printf("\tHANG-A-MAN\n");
            printf("COUNTRY NAME:%d letters",strlen(b));
            printf("\t\tLIFE:");
            m=0;
            for(i=0;i<l;i++)
            printf("*");
            printf("\n");
            for(i=0;i<strlen(a);i++){
            printf("|%c",a[i]);
            }
            printf("|\n");
            printf("Enter a single letter:\n");
            scanf("%s",c);
            for(i=0;i<strlen(b);i++)
            {
                 if(c[0]==b[i])
                 {
                     a[i]=b[i];
                     m++;
                 }
            }
                 if(m==0)
                 l--;
      if(strcmp(a,b)==0)
       {
         system("cls");
         printf("\tHANG-MAN\n");
         printf("COUNTRY NAME:%d letters",strlen(b));
         printf("\t\tLIFE:");
         for(i=0;i<l;i++)
         printf("*");
         printf("\n");
         for(i=0;i<strlen(a);i++)
            printf("|%c",a[i]);
            printf("|\n");
       printf(" Congrats you have found the correct word %s.\n",a);
       break;
       }


        }
        if(l==0){
         system("cls");
         printf("\tHANG-MAN\n");
         printf("COUNTRY NAME:%d letters",strlen(b));
         printf("\t\tLIFE:DEAD\n");
         printf(" you have lost the game.....\n");
         printf("The answer is %s",b);
        }
}


