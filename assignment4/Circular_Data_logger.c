#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int writeIndex = 0;
int count = 0;

void insertSample(int value)
{
    buffer[writeIndex] = value;
    writeIndex = (writeIndex + 1) % BUFFER_SIZE;

    if (count < BUFFER_SIZE)
        count++;
}

void printSamples()
{
    int start;

    if (count < BUFFER_SIZE)
        start = 0;
    else
        start = writeIndex;

    printf("Stored samples: ");
    for (int i = 0; i < count; i++)
    {
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main()
{
    int value;
    char choice;

    while (1)
    {
        printf("Enter sensor value: ");
        scanf("%d", &value);

        insertSample(value);

        printf("Print buffer? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
            printSamples();

        printf("Continue? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N')
            break;
    }

    return 0;
}
