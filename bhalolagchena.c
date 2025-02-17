/* WAP to read string and check for palindrome without using string related what*/
#include <stdio.h>
int main()
{
    char arr[10];
    char rev[10];
    printf("enter a string : ");
    scanf("%s",arr);
    int i,flag=0,l=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]!='\0')
        l++;
        else
        break;
    }
    printf("%d \n",l);
    for(i=0;i<l;i++)
    {
        rev[i]=arr[l-i-1];
    }
    for(i=0;i<l;i++)
    {
        if(arr[i]!=rev[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("it is not palin");
    }
    else 
    {
         printf("it is palin");
    }
}