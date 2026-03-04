#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5  // 默认学生数量

// 定义学生结构体
typedef struct {
    int id;             // 学号
    char name[50];      // 姓名
    int age;            // 年龄
    float score;        // 成绩
} Student;

// 查找学生函数
Student* findStudentById(Student students[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (students[i].id == id) {
            return &students[i];  // 找到，返回学生指针
        }
        else
        {
            return NULL;  // 没找到，返回NULL
        }
    }  
}

// 主程序
int main() {
    // 默认的学生数据
    Student students[MAX_STUDENTS] = {
        {1001, "张三", 20, 85.5},
        {1002, "李四", 22, 90.0},
        {1003, "王五", 21, 88.0},
        {1004, "赵六", 23, 92.0},
        {1005, "孙七", 24, 79.5}
    };
    
    int numStudents = MAX_STUDENTS;  // 默认学生数量为5

    while (1) {
        int choice;
        printf("\n请选择操作:\n");
        printf("1. 查找学生\n");
        printf("2. 修改学生成绩\n");
        printf("3. 退出\n");
        printf("请输入选择: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // 查找学生
            int id;
            printf("请输入要查找的学生学号: ");
            scanf("%d", &id);
            
            Student* student = findStudentById(students, numStudents, id);
            if (student != NULL) {
                printf("学生学号: %d, 姓名: %s, 年龄: %d, 成绩: %.2f\n", 
                       student->id, student->name, student->age, student->score);
            } else {
                printf("未找到学号为 %d 的学生。\n", id);
            }
        } 
        else if (choice == 2) {
            // 修改学生成绩
            int id;
            printf("请输入要修改成绩的学生学号: ");
            scanf("%d", &id);
            
            Student* student = findStudentById(students, numStudents, id);
            if (student != NULL) {
                printf("当前成绩: %.2f\n", student->score);
                printf("请输入新的成绩: ");
                scanf("%f", &student->score);
                printf("学生成绩修改成功！\n");
            } else {
                printf("未找到学号为 %d 的学生。\n", id);
            }
        } 
        else if (choice == 3) {
            printf("程序退出。\n");
            break;
        } 
        else {
            printf("无效的选择，请重新输入。\n");
        }
    }

    return 0;
}
