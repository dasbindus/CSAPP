#include <stdio.h>
#include <unistd.h>

void main(){
	pid_t pid = fork();
	if (pid == 0) {
		printf("Hello from child\n");
	} else {
		printf("Hello from parent\n");
	}
}
