#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


int beeps = 0;

/** SIGALRM handler*/
void handler(int sig){
	printf("BEEP\n");

	if (++beeps <= 5) {
		alarm(10);
	} else {
		printf("BOOM!\n");
		exit(0);
	}
}

void main() {
	signal(SIGALRM, handler);
	alarm(10);
	while(1) {}
}
