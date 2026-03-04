#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构
struct Node {
    int id;
    int score;
    struct Node *next;
};

// 创建新节点
struct Node* createNode(int id, int score) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->id = id;
    newNode->score = score;
    newNode->next = NULL;
    return newNode;
}

// 按学号升序插入节点
void insertSorted(struct Node **head, struct Node *newNode) {
    struct Node *current;

    // 如果链表为空或新节点学号小于头节点学号，则将新节点插入到链表头部
    if (*head == NULL || (*head)->id > newNode->id) {
        newNode->next = *head;
        *head = newNode;
    } else {
        // 找到插入点
        current = *head;
        while (current->next != NULL && current->next->id < newNode->id) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// 输出链表
void printList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d %d\n", current->id, current->score);
        current = current->next;
    }
}

// 释放链表内存
void freeList(struct Node *head) {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int N, M, id, score;
    struct Node *head = NULL;

    // 输入链表a和b的节点数量
    //printf("请输入链表a和b的节点数量（例如：3 2）: ");
    scanf("%d %d", &N, &M);

    // 输入链表a的节点数据并插入到排序链表中
    //printf("请输入链表a的数据（学号 成绩）:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &id, &score);
        struct Node *newNode = createNode(id, score);
        insertSorted(&head, newNode);
    }

    // 输入链表b的节点数据并插入到排序链表中
    //printf("请输入链表b的数据（学号 成绩）:\n");
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &id, &score);
        struct Node *newNode = createNode(id, score);
        insertSorted(&head, newNode);
    }

    // 输出合并后按学号排序的链表
    //printf("合并后的链表按学号升序排列:\n");
    printList(head);

    // 释放链表内存
    freeList(head);

    return 0;
}

