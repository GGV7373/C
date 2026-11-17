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
        perror("Can not open file");
        return 1; 
    }

    int capacity = 16;
    int size = 0;
    int *data = malloc(capacity * sizeof(int));
    if (data == NULL) {
        perror("malloc failed");
        fclose(fp);
        return 1;
    }

    int value;
    while (fscanf(fp, "%d", &value) == 1) {
        if (size == capacity) {
            capacity *= 2;
            int *tmp = realloc(data, capacity * sizeof(int));
            if (tmp == NULL) {
                perror("realloc failed");
                free(data);
                fclose(fp);
                return 1;
            }
            data = tmp;
        }
        data[size++] = value;
    }
    fclose(fp);

    bubbleSort(data, size);

    printf("Sorted Array in Ascending Order: \n");
    printArray(data, size);

    free(data);
    return 0;
}
