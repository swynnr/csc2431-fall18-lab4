#include <iostream>
//Changed things up
//TODO #1.1: add a function prototype for fib
int fib(int);
//TODO #2.1: add a function prototype for fact
int fact(int);


int main()
{
	//TODO: #1.2 call your fib function, print the result
	fib(5);	
	//TODO: #2.2 call your fact function, print the result
	fact(5);
	return 0;
}

//TODO #2.3: add your recursive fib function from class
int fib(int n){

	if(n<= 0)
		return 0;
	else if (n==1)
		return 1;
	else 
		return (fib(n-1)+fib(n-2));
}

//TODO #2.4: add your recursive fact function from class
int fact(int n){
	if (n = 0)
		return 1;
	else
		return (n * fact(n-1));
}