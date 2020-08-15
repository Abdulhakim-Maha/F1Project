#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf_s("%d", &age);
    
    if(age >= 0 && age < 11)
        {
        printf("You are kid\n");
        }
    if (age >= 11 && age < 20)
        {
        printf("You are teen\n");
        }
    if (age >= 20 && age <40)
        {
        printf("You are adult\n");
        }
    return 0;
}