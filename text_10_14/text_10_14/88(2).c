#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int end1 = m - 1;
	int end2 = n - 1;
	int end = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] >= nums2[end2])
		{
			nums1[end--] = nums1[end1--];
		}
		else
		{
			nums1[end--] = nums2[end2--];
		}
	}
	if (end1 <= 0)
	{
		while (end2 >= 0)
		{
			nums1[end--] = nums2[end2--];
		}
	}
}