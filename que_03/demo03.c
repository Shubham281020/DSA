//3. Create array of 10 students(rollno, name, marks) and sort students by their marks. 


#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by their marks using bubble sort
void bubbleSort(struct Student arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j].marks > arr[j+1].marks) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    struct Student students[10];
    int n = 10, i;

    // Input details of 10 students
    printf("Enter details of 10 students:\n");
    for (i = 0; i < n; i++) {
        printf("Enter roll number for student %d: ", i+1);
        scanf("%d", &students[i].rollno);
        printf("Enter name for student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i+1);
        scanf("%f", &students[i].marks);
    }

    // Sort students by marks
    bubbleSort(students, n);

    // Display sorted list of students
    printf("\nSorted list of students by marks:\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
