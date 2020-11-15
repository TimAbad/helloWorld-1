#include <stdio.h>
//Version 1
int main(int argc, char *argv[]){
printf("Hello World\n");
printf("Learning C");

/*variable_module*/
//Assign value to variable
//argc = 10;
//print variable
//printf("value of argc : %d \n", argc);

//working with variables in c

/* variable definition: */
int a, b;
int c;
float f;

/* actual initialization */
a = 10;
b = 20;

c = a + b;

//We use printf() function with %d format specifier to display the value of an integer variable.
printf("value of c : %d \n", c);

printf("%d", c);

f = 70.0/3.0;
printf("value of f : %f \n", f);


/*End variable_module*/

/*array_module*/
/*io_module*/

return 0;
}
