// .Implement structures to read, write and compute average- marks of the
// students, list the students scoring above and below the average marks for a
// class of N students.

#include <stdio.h>
struct student
{
    char name[20];
    float m1, m2, m3, total;
};
void main()
{
    int i, j, k, m, n, aboveavg[10], belowavg[10];
    float T = 0, AVG = 0;
    struct student s[10];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of student %d :\n ", i + 1);
        printf("Enter name : ");
        scanf("%s", s[i].name);
        printf("\nEnter m1,m2,m3 : ");
        scanf("%f%f%f", &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].total = (s[i].m1 + s[i].m2 + s[i].m3);
        T = T + s[i].total;
    }
    printf("Details of Students.\n");
    printf("Name\t m1\t m2\t m3\t total\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\t\n", s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].total);
    }
    AVG = T / n;
    printf("AVG = %f \n", AVG);
    j = 0;
    k = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i].total > AVG)
        {
            aboveavg[j] = i;
            j++;
        }
        else
        {
            belowavg[k] = i;
            k++;
        }
    }
    printf("Students scoring above avg. \n");
    for (i = 0; i < j; i++)
    {
        printf("%s %f\n", s[aboveavg[i]].name, s[aboveavg[i]].total);
    }
    printf("Students scoring below avg. \n");
    for (i = 0; i < k; i++)
    {
        printf("%s %f\n", s[belowavg[i]].name, s[belowavg[i]].total);
    }
}