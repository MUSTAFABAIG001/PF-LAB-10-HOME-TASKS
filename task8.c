#include <stdio.h>
#include <string.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    
    char items[3][3][30] = {
        {"Bruschetta", "Calamari", "Soup"},
        {"Grilled Salmon", "Steak", "Pasta"},
        {"Tiramisu", "Ice Cream", "Cheesecake"}
    };
    
    float prices[3][3] = {
        {8.50, 12.00, 6.00},
        {24.00, 32.00, 9.50},
        {7.50, 5.00, 8.00}
    };
    
    printf("           WELCOME TO OUR RESTAURANT\n");
    printf("\n\n");
    

    for(int c = 0; c < 3; c++) {
        printf("%s\n", categories[c]);
        printf("\n");
        for(int i = 0; i < 3; i++) {
            printf("  %-20s $%.2f\n", items[c][i], prices[c][i]);
        }
        printf("\n");
    }
    
 
    printf("BUDGET-FRIENDLY OPTIONS (Under $10)\n");
    printf("\n");
    
    int found = 0;
    for(int c = 0; c < 3; c++) {
        for(int i = 0; i < 3; i++) {
            if(prices[c][i] < 10.00) {
                printf("  %-20s $%.2f  (%s)\n", 
                       items[c][i], prices[c][i], categories[c]);
                found = 1;
            }
        }
    }
    
    if(!found) {
        printf("  No items under $10 today!\n");
    }
    
    return 0;
}
