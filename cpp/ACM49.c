#include <stdio.h>

#define MAX_STUDENTS 100

// 定义结构体表示学生信息
struct Student {
    char id[20];
    char name[20];
    int scores[3];
};

// 输入一个学生的信息
void input(struct Student *student) {
    scanf("%s %s %d %d %d", student->id, student->name, &student->scores[0], &student->scores[1], &student->scores[2]);
}

// 输出一个学生的信息
void print(struct Student student) {
    printf("%s,%s,%d,%d,%d\n", student.id, student.name, student.scores[0], student.scores[1], student.scores[2]);
}

int main() {
    int N;
    struct Student students[MAX_STUDENTS];

    // 输入学生数量
    scanf("%d", &N);

    // 输入每个学生的信息
    for (int i = 0; i < N; i++) {
        input(&students[i]);
    }

    // 输出每个学生的信息
    for (int i = 0; i < N; i++) {
        print(students[i]);
    }

    return 0;
}

