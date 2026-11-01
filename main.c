#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    
    int *i = malloc(sizeof(int));
    if (i == NULL) {
        fprintf(stderr, "Can't fine the memmory\n"); 
        return 1;
    }

    *i= 23;
    printf("%d\n", *i);
    *i += 1;
    printf("%d\n", *i); 
    
    free(i);
    printf("\nYes it works \n");
    
    return 0;
}
