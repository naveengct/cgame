#include<stdio.h>
#include<stdlib.h>
#define n 3
void main()
{
    int a[9][9],b[9][9],c[30],d[9][9],a1[3][3],a2[3][3],a3[3][3],b1[3][3],b2[3][3],b3[3][3],c1[3][3],c2[3][3],c3[3][3],*p,*p1,*p2,*p3,*p4,i,j,k,k2,k1;
    int x=1,y,z,e,f,g,h,l,m,n1,s,t,count=0;
    srand(time(0));
    p=&a1[0][0];
    p3=&a[0][0];
    p4=&d[0][0];
    for(i=0;i<9;i++)
    {
      k2=1+(rand()%9);
      for(j=0;j<i;j++)
      {
        if(*(p+j)==k2)
        break;
      }
      if(i==j)
        *(p+i)=k2;
      else
        i--;
    }
     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         a2[k][j]=a1[i][j];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         a3[k][j]=a2[i][j];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         b1[j][k]=a1[j][i];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         c1[j][k]=b1[j][i];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         b2[k][j]=b1[i][j];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         b3[k][j]=b2[i][j];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         c2[k][j]=c1[i][j];
     }

     for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {
         k=i+1;
         if(k==3)
            k=0;
         c3[k][j]=c2[i][j];
     }
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i][j]=a1[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i][j+3]=a2[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i][j+6]=a3[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i+3][j]=b1[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i+3][j+3]=b2[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i+3][j+6]=b3[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i+6][j]=c1[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i+6][j+3]=c2[i][j];
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        a[i+6][j+6]=c3[i][j];
       for(i=0;i<9;i++)
          {
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
           printf("%d ",a[i][j]);}
           if(i==2||i==5)
            printf("\n");
            printf("\n");
          }

           for(i=0;i<9;i++)
        for(j=0;j<9;j++){
          b[i][j]=0;
          d[i][j]=0;}
          p1=&b[0][0];
    srand(time(0));
    p2=&c[0];
    for(i=0;i<26;i++)
    {
      k2=1+(rand()%80);
      for(j=0;j<i;j++)
      {
        if(*(p2+j)==k2)
        break;
      }
      if(i==j){
        *(p2+i)=k2;
        *(p1+k2)=*(p3+k2);
        *(p4+k2)=*(p3+k2);
      }
      else
        i--;
    }
        printf("QUESTION OF PUZZLE:\n");
        printf("    c1 c2 c3   c4 c5 c6   c7 c8 c9\n");
        for(i=0;i<9;i++)
          {printf("r%d |",i+1);
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
            printf("%d  ",d[i][j]);}
           if(i==2||i==5)
            printf("|\n");
            printf("|\n");
          }
            printf("\n");
        for(i=0;i<9;i++)
          {
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
            printf("|%d| ",b[i][j]);}
           if(i==2||i==5)
            printf("\n");
            printf("\n");
          }
      for(x=0;x<55;x++)
      {
          printf("Enter the row:");
        scanf("%d",&e);
        printf("Enter the column:");
        scanf("%d",&f);
        printf("Enter the element:");
        scanf("%d",&g);
        b[--e][--f]=g;
        system("cls");
        for(i=0;i<9;i++)
          {
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
           printf("%d ",a[i][j]);}
           if(i==2||i==5)
            printf("\n");
            printf("\n");
          }
          printf("QUESTION OF PUZZLE:\n");
        printf("    c1 c2 c3   c4 c5 c6   c7 c8 c9\n");
        for(i=0;i<9;i++)
          {printf("r%d |",i+1);
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
            printf("%d  ",d[i][j]);}
           if(i==2||i==5)
            printf("|\n");
            printf("|\n");
          }printf("\n");
          if(d[e][f]==0&&a[e][f]==b[e][f])
          for(i=0;i<9;i++)
          {
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
            printf("|%d| ",b[i][j]);}
           if(i==2||i==5)
            printf("\n");
            printf("\n");
          }
          else
          {  b[e][f]=d[e][f];
              for(i=0;i<9;i++)
          {
           for(j=0;j<9;j++){
                if(j==3||j==6)
                printf("  ");
            printf("|%d| ",b[i][j]);}
           if(i==2||i==5)
            printf("\n");
            printf("\n");
          }
            printf("ERROR\n");
            x--;
          }

      }

    printf("Play completes!!!");
}


