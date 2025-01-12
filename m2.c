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

    printf("Enter the secound name: ");
    scanf("%s", show.name2);

    // Print both names
    if (show.name1 == show.name2)
    {
    printf("Both names are matched: %s\n", show.name1);

    printf("Both names are matched: %s\n", show.name2);
    }
    else
    {
    printf("Both names are not matched");
    }

    return 0;
}
