#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

void find(int arr[], int* pd1, int* pd2,int sz)
{
	int i = 0;
	int ret = 0;
	//��������׼����֤һ��ֻ��һ��dog
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i < sz; i++)
	{
		//��ĩβΪ0��һ��
		if ((arr[i] >> 1) & 1 == 1)
		{
		*pd1 ^= arr[i];
		}
		else
		{
			*pd2 ^= arr[i];
		}
	}
}