#include <stdio.h>

int main() {
	FILE *fptr;
	char str[100];
	fptr = fopen("file.txt", "w");
	fgets(str, sizeof(str), stdin);
	fprintf(fptr, "%s", str);
	fclose(fptr);
	return 0;
}	
