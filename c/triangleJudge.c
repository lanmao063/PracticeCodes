#include <stdio.h>
char *triangleJudge(int nums[], int size);
int main()
{
    int nums[3];
    printf("Enter the three sides of the triangle: ");
    for(int i=0; i<3; i++)
    {
        scanf("%d", &nums[i]);
    }
    char *result = triangleJudge(nums,sizeof(nums));
    printf("%s",result);
}
char *triangleJudge(int nums[], int size)
{
    if(!(nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0]))
    {
        return "none";
    }
    else if(nums[0]==nums[1] && nums[1]==nums[2])
    {
        return "equilateral";
    }
    else if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2])
    {
        return "isosceles";
    }
    else
    {
        return "scalene";
    }
}