﻿#include <stdio.h>
int main()
{
	int i, j;
	scanf("%d %d", &i, &j);
	printf("%d", (i&&!j)||(!i&&j));
}
