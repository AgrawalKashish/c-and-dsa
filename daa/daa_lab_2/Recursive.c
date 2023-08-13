#include <stdio.h>
#include <string.h>
#include<time.h>
int countStrings = 0;

void generateStrings(int n, char* current) {
    if (strlen(current) == n) {
        if (strstr(current, "xyz") != NULL) {
            char* pos = strstr(current, "xyz");
            if (strstr(pos + 1, "xyz") == NULL) {
                countStrings++;
            }
        }
        printf("%s\n", current);
        return;
    }

    char newX[n + 2];
    char newY[n + 2];
    char newZ[n + 2];

    strcpy(newX, current);
    strcpy(newY, current);
    strcpy(newZ, current);

    newX[strlen(current)] = 'x';
    newY[strlen(current)] = 'y';
    newZ[strlen(current)] = 'z';

    newX[strlen(current) + 1] = '\0';
    newY[strlen(current) + 1] = '\0';
    newZ[strlen(current) + 1] = '\0';

    generateStrings(n, newX);
    generateStrings(n, newY);
    generateStrings(n, newZ);
}

int main() {
    int n;
    printf("Enter the length of strings (n): ");
    scanf("%d", &n);

    char current[100];
    current[0] = '\0';
    clock_t c1,c2;
    c1 = clock();
    printf("Generated strings with variables x, y, and z:\n");
    generateStrings(n, current);
    c2= clock();
    double ExecutionTime = (double)(c2-c1)/CLOCKS_PER_SEC;
    printf("Execution Time: %f\n",ExecutionTime);
    printf("Number of strings with substring 'xyz' only once: %d\n", countStrings);

    return 0;
}
