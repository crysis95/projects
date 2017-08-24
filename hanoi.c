#include<stdio.h>

#include<conio.h>

#include<math.h>

void toh(int n, char A,char B,char C)

{
	
        if(n==1)
	{
		
	printf("\n%c -->%c",A,C);
return;

	}

	else
	{
		toh(n-1,A,C,B);
		toh(1,A,B,C);
		toh(n-1,B,A,C);
}
}
void main()
{
	int N,steps;
	char ch;
	clrscr();
	do
	{
		printf("enter the value of disc for TOWER OF HANNOI -->");
		scanf("%d",&N);
		steps=pow(2,N)-1;
		printf("\nTotal no. of steps::%d",steps);
		toh(N,'A','B','C');
		printf("\n Do you wanna do it again?\n");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	getch();
}
