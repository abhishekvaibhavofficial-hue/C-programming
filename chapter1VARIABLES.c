/*
#include <stdio.h>
int main (){
    int a; //(varaiable devlaration). a k naam se variable bnaya.
    a = 6; // value given to variable.
    printf("%d", a); // %d for intiger , so it is as a int. give a
    return 0;
}

#include <stdio.h>
int main (){
    int a;
    a = 6;
    printf("The output of the programe is %d", a) ; //%d is for intiger (as an integer gives a)  //, is use to saperate both
    return 0;
}
VARIABLES = Variables are containers for storing data values, like numbers and characters.
there are different types of variables 
1. int is use for giving integer value, whole no., ex- 193 or -193
2. float stores decimal or floating numbers.
3. char is use for giving a charecter value to variables.


To create a variable , first define its type and then assign its value.

For example:
#include <stdio.h>
int main(){
    int mynum = 6;   // here the value 6 is given to variable "mynum" , here we told computer that "a" is a integer variable and its value is assigned as 6
    printf("value is %d",a);
}

#include <stdio.h>
int main(){
    int mynum ;   // here variable is declared as an integer and the value will be provided in other line
    a = 7;    // here value of variable "mynum" is given as 7.
    printf("value is %d",a);
}



FORMAT SPECIFIERS:
It is besically a place holder for the variable value, A format specifiers starts with "%". Surrounded by "" in printf().
for int use "%d".
for char use "%c".
for float use "%f"

example:
#include <stdio.h>
int main (){
    //create variables
    int a = 6; // integer
    char b = 'T';   // char can take a value at a time.
    float c = 6.7; //decimal value 
    printf ("the values are %d\n ", a ); // \n here is use for changing the output lines
    printf("the char value is %c\n ", b);
    printf("the float value is %f\n ", c); 
    return 0;
}

To combine both text and a variable, separate them with a comma inside the printf() function:
Example
int myNum = 15;
printf("My favorite number is: %d", myNum);


To print different types in a single printf() function, you can use the following:
Example
int myNum = 15;
char myLetter = 'D';
printf("My number is %d and my letter is %c", myNum, myLetter);

we use "\n" for changing para in output statements.

If you assign a new value to an existing variable, it will overwrite the previous value:
Example :
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
Example :
#include <stdio.h>
int main(){
    int a = 6 ;
    a = 7;
    printf("number is %d",a);
    return 0;
}

You can also assign the value of one variable to another Or copy values to empty variables:
Example : 
#include <stdio.h>
int main(){
    int a =8;
    int b;
    int a = b;
    printf("%d", b);
    return 0;
}

SUM : 

#include <stdio.h>
int main(){
    int a = 6;
    int b = 9;
    int sum = (a + b);
    printf("%d",sum);
    return 0;
}

FORMAT SPECIFIERS:
It is besically a place holder for the variable value, A format specifiers starts with "%". Surrounded by "" in printf().
for int use "%d".
for char use "%c".
for float use "%f"

example:
#include <stdio.h>
int main (){
    //create variables
    int a = 6; // integer
    char b = 'T';   // char can take a value at a time.
    float c = 6.7; //decimal value 
    printf ("the values are %d\n ", a ); // \n here is use for changing the output lines
    printf("the char value is %c\n ", b);
    printf("the float value is %f\n ", c); 
    return 0;
}


There are three of data types , they are int, float, char and there memory are:-
int - 4 bytes/32 bits
char - 1 bytes/8 bits
float- 4 bytes/32 bits

types of constants:
1. integer con. -  1,6,7,9
2. real con. - 32.6,2.5,0.7
3. charecter con. - 'a','$','@'(must be enclosed between singel inverted coma)

KEYWORDS in C :-
These are word reseved for c , we cant make variables from a keyword.
ther are 32 keywords in c and they are
auto
break
case 
char
const 
continue
default
do
double
long
return
register
short
signed
sizeof
static
int
else
enum
extern
float
for
goto
if
struct
switch
typedef
union
unsigned
void
volatile
while



"&" this is called mpercent 
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a); //mpercent or & is address of a , //scanf is taking the input integer value given by end user.
    printf("the number choosen is %d", a); //
    return 0;
}
so, in order to take input from user use scanf function.
& it means value supplied should be copied to the address of this variable.

Escape sequence charecter
\n - new line charecter
\t - tap orspace 
\" - double or sigle cout charecter for "
\\ - for \

all these are char values */



