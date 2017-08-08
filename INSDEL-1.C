#include<stdio.h>
#include<conio.h>
void main()
{ int A[5],i,n,pos,item,a,b;
  clrscr();
  printf("\n Enter the size of array");
  scanf("%d",&n)    ;
  printf("\n Enter elements");
  for(i=0;i<n;i++)
   { scanf("%d",&A[i]);
   }
  for(i=0;i<n;i++)
   printf("%d",A[i]);
  printf("\n Enter the element to be inserted");
  scanf("%d",&item);
  printf("\n Enter the position");
  scanf("%d",&pos);



   for(i=n;i>=pos;i--)
    A[i+1]=A[i];
    A[pos]=item;
    printf("\n new loop");
    for(i=0;i<=n;i++)
    printf("%d",A[i]);
     printf("\n Enter element you want to delete") ;
     scanf("%d",&b);
     a=A[b];
     printf(" \nur deleted item is %d\n",a);

     for(i=b;i<=n;i++)

     A[i]=A[i+1];
     printf("\n new array is");
     for(i=0;i<n;i++)
     printf("%d", A[i]);

    getch();
  }