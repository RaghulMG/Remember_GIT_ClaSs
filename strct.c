#include <stdio.h>
#include <string.h>

struct name {
    char name1[20];
    char name2[20];
};

int main() {
    struct name show;

    printf("Enter the first name: ");
    scanf("%s", show.name1);

    // Copy name1 to name2
    strcpy(show.name2, show.name1);

    // Print both names
    printf("Both names are matched: %s\n", show.name2);

    return 0;
}
