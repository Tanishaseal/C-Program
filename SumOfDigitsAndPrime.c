/* Program 40
Date: 22-04-2024
Name: Tanisha Seal
Topic: Write a C program, to take few inputs like 1256, 346, 5068, 276. Then do the sum of digits of these given numbers. 
Then check if the sum is prime number, then do the sum of the given prime numbers.
1st no. 1256= 1+2+5+6 = 14 = even but not prime.
2nd no. 346 = 3+4+6 = 13 = prime number
3rd no. 5068 = 5+0+6+8=19 = prime number
4th no. 276=2+7+6 = 15 odd but not prime. Sum of inputs = 346  + 5068 = 5414. 
*/
#include <stdio.h>

int isPrime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}

void main()
{
    int arr[]={1256, 346, 5068, 276};
    int i,total=0,d=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++)
    {
        int num=arr[i];
        int copy=num;
        int sum=0;
        while(copy>0)
        {
            d=copy%10;
            sum+=d;
            copy=copy/10;
        }
        if(isPrime(sum))
        total+=arr[i];
    }
    printf(" the actual value is : %d ", total);
}