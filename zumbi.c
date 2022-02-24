#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    	pid_t x;
	x = fork();

	if (x != 0) {
		sleep(15);
		printf("o pai dormiu durante 5s enquanto o filho continuou rodando, portanto esse foi um processo zumbi\n");
	}
	
  
}