#include <stdio.h>
//Version 1.0

/* function declaration */
int max(int num1, int num2);

int main(int argc, char *argv[]){
printf("Hello World\n");
printf("Learning C\n");

/* local variable definition */
int a = 100;
int b = 200;
int ret;

/* calling a function to get max value */
ret = max(a, b);

printf( "Max value is : %d\n", ret );

/*variable_module*/
//Assign value to variable
//argc = 10;
//print variable
//printf("value of argc : %d \n", argc);

//working with variables in c

/* variable definition: */
//int a, b;
//int c;
//float f;

/* actual initialization */
//a = 10;
//b = 20;

//c = a + b;

//We use printf() function with %d format specifier to display the value of an integer variable.
//printf("value of c : %d \n", c);

//printf("%d", c);

//f = 70.0/3.0;
//printf("value of f : %f \n", f);

/*End variable_module*/

/*array_module*/
/*io_module*/

return 0;

}

/* function returning the max between two numbers */
int max(int num1, int num2) {

	/* local variable declaration */
	int result;

	if (num1 > num2)
	   result = num1;
	else
	   result = num2;

	return result;
}
