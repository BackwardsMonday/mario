#include <stdio.h>
#include <cs50.h>

int getSize(void);
void printPeramid(int size);

int main (void)
{
    int i = getSize();
    printPeramid(i);
    
}

int getSize(void)
{
    int i;
    do
    {
        i = get_int("Hight:");
    } while (i < 1 || i > 8);
    return i;
    
};

void printPeramid(int size)
{
    int hashNum = 0;
    for (int i = size; i != 0; i = i - 1)
    {
        hashNum += 1;
        for(int j = i - 1; j != 0; j = j - 1)
        {
            printf(" ");
        }
        for(int j = hashNum; j != 0; j = j - 1)
        {
            printf("#");
        }
        printf("  ");
        for(int j = hashNum; j != 0; j = j - 1)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
