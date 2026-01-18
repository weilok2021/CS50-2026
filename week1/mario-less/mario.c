#include <cs50.h>
#include <stdio.h>

void print_pyramid(int height);

int main(void) {
    int height;
    do {
        height = get_int("Height: ");
    }
    while(height <= 0);
    print_pyramid(height);
}

void print_pyramid(int height) {
    for (int i = 0; i < height; i++) {
        int num_spaces = height - (i + 1);
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
