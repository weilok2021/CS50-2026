#include <cs50.h>
#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        int num_spaces = 5 - (i+1);
        while (num_spaces != 0) {
            printf(" ");
            num_spaces--;
        }

        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
}
