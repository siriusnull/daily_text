#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include"10_14.h"

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	int tmp[6] = { 0 };
	int i1 = 0;
	int i2 = 0;
	int i = 0;
	for (i = 0; i < nums1Size; i++)
	{
		if (m && n)
		{
			if (nums1[i1] <= nums2[i2])
			{
				tmp[i] = nums1[i1];
				i1++;
				m--;
			}
			else
			{
				tmp[i] = nums2[i2];
				i2++;
				n--;
			}
		}
		else if (m == 0)
		{
			while (i < nums1Size)
			{
				tmp[i++] = nums2[i2++];

			}

		}
		else if (n == 0)
		{
			while (i < nums1Size)
			{
				tmp[i] = nums1[i1];
				i++;
				i1++;

			}
		}

	}
	for (i = 0; i < nums1Size; i++)
	{
		nums1[i] = tmp[i];
	}

}