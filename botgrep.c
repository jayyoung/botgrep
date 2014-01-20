#include <stdio.h>	
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int complexity_of_botgrep = rand()%10;
	int success_of_botgrep = 0;

	printf("--- preparing to grep bots ---\n");
	srand(time(NULL));

	sleep(rand()%3);
	
	for(int i = 0; i < complexity_of_botgrep; i++) {
		printf("Grepping...\n");
	}

	sleep(rand()%3);
	
		printf("*** Calculating graph-matching matrix...\n");

		sleep(rand()%4);

		printf("*** Determining machine learning paradigm\n");

		sleep(rand()%9);

		printf("*** Applying principle components analysis\n");
	
		sleep(rand()%8);

		printf("*** Evaluating model on itself\n");

		sleep(rand()%6);

		printf("*** Improving random walks...\n");

		sleep(rand()%12);		

		printf("Bots successfully grepped: %d\n",success_of_botgrep );
	
	
	return 0;
}
