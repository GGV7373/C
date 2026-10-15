#include <stdio.h>
#include <stdlib.h>

// Bubbel sort algoritme
void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if(array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Print array
void printArray(int array[], int size) {
    for(int i = 0; i < size; ++i){
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Use: %s <filename>\n", argv[0]);
        return 1;
    }
    
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        perror("Can not oppen file");
        return 1; 
    }

    int data[1000];
    int size = 0;

    while (size < 1000 && fscanf(fp, "%d", &data[size]) == 1) {
        size++;
    }
    fclose(fp);

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order: \n");
    printArray(data, size);

    return 0;
}
