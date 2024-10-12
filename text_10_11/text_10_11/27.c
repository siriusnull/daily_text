#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"leetcode.h"

int removeElement(int* nums, int numsSize, int val) 
{
	int fast = 0;
	int slow = 0;
	while (fast < numsSize)
	{
		if (nums[fast] != val)
		{
			nums[slow] = nums[fast];
			slow++;
		}
			fast++;
	}
	return slow;
}