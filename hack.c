#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// =============================HackerRank 30 Days=================================

void day0()
{
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105]; 
    
    // Read a full line of input from stdin and save it to our variable, input_string.
    scanf("%[^\n]", input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n");
    
    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    printf("%s",input_string);
    return 0;
}

void day1()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int j ;
    double e =0;
    char st[105];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&j);
    scanf("%lf",&e);
    scanf("\n");
    scanf("%[^\n]%*c", st); 
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+j);
    printf("%.1lf\n",d+e);
    printf("%s%s",s,st);
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

}

void day3()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=100)
    {
    if(n%2!=0)
    {
        printf("Weird");
    }
    else if(n%2==0 && (n>=2 && n<=5))
    {
        printf("Not Weird");
    }
    else if(n%2==0 && (n>=6 && n<=20))
    {
        printf("Weird");
    }
    else if(n%2==0 && n>20)
    {
        printf("Not Weird");
    }
    }
    else {
    printf("Weird");
    }
}

int main()
{
    //day0();
    //day1();
    //day2();
    day3();
}
