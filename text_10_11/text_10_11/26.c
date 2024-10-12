#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"leetcode.h"
//双指针(对数组原地修改，所以要两个下标),快指针遍历找下一个元素，慢指针记录下一个元素下标
int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize == 1)
	{
		return 1;
	}
	int fast = 1;
	int slow = 1;
	while (fast < numsSize)
	{
		if (nums[fast] != nums[fast - 1])
		{
			nums[slow] = nums[fast];
			slow++;
		}
		fast++;
	}
	return slow;
}



