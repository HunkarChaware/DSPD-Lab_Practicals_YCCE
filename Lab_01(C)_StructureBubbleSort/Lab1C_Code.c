//HunkarChaware-IT-B-133
/*AIM: Write a program which creates a structure Student which must have the attribute Avg Marks
        with 3 more attributes sort the list of the student in descending order using Bubble sort.*/
#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float avg;
    char dept[20];
};
int main() {
    struct Student s[50], temp;
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter details (Roll Name AvgMarks Dept):\n");
    for(i = 0; i < n; i++) {
        scanf("%d %s %f %s", &s[i].roll, s[i].name, &s[i].avg, s[i].dept);
    }
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(s[j].avg < s[j+1].avg) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\nStudents Sorted by Average Marks (Descending):\n");
    printf("Roll\tName\tAvg\tDept\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%s\n", s[i].roll, s[i].name, s[i].avg, s[i].dept);
    }
    return 0;
}