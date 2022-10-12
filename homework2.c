#include <stdio.h>
int triangle(int a,int b,int c)
{
	if(a>50)
	{
		printf("Error. a cannot be less then 1 and more then 50\n");
	}
	
	else if(b<1 && a>50)
	{
		printf("Error. b cannot be less then 1 and more then 50 \n");
	}
	
	else if(c<1 && c>50 )
	{
		printf("Error. c cannot be less then 1 and more then 50 \n");
	}
	
    if((a>b+c) && (b>a+c) && (c>a+b))
	{
		printf("Not a triangle.\n");
	}
	
	if((a==b) && (a==c) && (b==c))
	{
		printf("Isosceles \n");
	}
	
	else if((a!=b) && (b!=c))
	{
		printf("Equilateral. \n");
	}
	
	else if((a!=b) && (a!=c) && (b!=c))
	{
		printf("Scalene. \n");
	}
	
	return 0;
}

int main()
{
	int a,b,c;
	
	printf("Enter the a number.");
	scanf("%d",&a);
	
	printf("Enter the b number.");
	scanf("%d",&b);
	
	printf("Enter the c number.");
	scanf("%d",&c);
	
	triangle(a,b,c);
	
	return 0;
}
