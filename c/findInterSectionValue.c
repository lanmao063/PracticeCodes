#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);
int main()
{
    int nums1[MAX], nums2[MAX];
    int m=0, n=0;
    int temp;
    printf("Enter the elements of the first array:");
    while((temp=getchar())!=EOF && temp!='\n')
    {
        nums1[m++]=temp;
    }
    printf("Enter the elements of the second array:");
    while((temp=getchar())!=EOF && temp!='\n')
    {
        nums2[n++]=temp;
    }
    int returnSize[2]={0,0};
    int *result=findIntersectionValues(nums1,m-1,nums2,n-1,returnSize);
    for(int i=0;i<2;i++)
    {
        printf("%d ",result[i]);
    }
}
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int *result1=(int*)malloc(sizeof(int)*MAX);
    int *result2=(int*)malloc(sizeof(int)*MAX);
    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            {
                returnSize[0]++;
            }
        }
    }
    for(int i=0;i<nums2Size;i++)
    {
        for(int j=0;j<nums1Size;j++)
        {
            if(nums2[i]==nums1[j])
            {
                returnSize[1]++;
            }
        }
    }
    return returnSize;
}