#include <stdio.h>

struct {
    char surname[40];
    char name[40];
    int age;
    int height;
    } person1, person2;

int main(){
    printf("Person 1°");
    printf("\n Insert age:");
    scanf("%d", &person1.age);
    printf("\n Insert height:");
    scanf("%d", &person1.height);
    printf("\n Insert surname:");
    scanf("%s", person1.surname);
    printf("\n Insert name:");
    scanf("%s", person1.name);
    printf("Person 2°");
    printf("\n Insert age:");
    scanf("%d", &person2.age);
    printf("\n Insert height");
    scanf("%d", &person2.height);
    printf("\n Insert surname");
    scanf("%s", person2.surname);
    printf("\n Insert name");
    scanf("%s", person2.name);
    if(person1.age>person2.age) 
        printf("%s is older then %s.", &person1.name, &person2.name);
    else
        printf("%s is older then %s.", &person2.name, &person1.name);
     return 0;
    }
