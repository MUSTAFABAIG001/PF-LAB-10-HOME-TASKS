#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};
    
    char courses[4][5][30] = {
        {"Math", "Physics", "Chemistry"},
        {"Math", "Biology", "English", "History", "Physics"},
        {"Physics", "Chemistry", "English"},
        {"Math", "Physics"}
    };
    
    int count[4] = {3, 5, 3, 2};
    
    printf("Student Course Registration \n\n");
    
    for(int i = 0; i < 4; i++) {
        printf("%s is taking:\n", students[i]);
        for(int j = 0; j < count[i]; j++) {
            printf("   - %s\n", courses[i][j]);
        }
        printf("\n");
    }
    

    printf("Students taking Physics:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < count[i]; j++) {
            if(strcmp(courses[i][j], "Physics") == 0) {
                printf("   - %s\n", students[i]);
                break;
            }
        }
    }
    printf("\n");
    
    printf("Overloaded students (more than 3 courses):\n");
    int found = 0;
    for(int i = 0; i < 4; i++) {
        if(count[i] > 3) {
            printf("   - %s (%d courses)\n", students[i], count[i]);
            found = 1;
        }
    }
    if(!found) {
        printf("   None - all good!\n");
    }
    
    return 0;
}
