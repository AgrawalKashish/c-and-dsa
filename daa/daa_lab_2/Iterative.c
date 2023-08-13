#include <stdio.h>
#include <string.h>
#include <time.h>

int countStrings = 0;

// Define a structure to represent the state of the function call
struct State {
    int currentIndex;
    char current[100];
};

// Stack operations
#define MAX_STACK_SIZE 1000

struct State stack[MAX_STACK_SIZE];
int top = -1;

void push(struct State data) {
    if (top >= MAX_STACK_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = data;
}

struct State pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        struct State emptyState;
        emptyState.currentIndex = -1; // Use an invalid value to indicate an empty state
        return emptyState;
    }
    return stack[top--];
}

int isStackEmpty() {
    return top == -1;
}

void feasible(int n) {
    char newX[n + 2];
    char newY[n + 2];
    char newZ[n + 2];

    struct State initialState;
    initialState.currentIndex = 0;
    initialState.current[0] = '\0';

    push(initialState);

    while (!isStackEmpty()) {
        struct State currentState = pop();

        if (currentState.currentIndex == n) {
            if (strstr(currentState.current, "xyz") != NULL) {
                char* pos = strstr(currentState.current, "xyz");
                if (strstr(pos + 1, "xyz") == NULL) {
                    countStrings++;
                }
            }
            printf("%s\n", currentState.current);
        } else {
            char currentChar;
            for (currentChar = 'x'; currentChar <= 'z'; currentChar++) {
                char newStr[n + 2];
                strcpy(newStr, currentState.current);
                newStr[currentState.currentIndex] = currentChar;
                newStr[currentState.currentIndex + 1] = '\0';

                struct State newState;
                newState.currentIndex = currentState.currentIndex + 1;
                strcpy(newState.current, newStr);

                push(newState);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the length of strings (n): ");
    scanf("%d", &n);

    clock_t c1, c2;
    c1 = clock();
    printf("Generated strings with variables x, y, and z:\n");
    feasible(n);
    c2 = clock();
    double executionTime = (double)(c2 - c1) / CLOCKS_PER_SEC; printf("Number of strings with substring 'xyz' only once: %d\n", countStrings);
    printf("Execution Time: %f seconds\n", executionTime);
    return 0;
}
