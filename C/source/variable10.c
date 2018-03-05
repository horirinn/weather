#include <stdio.h>

int main(void)
{
	int waterPrice = 198, milkPrice = 138;
	int waterNum = 1, milkNum = 2;
	int money = 1000;
	double tax = 1.05;
	
	/* 1000â~Ç≈ï•Ç¡ÇΩÇ®íﬁÇËÇãÅÇﬂÇÈ */
	int exchange = money - (int)(tax * ((waterPrice * waterNum) + (milkPrice * milkNum)));
	
	printf("Ç®íﬁÇËÇÕ%5dâ~Ç≈Ç∑ÅB", exchange);
}
