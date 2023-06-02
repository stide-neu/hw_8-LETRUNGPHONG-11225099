#include <stdio.h>
#include <string.h>
struct Student {
    char name[20];
    int eng;
    int math;
    int phys;
    double mean;
};

int main() {
    struct Student students[4];

   
    strcpy(students[0].name, "Jack");
    students[0].eng = 82;
    students[0].math = 72;
    students[0].phys = 58;

    strcpy(students[1].name, "Young");
    students[1].eng = 77;
    students[1].math = 82;
    students[1].phys = 79;

    strcpy(students[2].name, "steeve");
    students[2].eng = 52;
    students[2].math = 62;
    students[2].phys = 29;

    strcpy(students[3].name, "Mark");
    students[3].eng = 61;
    students[3].math = 82;
    students[3].phys = 88;

    for (int i = 0; i < 4; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("English: %d\n", students[i].eng);
        printf("Math: %d\n", students[i].math);
        printf("Physics: %d\n", students[i].phys);
        students[i].mean = (double) ( students[i].eng + students[i].math + students[i].phys )/3;
         //for (int i = 0; i < 4; i++) {
        if (students[i].mean >= 90 && students[i].mean <= 100) {
        printf("grade S");
    } else if (students[i].mean >= 80 && students[i].mean < 90) {
        printf("grade A");
    } else if (students[i].mean >= 70 && students[i].mean < 80) {
         printf("grade B");
    } else if (students[i].mean >= 60 && students[i].mean < 70) {
         printf("grade C");
    } else {
         printf("grade D");
    }
        printf("\n");
    }

    return 0;
}
