//strcspn

#include<stdio.h>
#include<string.h>
void main()
{
    int result;
    char str1[100],str2[100];
    printf("\n Enter a string: ");
    gets(str1);
    printf("\n Enter the string to be search: ");
    gets(str2);
    result = strcspn(str1,str2);
    printf("\n Location : %d",result+1);
}
