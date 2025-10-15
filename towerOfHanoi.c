#include <stdio.h>
#include <math.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    
    // Taking user input
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Number of disks must be at least 1!\n");
        return 1;
    }
    
    printf("\nSolution for Tower of Hanoi:\n\n");
    
    // A = source, C = destination, B = auxiliary
    towerOfHanoi(n, 'A', 'C', 'B');
    
    // Calculate total moves: 2^n - 1
    int totalMoves = pow(2, n) - 1;
    printf("\nTotal moves: %d\n", totalMoves);
    
    return 0;
}
