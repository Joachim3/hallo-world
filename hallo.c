#include <stdio.h>

void new_feature(void)
{
	printf("new feature\n");
}

int main(int argc, char* argv[])
{
	printf("hallo world!\n");

	new_feature();

	return 0;
}
