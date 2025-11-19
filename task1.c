#include <stdio.h>

#include <string.h>

int main() {

    char password[100];

    int valid = 1; 

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    size_t len = strlen(password);

    if (len < 8) {
    	
      		  printf("Password too short\n");
      		  
      		  
        valid = 0;
    }


    if (strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 0) {
    	
       	 printf("Password must have at least one uppercase letter\n");
      	  valid = 0;
    }


    if (strpbrk(password, "0123456789") == 0) {
        		printf("Password must have at least one digit\n");
        	valid = 0;
    }


    if (strpbrk(password, "!@#$%") == 0) {
       		 printf("Password must have at least one special character (!,@,#,$,%)\n");
        valid = 0;
    }
	
	
	
    				if (valid) {
        	printf("Password is strong!\n");
    }

    return 0;
}
