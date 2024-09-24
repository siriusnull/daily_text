#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>

//1.��ָ�룬���ַ�
//2.+-
//3.�ո�
//4.��ĸ
//5.Խ��
enum statu
{
	INVALID,
	VALID
}sta = VALID;
int my_atio(char *str)
{
	//null pointer
	assert(str);


	//null str
	if (*str == '\0')
	{
		sta = INVALID;
		return 0;
	}


	//�հ�
	while (isspace(*str))//�հ׷��ط�0
	{
		str++;//�����հ�
	}


	//����+-
	int flag = 1;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if(*str=='-')
	{
		flag = -1;
		str++;
	}

	//ת��
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0');
			str++;
			if (ret<INT_MIN || ret>INT_MAX)
			{
				sta = INVALID;
				return 0;
			}
			
	    }
		else
		{
			sta = INVALID;
			return 0;
		}	
	}
	
	if (sta == VALID)
	{
		return flag * (int)ret;
	}
}

int main()
{
	char arr[10] = { "32473" };
	int ret = my_atio(arr);
	if (sta==VALID)
	{
		printf("valid: %d\n",ret);
	}
	else if(sta==INVALID)
	{
		printf("invalid: %d\n", ret);
	}

	return 0;
}