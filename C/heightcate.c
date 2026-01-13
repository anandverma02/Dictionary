#include <stdio.h>  // Required for input/output functions like printf and scanf
#include <stdlib.h> // Required for qsort function (for sorting)

#define NUM_SAMPLES 50 // Define the total number of height samples to be taken
#define CATEGORY_SIZE 10 // Define how many entries each category should have

// Comparison function for qsort to sort float values in ascending order
// This function is crucial for qsort to know how to compare two float numbers.
int compareFloats(const void *a, const void *b) {
    float fa = *(const float*)a; // Dereference pointer 'a' to get the float value
    float fb = *(const float*)b; // Dereference pointer 'b' to get the float value

    // Return -1 if fa is less than fb, 1 if fa is greater than fb, and 0 if they are equal.
    // This logic ensures ascending order.
    return (fa > fb) - (fa < fb);
}

int main() {
    float heights[NUM_SAMPLES]; // Declare an array to store 50 float height values
    int i;                      // Loop counter for iterations

    // Define the names for the 5 height categories.
    // These names will be assigned based on the sorted order of heights.
    char *category_names[] = {
        "Very Short ",
        "Short ",
        "Average ",
        "Tall ",
        "Very Tall "
    };

    printf("Please enter %d height values in feet (e.g., 5.8 for 5 feet 8 inches).\n", NUM_SAMPLES);

    // Loop to get 50 height inputs from the user.
    // Includes input validation to ensure only numerical values are accepted.
    for (i = 0; i < NUM_SAMPLES; i++) {
        printf("Enter height #%d: ", i + 1);
        // Use a while loop to ensure valid float input.
        // scanf returns 1 if it successfully reads a float, otherwise 0.
        while (scanf("%f", &heights[i]) != 1) {
            printf("Invalid input. Please enter a numerical value for height #%d: ", i + 1);
            while (getchar() != '\n'); // Clear the invalid input from the buffer to prevent infinite loops
        }
    }

    // Sort the heights array in ascending order using qsort.
    // qsort parameters:
    // 1. base: Pointer to the first element of the array to be sorted (heights).
    // 2. num_elements: Number of elements in the array (NUM_SAMPLES).
    // 3. size_of_each_element: Size of each element in bytes (sizeof(float)).
    // 4. comparison_function: A pointer to the function that compares two elements (compareFloats).
    qsort(heights, NUM_SAMPLES, sizeof(float), compareFloats);

    printf("\n Height Categories \n");
    printf("------------------------------------------------------------------\n");

    // Loop through the sorted heights and categorize them.
    // The categorization is now based on the index in the sorted array,
    // ensuring an even distribution of 10 entries per category.
    for (i = 0; i < NUM_SAMPLES; i++) {
        // Calculate the category index:
        // For i = 0-9, category_index will be 0 (Very Short)
        // For i = 10-19, category_index will be 1 (Short)
        // And so on, up to i = 40-49 for category 4 (Very Tall).
        int category_index = i / CATEGORY_SIZE;

        printf("Height %.2f ft is categorized as: %s\n", heights[i], category_names[category_index]);
    }

    return 0;
}
