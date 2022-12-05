#include <stdio.h>

#define MAX 50

int main() {
    int page[50], i, n, f, ps, offset, pageNum;
    int choice = 0;
    printf("Enter number of pages in memory:");

    scanf("%d", &n);
    printf("\nEnter page size: ");
    scanf("%d", &ps);
    printf("\nEnter no of frames: ");
    scanf("%d", &f);

    for (int i = 0; i < n; i++)
        page[i] = -1;

    printf("\nEnter the page table\n");
    printf("(Enter frame no as -1 if that page is not present in any frame)\n\n");
    printf("\npageno\tframeno\n-------\t-------");

    for (i = 0; i < n; i++) {
        printf("\n\n%d\t", i);
        scanf("%d", &page[i]);
    }

    do {
        printf("\n\nEnter the logical address(i.e, page no & offset):");
        scanf("%d%d", &pageNum, &offset);
        if (page[pageNum] == -1)
            printf("\n\nThe required page is not available in any of frames");
        else
            printf("\n\nPhysical address(i.e,frame no & offsetset):%d, %d", page[pageNum], offset);
        printf("\nDo you want to continue(1/0)?:");
        scanf("%d", &choice);
    } while (choice == 1);
    return 1;
}