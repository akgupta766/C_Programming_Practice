#include <stdio.h>
#include <stdlib.h>

//program for checking a Palindrome number using the comparision method..

//prototyping  check_palindrome() & reverse()  function
int reverse(int num);
void check_palindrome(int num);
//main driver function
int main()
{
	int ch,num;
	while(1)
	{
		printf("\nEnter a number to check whether it's Palindrome\n");
		printf("\tThis program only works for whole number digits");
		//writing choices for user to continue or exit the program
		printf("\n\tPress [1] to Enter a Whole Nummber digits");
		printf("\n\tpress [2] to Exit");
		printf("\n\tEnter Your Choice:\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the Number to Check for :\t");
				scanf("%d",&num);
				check_palindrome(num);
				break;
			case 2:
				exit(0);
				break;
			default :
				printf("You have entered wrong Value, Re-Enter your Choice");
				break;
		}

	}


	return 0;
}
int reverse(int num)
{
	int reversed_num = 0;
	//variable to store the last extracted digit
	int last_digit;

	while(num>0)
	{
		last_digit = num % 10;
		reversed_num = reversed_num * 10 + last_digit;
		// removing the last digit that has been extracted 
		num = num/10;
	}
	return reversed_num;
}
void check_palindrome(int num)
{
	if (reverse(num) == num)
	{
		printf("\nThe given Number is Palindrome !");
	}else{
		printf("\nNumber is not a Palindrome......");
	}
}
