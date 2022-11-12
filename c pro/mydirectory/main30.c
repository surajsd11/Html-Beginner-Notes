#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets (str1);
    gets (str2);
    char str3[100];
    puts(strcpy (str3,strcat(strcat(str1, "is afriend of"),str2)));
    puts(str3);
    return 0;
}
