#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    int i = 0;
    bool done = false;
    while (!done) {

        printf("hello, world\n"); /* this just prints hello, world evry line*/   
        i++;
        done = (i == 10);
    }

    int y;
    int *py = &y;

    y = 123;

    printf("%d\n", y);
    printf("%p\n", (void *)py);
    
    printf("\nYes it works \n");
    
    return 0;
}
