#include <stdio.h>

int main() {
    int scores[3][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };

    float avg;
    int i, j, sum;

    for (i = 0; i < 3; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            sum += scores[i][j];
        }
        avg = sum / 4.0;  
        printf("Average score for Class %d = %.2f\n", i + 1, avg);
    }

    return 0;
}

