#include <stdio.h>
#define DIM_PIT 10

int main() {
    int r, c, el;
    printf("Multiplication table of: %d x %d.\n", DIM_PIT, DIM_PIT);
    printf("    ");
    for (c = 1; c <= DIM_PIT; c++) {
            printf("%4d ", c);
    }
    printf("\n");
    printf("----");
    for (c = 1; c <= DIM_PIT; c++) {
            printf("-----");
    }
    printf("\n");
    for (r = 1; r <= DIM_PIT; r++) {
        printf("%3d|", r);
        for (c = 1; c <= DIM_PIT; c++) {
            el = r * c;            
            printf("%4d", el);                     
        }
        printf("\n");        
    }
	return 0;
}
