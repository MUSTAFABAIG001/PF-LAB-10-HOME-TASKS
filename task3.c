#include<stdio.h>
#include<string.h>

int main()
{
	printf("Enter a sentance\n");
    char text[200];
    int vowels=0, consonants=0, digits=0, spaces=0, total=0;
    fgets(text, sizeof(text), stdin);

    for(int i=0; text[i]!='\0'; i++)
    {
        char c = text[i];
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        {
            char ch = c;
            if(ch>='A'&&ch<='Z') ch = ch + 32;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        else if(c>='0'&&c<='9')
            digits++;
        else if(c==' ')
            spaces++;

        total++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", total-1);

    return 0;
}
