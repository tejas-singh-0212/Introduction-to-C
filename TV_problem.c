#include <stdio.h>
#include<stdbool.h>
/*
the 1's refer to the boundary of tv, 2's refer to the screen and 3 refer to the power button
calculate the dimensions of TV
1 1 1 1 1 1 1 1 1
1 2 2 2 2 2 2 2 1
1 2 2 2 2 2 2 2 1
1 2 2 2 2 2 2 2 1
1 1 1 1 1 1 1 1 3
 above sample pattern must return height = 5, width = 9
*/
void main() {
    int num;
    int width = 0;
    int total_count = 0;
    bool found_width = false; // flag to check if we've determined width
    // Input numbers until we encounter 3
    while (1) {
        scanf("%d", &num);
        total_count++;
        // Check if we've found the width (first sequence of 1s at the beginning)
        if (!found_width) {
            if (num == 1) {
                width++;    // will also count first 1 of nest row
            } else {
                // We encountered a non-1, so we've found the width
                found_width = true;
            }
        }
        // If we encounter 3, we're done
        if (num == 3) {
            break;
        }
    }
    // Calculate height
    int height = total_count / (width-1);
    // Output the result
    printf("%d %d\n", (width-1), height);
    return;
}