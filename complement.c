//program to find the 9's and 10's complement together

#include<stdio.h>   //header file

#include<conio.h>   //header file 

#include<math.h>    //header file  

void main()

{
	
      int p,count,c,a,g,n;  //data type and variable declaration

	printf("Enter the number to perform the operation on");

	scanf("%d",&p);  //The number to be operated upon
	while(p)
	
      {

		p=p/10;

		count++;

	}  //Counting the digits in the entered number 
	
            printf("Total number of digits in the entered number",count);

	c=pow(10,count); 

        a=c-1;

	g=p-a;

	printf("9's complement %d",g);  

	n=g+1;

	printf("10's complement %d",n);

	getch();

}

