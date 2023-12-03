//#include <stdlib.h>
//#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
//#include <sys/wait.h>


#define MAX_COUNT 200

void ChildProcess(void) {
    for (int i = 0; i < MAX_COUNT; ++i) {
        printf("   This line is from child, value = %d\n", i);
    }
}

void ParentProcess(void ) {
    for (int i = 0; i < MAX_COUNT; ++i) {
        printf("   This line is from parent, value = %d\n", i);
    }
}

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        ChildProcess();
    } else {
        ParentProcess();
    }
}