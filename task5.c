#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50];
    int marks[10];
    int n = 0;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); 
    
    for(int i = 0; i < n; i++) {
        printf("Enter name %d: ", i+1);
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
        
        printf("Enter marks for %s: ", names[i]);
        scanf(" %d", &marks[i]);
  		getchar();
    }
    
    int max = marks[0];
    int pos = 0;
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += marks[i];
        if(marks[i] > max) {
            max = marks[i];
            pos = i;
        }
    }
    
    printf("Highest Scorer: %s with %d marks\n", names[pos], max);
    printf("Average Marks: %.2f\n", (float)sum / n);
    
    return 0;
}
