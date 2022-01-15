#include <stdio.h>

int main()
{
    int n_students;
    int n_subjects;

    printf("Enter the amount of students : ");
    scanf("%d", &n_students);
    printf("Enter how many subjects students have : ");
    scanf("%d", &n_subjects);

    int marks[n_students][n_subjects];

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d in subject %d \n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The value of marks for student %d in subject %d is  : %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}