#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to update cell values based on adjacent mines
void updateCell(char grid[][MAX_COLS], int rows, int cols) {
    int i, j, count;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            count = 0;
            // Check adjacent cells for mines
            if (grid[i][j] != '*') {
               
                if (i > 0 && grid[i - 1][j] == '*')
                    count++;
                
                if (i < rows - 1 && grid[i + 1][j] == '*')
                    count++;
                
                if (j > 0 && grid[i][j - 1] == '*')
                    count++;
                
                if (j < cols - 1 && grid[i][j + 1] == '*')
                    count++;
              
                if (i > 0 && j > 0 && grid[i - 1][j - 1] == '*')
                    count++;
                
                if (i > 0 && j < cols - 1 && grid[i - 1][j + 1] == '*')
                    count++;
                
                if (i < rows - 1 && j > 0 && grid[i + 1][j - 1] == '*')
                    count++;
                
                if (i < rows - 1 && j < cols - 1 && grid[i + 1][j + 1] == '*')
                    count++;
                
                // Update cell value with count of adjacent mines
                if (count > 0)
                    grid[i][j] = count + '0';
                else
                    grid[i][j] = '-';
            }
        }
    }
}

int main() {
    int rows, cols;
    int i, j;
    
    printf("Enter the range of the grid as row x column (max 10x10): ");
    scanf("%d %d", &rows, &cols);
    
    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Grid size exceeds maximum limit.\n");
        return 1;
    }
    
    char grid[MAX_ROWS][MAX_COLS];
    
    printf("Enter grid values as '*' for mine and '-' for empty cell:\n");
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf(" %c", &grid[i][j]);
        }
    }
    
    printf("Initial Grid:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf(" %c ", grid[i][j]);
        }
        printf("\n");
    }
    
    updateCell(grid, rows, cols);
    
    printf("Updated Grid:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf(" %c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}

