main: main.c
	$(CC) main.c -o main -Wall -Wextra -pedantic -std=c99	

bubbleSort: bubbleSort.c
	$(CC) bubbleSort.c -o bubbleSort -O2 -Wall -Wextra -pedantic -std=c99