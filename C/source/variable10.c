#include <stdio.h>

int main(void)
{
	int waterPrice = 198, milkPrice = 138;
	int waterNum = 1, milkNum = 2;
	int money = 1000;
	double tax = 1.05;
	
	/* 1000円で払ったお釣りを求める */
	int exchange = money - (int)(tax * ((waterPrice * waterNum) + (milkPrice * milkNum)));
	
	printf("お釣りは%5d円です。", exchange);
}
