#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
	struct dirent *files;
	DIR *dir = opendir("./");
	
	if (dir == NULL) {
		printf("ERROR");
		return 0;
	}
	
	while ((files = readdir(dir)) != NULL) {
		printf("%s\n", files->d_name);
	}
	
	closedir(dir);
}