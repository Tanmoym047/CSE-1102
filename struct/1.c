#include <stdio.h>

struct student
{
    char name[30];
    int roll, mark;
};

int main()
{
    int highest = -100, check = 0;
    int N;
    scanf("%d", &N);
    struct student stu[N];
    for(int i = 0; i < N; i++)
    {
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("roll: ");
        scanf("%d",&stu[i].roll);
        printf("Mark: ");
        scanf("%d",&stu[i].mark);
    }
    for(int i = 0; i < N; i++)
    {
        if(stu[i].mark > highest)
        {
            highest = stu[i].mark;
            check = i;
        }
    }
    printf("Name\t Roll\tMark \n");
    printf("%s\t %d\t%d\n ", stu[check].name, stu[check].roll,stu[check].mark);


    
}