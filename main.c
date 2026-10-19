#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int i = 0;
    bool done = false;
    while (!done) {

        printf("hello, world");
        i++;
        done = (i == 10);
    }


    printf("Yes it works \n");
    
    return 0;
}
