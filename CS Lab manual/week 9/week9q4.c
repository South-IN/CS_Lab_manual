#include <stdio.h>
#include <string.h>

#define MAX 100

struct Task {
    char name[50];
    int done;
};

struct Task tasks[MAX];
int count = 0;

void add() {
    if (count >= MAX) {
        printf("Task list is full.\n");
        return;
    }

    printf("Enter task name: ");
    getchar();
    fgets(tasks[count].name, 50, stdin);
    tasks[count].done = 0;
    count++;
    printf("Task added.\n");
}

void show() {
    if (count == 0) {
        printf("No tasks.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("%d. %s [%s]\n", i + 1, tasks[i].name, tasks[i].done ? "Done" : "Not Done");
    }
}

void mark() {
    int num;
    printf("Enter task number: ");
    scanf("%d", &num);

    if (num < 1 || num > count) {
        printf("Invalid number.\n");
        return;
    }

    tasks[num - 1].done = 1;
    printf("Task marked as done.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("3. Mark Task\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add();
        } else if (choice == 2) {
            show();
        } else if (choice == 3) {
            mark();
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
