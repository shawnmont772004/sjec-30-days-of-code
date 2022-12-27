#include <stdio.h>

int main()
{
    //hello sceptians lets solve day8 problem
    
    int min,max,i=0,j=0,k=0,a[50],b[50];
    
    //first we take an input range of minimum and maximum value
    printf("enter the min:\n");
    scanf("%d",&min);
    printf("enter the max:\n");
    scanf("%d",&max);
    
    //now we figure out the number of prime numbers in the given range
    for(i=min;i<max;i++)
    {
       int count=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           {
               count++;
           }
        }
        if(count==2)
        {
            a[k]=i;
            k++;
        }
    }
    
    //here we count the numbers between 2 consecutive prime numbers
    for(i=0;i<k;i++)
    {
        int secondcount=0;
        for(j=a[i];j<a[i+1];j++)
        {
            b[i]=secondcount++;
        }
    }
    
    printf("\n");
    
    //conclusion and we display  the count of numbers 
    for(i=0;i<k-1;i++)
    {
        printf("%d - %d: %d\n",a[i],a[i+1],b[i]);
    }

    return 0;
}
