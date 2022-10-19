#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int glob = 6;

int main(int argc, char *argv[]) {
	int var;
	pid_t pid;
	
	printf("Before fork");
	var = 88;
	
	if ((pid = fork()) < 0) {
		printf("Fork ERROR");
	} else if (pid ==0) {
		glob++;
		var++;
	} else {
		printf("\nParent");
		sleep(2);
	}
	
	printf("\nPid: %d\nGlob: %d\nvar: %d\n\n", getpid(), glob, var);
}