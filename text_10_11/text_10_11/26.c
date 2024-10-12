#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include"leetcode.h"
//˫ָ��(������ԭ���޸ģ�����Ҫ�����±�),��ָ���������һ��Ԫ�أ���ָ���¼��һ��Ԫ���±�
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



