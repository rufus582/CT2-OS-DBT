#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int glob = 10;

int main(int argc, char *argv[]) {
	int var = 101;
	pid_t pid;
	
	printf("Befor vfork");
	
	if ((pid = vfork())<0) {
		printf("vFork ERROR");
	} else if (pid ==0) {
		glob++;
		var++;
		exit(0);
	}
	
	printf("\nPid: %d\nGlob: %d\nvar: %d\n\n", getpid(), glob, var);
}