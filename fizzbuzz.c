#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, count;
    
    if(argc < 2) {
        printf("You require an argument.\n");
        return 1;
    }
    count = atoi(argv[1]);
    
    for(i = 1; i <= count; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz\n");
        } else if(i % 3 == 0) {
            printf("fizz\n");
        } else if(i % 5 == 0) {
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
