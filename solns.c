/* Enter your solutions in this file */
#include <stdio.h>

int max(int nums[],int f) 
{
    int maximum=-2147483647;
    for (int i=0;i<=f-1;i++)
    {
        if (nums[i]>maximum)
        {
            maximum=nums[i];
    
        }

    }
    return maximum;

}

int min(int nums[],int g)

{
    int min=2147483647;
    for(int i=0;i<=g-1;i++)
    {
        if (nums[i]<min)
        {
            min=nums[i];

        }

    }
    return min;
}


float average (int nums[],int size)
{
    float sum=0;
    for (int i=0;i<=size-1;i++)
{
    sum=sum+nums[i];

}
return sum/size;

}


int mode(int nums[],int size)
{
    int maximum=max(nums,size);
    int counts[maximum+1];
    for(int i=0;i<=maximum;i++)
{
    counts[i]=0;

}
    for (int i=0;i<=size-1;i++)
    {
        counts[nums[i]]=counts[nums[i]]+1;

    }
    int maxi=0,maxindex=0;
    for (int i=0;i<=maximum;i++)
    {
        if (counts[i]>maxi)
        {
            maxi=counts[i];
            maxindex=i;
        }
    }
    return maxindex;
}


int factors(int num,int ans[])
{
    int j=0;
    for(int i=2; num>1; i++){
        while(num > 1 && num % i == 0) {
            num=num/i;
            ans[j++] = i;
        }
    }
    printf("\n%d", j);
    return j;
}