#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='0'||c=='1')
    {
        printf("Given character is digit");
    }
    else
    {
        printf("Given character is not digit");
    }
}
