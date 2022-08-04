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
    FILE * f = fopen("bin_struct", "wb");
    Student st[5];
    st[0] = (Student){2.3, 100, "IVAN", 25};
    st[1] = (Student){6.3, 24, "PETAR", 21};
    st[2] = (Student){3.3, 55, "GOSHO", 22};
    st[3] = (Student){6.9, 111, "BORIS", 20};
    st[4] = (Student){2.1, 12, "MITKO", 69};
    fwrite(st, sizeof(Student), 5, f);
    fclose(f);
    return 0;
}