#include <stdio.h>

long int getFileSize(char fName[]) {
	FILE *f = fopen(fName, "r");
	if (f == NULL) {
		printf("File not found");
		return -1;
	}
	
	fseek(f, 0L, SEEK_END);
	long int res = ftell(f);
	fclose(f);
	
	return res;
}

int main(int argc, char *argv[]) {
	char fName[] = {"Student.class"};
	long int size = getFileSize(fName);
	
	if (size != -1) {
		printf("File size: %ld bytes", size);
	}
	
}