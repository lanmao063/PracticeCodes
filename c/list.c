#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构，包括序号和值
typedef struct Node {
    int index;  // 序号
    int data;   // 值
    struct Node* next;
} Node;

// 创建链表节点
Node* createNode(int index, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("内存分配失败！\n");
        return NULL;
    }
    newNode->index = index;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Node* createList() {
    Node* head = NULL;
    int value, index = 0;

    printf("请输入值来创建链表（输入-1结束）：\n");
    while (1) {
        scanf("%d", &value);
        if (value == -1) break;

        Node* newNode = createNode(index++, value);
        if (head == NULL) {
            // 链表为空，新节点为头节点
            head = newNode;
        } else {
            // 找到链表最后一个节点，并插入新节点
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    return head;
}


// 打印链表
void printList(Node* head) {
    if (head == NULL) {
        printf("链表为空。\n");
        return;
    }

    Node* current = head;
    while (current != NULL) {
        printf("序号: %d, 值: %d -> ", current->index, current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// 查询链表中元素
Node* search(Node* head, int value) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// 修改链表中的元素
int modify(Node* head, int oldValue, int newValue) {
    Node* node = search(head, oldValue);
    if (node == NULL) {
        printf("链表中未找到值 %d。\n", oldValue);
        return 0;
    }
    node->data = newValue;
    return 1;
}

// 插入元素到链表
int insert(Node** head, int position, int value) {
    if (position < 0) {
        printf("位置无效！\n");
        return 0;
    }

    Node* newNode = createNode(0, value);
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return 1;
    }

    Node* current = *head;
    for (int i = 0; current != NULL && i < position - 1; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("位置超出范围！\n");
        free(newNode);
        return 0;
    }

    newNode->next = current->next;
    current->next = newNode;

    // 更新插入后节点的序号
    current = newNode->next;
    while (current != NULL) {
        current->index++;
        current = current->next;
    }
    newNode->index = position;

    return 1;
}

// 删除链表中的元素
int delete(Node** head, int value) {
    if (*head == NULL) {
        printf("链表为空！\n");
        return 0;
    }

    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        
        // 更新链表中所有节点的序号
        Node* current = *head;
        int index = 0;
        while (current != NULL) {
            current->index = index++;
            current = current->next;
        }

        return 1;
    }

    Node* current = *head;
    while (current->next != NULL && current->next->data != value) {
        current = current->next;
    }

    if (current->next == NULL) {
        printf("链表中未找到值 %d。\n", value);
        return 0;
    }

    Node* temp = current->next;
    current->next = current->next->next;
    free(temp);

    // 更新链表中所有节点的序号
    current = current->next;
    int index = current ? current->index : 0;
    while (current != NULL) {
        current->index = index++;
        current = current->next;
    }

    return 1;
}

// 主函数进行测试
int main() {
    Node* head = createList();
    
    printf("原始链表：\n");
    printList(head);

    int choice, value, position;
    while (1) {
        // 提供菜单
        printf("\n请选择操作：\n");
        printf("1. 查找元素\n");
        printf("2. 修改元素\n");
        printf("3. 插入元素\n");
        printf("4. 删除元素\n");
        printf("5. 打印链表\n");
        printf("6. 退出\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // 查找操作
                printf("请输入要查找的值：\n");
                scanf("%d", &value);
                {
                    Node* node = search(head, value);
                    if (node) {
                        printf("找到值：序号: %d, 值: %d\n", node->index, node->data);
                    } else {
                        printf("未找到该值。\n");
                    }
                }
                break;
            case 2:
                // 修改操作
                printf("请输入要修改的值：\n");
                scanf("%d", &value);
                printf("请输入新值：\n");
                int newValue;
                scanf("%d", &newValue);
                if (modify(head, value, newValue)) {
                    printf("修改后的链表：\n");
                    printList(head);
                }
                break;
            case 3:
                // 插入操作
                printf("请输入插入位置（从0开始）：\n");
                scanf("%d", &position);
                printf("请输入插入的值：\n");
                scanf("%d", &value);
                if (insert(&head, position, value)) {
                    printf("插入后的链表：\n");
                    printList(head);
                }
                break;
            case 4:
                // 删除操作
                printf("请输入要删除的值：\n");
                scanf("%d", &value);
                if (delete(&head, value)) {
                    printf("删除后的链表：\n");
                    printList(head);
                }
                break;
            case 5:
                // 打印链表
                printf("当前链表：\n");
                printList(head);
                break;
            case 6:
                // 退出
                printf("退出程序\n");
                return 0;
            default:
                printf("无效的选择，请重新输入。\n");
        }
    }

    return 0;
}
