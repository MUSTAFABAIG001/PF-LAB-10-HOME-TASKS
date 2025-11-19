#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    int i;
    
    // show table
    printf("Student Name        Marks\n");
    printf("\n");
    for(i = 0; i < 5; i++) {
        printf("%-15s     %3d\n", names[i], marks[i]);
    }
    printf("\n");
    
    // find highest
    int highest = marks[0];
    int top = 0;
    int total = 0;
    
    for(i = 0; i < 5; i++) {
        total = total + marks[i];
        if(marks[i] > highest) {
            highest = marks[i];
            top = i;
        }
    }
    
    printf("Top student: %s with %d marks\n", names[top], highest);
    printf("Class average: %.2f\n", total / 5.0);
    
    return 0;
}
