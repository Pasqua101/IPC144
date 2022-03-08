#include<stdio.h>
#include<ctype.h>
#include<string.h> //includes strlen() which returns
//the index of the null byte of the C string passed in as an argument
#define SZ 31

int main(void)
{
    char entered[] = "coursE 101 logiC programminG";//"Programming Logic 101 Course"; 
    char result[SZ] = { 0 };
    int i, j;
    for (j = i = strlen(entered); i > -1; i--, j--) //i and j both equal 28
    {
        if (isdigit(entered[i])) //Will print n out 3 times
        {
            result[j] = 'n';
        }
        else if (isspace(entered[i])) //Prints s out 3 times, based on number of spaces
        {
            result[j] = 's';
        }
        else if (islower(entered[i]))
        {
            result[j] = 'l';

        }
        else if(isupper(entered[i]))
        {
            result[j] = 'U';
        }
    }
    printf("%s\n", result); //Output should be lllllUsnnnsllllUsllllllllllU not xQQQQQQQQQQWxQQQQWbbbWxQQQQQQ
                            //Already have 3 n's and s's required, just not in proper order. Until when changes were made to the string
    return 0;
}
