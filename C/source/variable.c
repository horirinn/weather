#include <stdio.h>

int main(void)
{
	/* 変数宣言の部分 */
	int left;
	int right;
	/* 代入の部分 */
	left = 10;
	right = 3;
	/* 表示の部分 */
	printf("%d\n", left + right);
	printf("%d\n", left - right);
	printf("%d\n", left * right);
	printf("%d\n", left / right);
	printf("%d\n", left % right);
	return 0;
}
