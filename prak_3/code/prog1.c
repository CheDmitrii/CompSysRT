#include <stdio.h>

int main() {
	char text[100];
	printf("Enter your data:\n");
	fgets(text, sizeof(text), stdin);
	printf("Your text is:\n %s", text);
	return 0;
}
