#include <stdio.h>

int position;
char selection;
int count = 1;
char drawBoard(char *arr1, int pos, char selection);
char makeSelection(char move);
int runGame();

int main()
{
    runGame();
    return 0;
}

int runGame()
{
    char arr1[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char t;
    drawBoard(arr1, position, selection);
    while (1)
    {
        t = (count % 2 == 0) ? makeSelection('O') : makeSelection('X');
        arr1[position] = selection;

        drawBoard(arr1, position, selection);
        count++;
    }

    return 0;
}

char drawBoard(char *arr1, int pos, char selection)
{
    for (int i = 1; i < 10; i++)
    {
        printf("%c | ", arr1[i]);
        if (i % 3 == 0)
        {
            printf("\n__|___|___|");
            printf("\n");
        }
    }
    return arr1[pos];
}

char makeSelection(char move)
{
    int pos;
    int text = (count % 2 == 0) ? 2 : 1;
    printf("Player %d Input a postion\n", text);
    scanf("%d", &pos);
    position = pos;
    selection = move;
    return 'A';
}
