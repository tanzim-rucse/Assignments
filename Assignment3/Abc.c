#include <stdio.h>

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    
    char students[3][10] = {"Ali", "Bob", "Cat"};
    int i, j, total;
    float average;

    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        average = total / 3.0;
        if (average >= 80)
            printf("%s Grade A avg=%.2f\n", students[i], average);
        else if (average >= 60)
            printf("%s Grade B avg=%.2f\n", students[i], average);
        else if (average >= 40)
            printf("%s Grade C avg=%.2f\n", students[i], average);
        else
            printf("%s Fail avg=%.2f\n", students[i], average);
    }

    int highestTotal = 0, topperIndex = 0;
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        if (total > highestTotal) {
            highestTotal = total;
            topperIndex = i;
        }
    }

    printf("Topper: %s with total %d\n", students[topperIndex], highestTotal);
    return 0;
}
