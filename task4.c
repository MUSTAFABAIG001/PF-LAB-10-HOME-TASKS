#include <stdio.h>
#include <string.h>

int main() {
    char a[200];
    
    printf("Enter message: ");
    fgets(a, 200, stdin);
    a[strcspn(a, "\n")] = 0;

    printf("Original: %s\n", a);

    
    for(int i = 0; a[i]; i++) {
        if(a[i] >= 'a' && a[i] <= 'z')
            a[i] = ((a[i] - 'a' + 3) % 26) + 'a';
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = ((a[i] - 'A' + 3) % 26) + 'A';
    }

    printf("Encrypted: %s\n", a);

    for(int i = 0; a[i]; i++) {
        if(a[i] >= 'a' && a[i] <= 'z')
            a[i] = ((a[i] - 'a' - 3 + 26) % 26) + 'a';
        if(a[i] >= 'A' && a[i] <= 'Z')
            a[i] = ((a[i] - 'A' - 3 + 26) % 26) + 'A';
    }

    printf("Decrypted: %s\n", a);

    return 0;
}
