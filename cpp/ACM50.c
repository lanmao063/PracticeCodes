#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char id[20];
    char name[50];
    int scores[3];
    int totalScore;
};

int main() {
    int N;
    struct Student students[MAX_STUDENTS];
    int total_scores[3] = {0, 0, 0};  // 三门课的总成绩
    struct Student *top_student = NULL;

    // 输入学生数量
    scanf("%d", &N);

    // 输入每个学生的信息
    for (int i = 0; i < N; i++) {
        scanf("%s %s %d %d %d", students[i].id, students[i].name, &students[i].scores[0], &students[i].scores[1], &students[i].scores[2]);

        // 计算每个学生的总成绩
        students[i].totalScore = students[i].scores[0] + students[i].scores[1] + students[i].scores[2];

        // 更新三门课的总成绩
        for (int j = 0; j < 3; j++) {
            total_scores[j] += students[i].scores[j];
        }

        // 找到最高分的学生
        if (top_student == NULL || students[i].totalScore > top_student->totalScore) {
            top_student = &students[i];
        }
    }

    // 计算并输出三门课的平均成绩
    for (int j = 0; j < 3; j++) {
        printf("%.0f ",  (float)total_scores[j] / N);
    }

    // 输出最高分的学生信息
    if (top_student != NULL) {
        printf("%s %s %d %d %d\n", top_student->id, top_student->name, top_student->scores[0], top_student->scores[1], top_student->scores[2]);
    }

    return 0;
}

