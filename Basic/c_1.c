// c program to detect whether a number is prime or not
#include <stdio.h>
#include <stdlib.h>

//prototyping the check_prime function 
void check_prime();

int main()
{
	int ch;
	
	while(1)
	{
	printf("\n\nProgram to Check Prime Numbers..........\n");
	//taking the the users choice
	printf("\n\tpress 1 to enter the number :");
	printf("\n\tpress 2 to exit program");
	printf("\n\tSelect options by mentioning their inder no.\n");
	printf("\n\t>>> Your Choice :\t");
	scanf("%d",&ch);
	//now taking switch_case decision based on inputs
	switch(ch)
		{
		case 1 :
			check_prime();
			break;
		case 2:
			printf("\n\t\tExiting Program..........\t\n");
			exit(0);
			break;
		default:
			printf("Wrong Choice !\n");	
			break;
		}
	}

return 0;
}

void check_prime()
{
	int num,flag=0,i;

	//taking user input for interger only 
	printf("\n\tEnter the Integer :\t");
	scanf("%d",&num);
	
	//alogorithm : Bruteforce method  o=time complexity O(n)
	if(num <= 1)
	{
		printf("\n\tGiven number is Not-Prime");
	}
	for(i = 2; i <= num; i++)
	{
		if(num%i==0){
			flag++ ;
		}
	}
	if(flag>1)
	{
		printf("\n\tGiven number is Not-Prime");
	}else
	{
		printf("\n\tIt is a Prime Number !!");
	}
}
