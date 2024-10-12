#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"leetcode.h"

int searchInsert(int* nums, int numsSize, int target) 
{
    int left = 0;
    int right = numsSize - 1;
    while (left <= right) 
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target) 
        {
            return mid;
        }
        else if (nums[mid] < target) 
        {
            left = mid + 1;
        }
        else if (nums[mid] > target) 
        {
            right = mid - 1;
        }
    }
    return left;
}