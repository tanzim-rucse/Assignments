#include <stdio.h>

// Function to calculate average of three marks
float calculateAverage(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total / 3.0;
}

// Function to print grade based on average
void printGrade(char student[], float average) {
    if (average >= 80)
        printf("%-5s : Grade A, Average = %.2f\n", student, average);
    else if (average >= 60)
        printf("%-5s : Grade B, Average = %.2f\n", student, average);
    else if (average >= 40)
        printf("%-5s : Grade C, Average = %.2f\n", student, average);
    else
        printf("%-5s : Fail, Average = %.2f\n", student, average);
}

int main() {
    // Array of marks for each student (3 students, 3 subjects)
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    
    // Array of student names
    char students[3][10] = {"Ali", "Bob", "Cat"};

    int highestTotal = 0;  // To store highest total marks
    int topperIndex = 0;   // To store index of topper

    printf("----- Student Grades -----\n");

    // Calculate average, print grades, and find topper
    for (int i = 0; i < 3; i++) {
        float average = calculateAverage(marks[i], 3);  // Calculate average
        printGrade(students[i], average);               // Print grade

        // Calculate total marks for topper comparison
        int total = marks[i][0] + marks[i][1] + marks[i][2];
        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = i;
        }
    }

    // Print topper information
    printf("\n----- Topper -----\n");
    printf("%s with total marks = %d\n", students[topperIndex], highestTotal);

    return 0;
}
