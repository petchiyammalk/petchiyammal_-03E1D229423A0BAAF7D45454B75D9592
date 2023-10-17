#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to perform a linear search for a product in the list
int* linear_search_product(char** products, int size, const char* target_product, int* result_size) {
    int* indices = (int*)malloc(size * sizeof(int)); // Allocate memory for indices
    int count = 0;

    if (indices == NULL) {
        perror("Memory allocation failed");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        if (strcmp(products[i], target_product) == 0) {
            indices[count] = i;
            count++;
        }
    }

    *result_size = count; // Update the result size
    return indices;
}

int main() {
    char* product_names[] = {"Apple", "Banana", "Orange", "Apple", "Grapes", "Apple"};
    int list_size = sizeof(product_names) / sizeof(product_names[0]);
    const char* target = "Apple";

    int result_size;
    int* indices = linear_search_product(product_names, list_size, target, &result_size);

    if (result_size > 0) {
        printf("Target product found at the following indices:\n");
        for (int i = 0; i < result_size; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
    } else {
        printf("Target product not found.\n");
    }

    free(indices); // Don't forget to free the allocated memory

    return 0;
}
