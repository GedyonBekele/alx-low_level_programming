#include <stdio.h>

/* Define the struct dog */
typedef struct dog {
char *name;
float age;
char *owner;
} dog;

int main(void) {
/* Create a new dog */
dog my_dog = {"Fido", 3.5, "John"};

/* Print the dog's information */
printf("Name: %s\n", my_dog.name);
printf("Age: %.1f\n", my_dog.age);
printf("Owner: %s\n", my_dog.owner);

return 0;
}
