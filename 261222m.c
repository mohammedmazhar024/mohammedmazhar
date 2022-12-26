/*

// basic structure program

#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person1 {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}


*/


/*
// basic program on function pointer


#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main()
{
	// fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun;

	// The above line is equivalent of following two
	//void (*fun_ptr)(int);
	//fun_ptr = &fun;


	// Invoking fun() using fun_ptr
	(*fun_ptr)(10);

	return 0;
}

*/


/*
// binary to decimal

#include <stdio.h>
#include <conio.h>
void main()
{
    // declaration of variables
    int num, binary_num, decimal_num = 0, base = 1, rem;
    printf (" Enter a binary number with the combination of 0s and 1s \n");
    scanf (" %d", &num); // accept the binary number (0s and 1s)

    binary_num = num; // assign the binary number to the binary_num variable


    while ( num > 0)
    {
        rem = num % 10;
        //  divide the binary number by 10 and store the remainder in rem variable.
        decimal_num = decimal_num + rem * base;
        num = num / 10; // divide the number with quotient
        base = base * 2;
    }

    printf ( " The binary number is %d \t", binary_num); // print the binary number
    printf (" \n The decimal number is %d \t", decimal_num); // print the decimal
    getch();
}


*/

/*
// decimal to binary

#include<stdio.h>
#include<stdlib.h>
int main(){
int a[10],n,i;
system ("cls");
printf("Enter the number to convert: ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nBinary of Given Number is=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;
}

*/

