//program to implement factorial using recursion method

#include <stdio.h>
//prototyping the function 
int factorial(int n);

int main(){
	printf("\n")
	// defining varialble
	int n,res;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	//calling the function
	res = factorial(n);
	//printing result
	printf("\nFactorial of %d : %d",n,*&res);
	return 0;

}


int factorial(int n)
{
	if(n<=1 && n>=0){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

