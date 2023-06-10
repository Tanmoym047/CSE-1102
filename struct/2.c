#include <stdio.h>

struct department
{
    char name[30];
    int ID;
    double salary;
};

int main()
{
    int N, totalcse = 0, totaleee = 0, totalece = 0;
    scanf("%d", &N);
    double M = N;
    struct department cse[N];
    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        scanf("%s", cse[i].name);
        printf("ID: ");
        scanf("%d", &cse[i].ID);
        printf("Salary: ");
        scanf("%lf", &cse[i].salary);
    }
    for (int i = 0; i < N; i++)
    {
        totalcse += cse[i].salary;
    }

    struct department eee[N];
    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        scanf("%s", eee[i].name);
        printf("ID: ");
        scanf("%d", &eee[i].ID);
        printf("Salary: ");
        scanf("%lf", &eee[i].salary);
    }
    for (int i = 0; i < N; i++)
    {
        totaleee += eee[i].salary;
    }

    struct department ece[N];
    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        scanf("%s", ece[i].name);
        printf("ID: ");
        scanf("%d", &ece[i].ID);
        printf("Salary: ");
        scanf("%lf", &ece[i].salary);
    }
    for (int i = 0; i < N; i++)
    {
        totalece += ece[i].salary;
    }
    printf("CSE:\n");
    printf("Name\t ID\t Dept\n");
    printf("-----------------------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\t %d\t CSE\n", cse[i].name, cse[i].ID);
    }
    printf("Total Salary: %dtk\n", totalcse);
    printf("Average Salary: %0.2lftk\n\n", totalcse / M);

    printf("EEE:\n");
    printf("Name\t ID\t Dept\n");
    printf("-----------------------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\t %d\t EEE\n", eee[i].name, eee[i].ID);
    }
    printf("Total Salary: %dtk\n", totaleee);
    printf("Average Salary: %0.2lftk\n\n", totaleee / M);

    printf("ECE:\n");
    printf("Name\t ID\t Dept\n");
    printf("-----------------------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\t %d\t ECE\n", ece[i].name, ece[i].ID);
    }
    printf("Total Salary: %dtk\n", totalece);
    printf("Average Salary: %0.2lftk\n\n", totalece / M);
}