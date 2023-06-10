#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30];
    char dept[5];
    int ID;
    double salary;
};

int main()
{
    int N, totalcse = 0, totaleee = 0, totalece = 0;
    double countcse = 0, counteee = 0, countece = 0;
    scanf("%d", &N);
    double M = N;
    struct employee emp[N];
    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Dept: ");
        scanf("%s", emp[i].dept);
        printf("ID: ");
        scanf("%d", &emp[i].ID);
        printf("Salary: ");
        scanf("%lf", &emp[i].salary);
    }
    for (int i = 0; i < N; i++)
    {
        if(strcmp(emp[i].dept, "CSE") == 0)
        {
            totalcse += emp[i].salary;
            countcse++;
        }
        else if(strcmp(emp[i].dept, "EEE") == 0)
        {
            totaleee += emp[i].salary;
            counteee++;
        }
        if(strcmp(emp[i].dept, "ECE") == 0)
        {
            totalece += emp[i].salary;
            countece++;
        }
    }
    printf("\nCSE:\n");
    printf("Name\t ID\t Dept\n");
    printf("-----------------------------\n");
    for (int i = 0; i < N; i++)
    {   
        if(strcmp(emp[i].dept, "CSE") == 0)
            printf("%s\t %d\t %s\n", emp[i].name, emp[i].ID, emp[i].dept);
    }
    printf("Total Salary: %dtk\n", totalcse);
    printf("Average Salary: %0.2lftk\n\n", totalcse / countcse);

    printf("EEE:\n");
    printf("Name\t ID\t Dept\n");
    printf("-----------------------------\n");
    for (int i = 0; i < N; i++)
    {
        if(strcmp(emp[i].dept, "EEE") == 0)
            printf("%s\t %d\t %s\n", emp[i].name, emp[i].ID, emp[i].dept);
    }
    printf("Total Salary: %dtk\n", totaleee);
    printf("Average Salary: %0.2lftk\n\n", totaleee / counteee);

    printf("ECE:\n");
    printf("Name\t ID\t Dept\n");
    printf("-----------------------------\n");
    for (int i = 0; i < N; i++)
    {
        if(strcmp(emp[i].dept, "ECE") ==0)
            printf("%s\t %d\t %s\n", emp[i].name, emp[i].ID, emp[i].dept);
    }
    printf("Total Salary: %dtk\n", totalece);
    printf("Average Salary: %0.2lftk\n\n", totalece / countece);
}