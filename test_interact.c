#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);  // หรือใช้ fgets ถ้าต้องการอ่านเว้นวรรค

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello!!!., %s! You are %d years old.\n", name, age);

    return 0;
}
