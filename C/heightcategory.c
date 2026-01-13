#include <stdio.h> // Required for input/output functions like printf and scanf

#define NUM_SAMPLES 50 // Define the number of height samples to be taken

int main() {
    float heights[NUM_SAMPLES]; // Declare an array to store 50 float height values
    int i;                      // Loop counter

    printf("Welcome to the Height Categorization Program! 📏\n");
    printf("Please enter %d height values in feet (e.g., 5.8 for 5 feet 8 inches).\n", NUM_SAMPLES);
    printf("------------------------------------------------------------------\n");

    // Loop to get 50 height inputs from the user
    for (i = 0; i < NUM_SAMPLES; i++) {
        printf("Enter height #%d: ", i + 1);
        // Use while loop to ensure valid float input
        while (scanf("%f", &heights[i]) != 1) {
            printf("Invalid input. Please enter a numerical value for height #%d: ", i + 1);
            while (getchar() != '\n'); // Clear the invalid input from the buffer
        }
    }

    printf("\n--- Height Categories ---\n");
    printf("------------------------------------------------------------------\n");

    // Loop through the entered heights and categorize them
    for (i = 0; i < NUM_SAMPLES; i++) {
        printf("Height %.2f ft is categorized as: ", heights[i]);

        // Categorize the height based on predefined ranges
        if (heights[i] < 4.5) {
            printf("Very Short 👶\n"); // Heights typically below 4 feet 6 inches
        } else if (heights[i] >= 4.5 && heights[i] < 5.5) {
            printf("Short 🧑\n");      // Heights from 4 feet 6 inches up to 5 feet 6 inches
        } else if (heights[i] >= 5.5 && heights[i] < 6.0) {
            printf("Average 🧍\n");    // Heights from 5 feet 6 inches up to 6 feet 0 inches
        } else if (heights[i] >= 6.0 && heights[i] < 6.5) {
            printf("Tall 🕴️\n");       // Heights from 6 feet 0 inches up to 6 feet 6 inches
        } else {
            printf("Very Tall 🦒\n");  // Heights 6 feet 6 inches and above
        }
    }

    printf("\nProgram finished. Have a great day! \n");

    return 0;