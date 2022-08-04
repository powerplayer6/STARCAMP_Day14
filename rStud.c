#include<stdio.h>
#include<stdlib.h>
typedef struct Student {
    double grade;
    unsigned int courses_taken;
    char name[7];
    unsigned char age;
} Student;

int main()
{
    FILE * f = fopen("bin_struct", "rb");
    Student st[5];

    fread(st, sizeof(Student), 5, f);

    for(int i=0; i<5; i++){
    printf("%lf %u %s %d\n", st[i].grade,st[i].courses_taken,st[i].name,st[i].age);}
    fclose(f);
    return 0;
}