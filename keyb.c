/* Keyboard input programm */

#include <stdio.h>

int main() {

    char name[32];

    printf("What is your name? \n");
    scanf("%s", &name);

    printf("Hello from docker to %s\n", name);

    return 0;


}