#include<stdio.h>
int main()
{
	wish();
	printf("Control comes from the wish function\n");
	wish();
	return 0;
}
void wish()
{
	printf("Hello World\n");
}
