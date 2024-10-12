#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include"leetcode.h"

int main()
{
	int arr[4] = { 1,3,5,6};
	int ret = 0;

	//ret = removeDuplicates(arr, 10);

   // ret = removeElement(arr,10,5);

	ret = searchInsert(arr, 4, 7);
	printf("%d\n", ret);
	return 0;
}