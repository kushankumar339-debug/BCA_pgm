#include <stdio.h>

#define STUDENTS 5
#define SUBJECTS 5

int calculateTotal(int marks[])
{
    int total = 0;
    for (int i = 0; i < SUBJECTS; i++)
    {
        total = total + marks[i];
    }
    return total;
}

float calculateAverage(int total)
{
    return total / 5.0;
}

float calculatePercentage(int total)
{
    return (total / 500.0) * 100;
}

int checkResult(int marks[])
{
    for (int i = 0; i < SUBJECTS; i++)
    {
        if (marks[i] < 35)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int roll[STUDENTS];
    char name[STUDENTS][50];
    int marks[STUDENTS][SUBJECTS];
    int total;
    float average, percentage;
    int result;

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter name: ");
        scanf(" %49[^\n]", name[i]);

        printf("Enter marks in 5 subjects:\n");
        for (int j = 0; j < SUBJECTS; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n---------------- RESULT SHEET ----------------\n");
    printf("%-6s %-15s %5s %5s %5s %5s %5s %6s %7s %7s %8s\n",
           "Roll", "Name", "S1", "S2", "S3", "S4", "S5",
           "Total", "Average", "Percent", "Result");

    for (int i = 0; i < STUDENTS; i++)
    {
        total = calculateTotal(marks[i]);
        average = calculateAverage(total);
        percentage = calculatePercentage(total);
        result = checkResult(marks[i]);

        printf("%-6d %-15s %5d %5d %5d %5d %5d %6d %7.2f %7.2f%% %8s\n",
               roll[i], name[i],
               marks[i][0], marks[i][1], marks[i][2],
               marks[i][3], marks[i][4],
               total, average, percentage,
               result ? "PASS" : "FAIL");
    }

    return 0;
}