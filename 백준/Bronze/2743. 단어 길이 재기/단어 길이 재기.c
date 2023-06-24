#include <stdio.h>
#include <string.h>

int main() {
    char word[101];
    
    scanf("%s", word);
    
    int length = strlen(word);
    printf("%d\n", length);
    
    return 0;
}
