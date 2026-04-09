#include <stdio.h>
/*
You’re given a 2D grid of integer elevations representing a terrain map. A cell is called a peak if its value is 
strictly greater than all of its adjacent neighbors (up to 8: north, south, east, west, and the four diagonals).
*/
#define MAXN 100
#define MAXM 100
int N, M;
int grid[MAXN][MAXM];

int is_peak(int r, int c) {
    // defining the relative positions of the 8 neighbors (North, South, East, West, and the 4 diagonals).
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    // iterating through each neighbor
    for (int i = 0; i < 8; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
            // if any neighbor is greater than or equal to -> not peak
            if (grid[nr][nc] >= grid[r][c]) {
                return 0;
            }
        }
    }return 1;
}

int main() {
    if (scanf("%d %d", &N, &M) != 2) {
        return 1;
    }
    //taking the elements of the grid as input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (scanf("%d", &grid[i][j]) != 1) {
                return 1;
            }
        }
    }
    //arrays to store peak coordinates, taking the maximum size
    int peak_r[MAXN * MAXM];
    int peak_c[MAXN * MAXM];
    int peak_count = 0;
    //iterating over every element in the grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (is_peak(i, j)) {
                //storing the coordinates of peak
                peak_r[peak_count] = i;
                peak_c[peak_count] = j;
                peak_count++;
            }
        }
    }
    //printing the peak count
    printf("%d\n", peak_count);
    //printing all the coordinates of all the peaks found
    for (int i = 0; i < peak_count; i++) {
        printf("%d %d\n", peak_r[i], peak_c[i]);
    }
    return 0;
}