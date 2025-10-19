#include <stdio.h>

float calculateAverage(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total / 3.0;
}

void printGrade(char student[], float average) {
    if (average >= 80)
        printf("%s Grade A avg=%.2f\n", student, average);
    else if (average >= 60)
        printf("%s Grade B avg=%.2f\n", student, average);
    else if (average >= 40)
        printf("%s Grade C avg=%.2f\n", student, average);
    else
        printf("%s Fail avg=%.2f\n", student, average);
}

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    
    char students[3][10] = {"Ali", "Bob", "Cat"};
    int highestTotal = 0, topperIndex = 0;

    for (int i = 0; i < 3; i++) {
        float average = calculateAverage(marks[i], 3);
        printGrade(students[i], average);
        int total = marks[i][0] + marks[i][1] + marks[i][2];
        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = i;
        }
    }

    printf("Topper: %s with total %d\n", students[topperIndex], highestTotal);
    return 0;
}
