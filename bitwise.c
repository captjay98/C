#include <stdio.h>

void printOnOff(char Name, int SwitchNum);
void printStatus();

int status    = 6;  // 0110
int switchA = 8;  // 1000
int switchB = 4;  // 0100
int switchC = 2;  // 0010
int switchD = 1;  // 0001

int num5 = 12;// 1100
int num6 = 9;  // 1001

int main()
{

    printf("Step 1 NumA:%i NumB:%i \n", num5, num6);

    num5 = num5 ^ num6;
    printf("Step 2 NumA:%i NumB:%i \n", num5, num6);

    num6 = num5 ^ num6;
    printf("Step 3 NumA:%i NumB:%i \n", num5, num6);

    num5 = num5 ^ num6;
    printf("Step 4 NumA:%i NumB:%i \n", num5, num6);
    puts("\n");

    int RandOne = (rand() % 1000);
    int RandTwo = (rand() % 1000);
    int RandThree = (rand() % 1000);

    printf("RandOne :  %i \nRandTwo :  %i \nRandThree: %i\n\n",
                RandOne, RandTwo, RandThree);
    
    int key1 =  RandOne ^ RandTwo ^ RandThree;
    int key2 =  RandOne ^ RandThree;
    printf("Key1 :%i \nKey2 :%i \n\n",
                key1, key2);

    key1 = key1 ^ RandTwo;
    printf("Key1 :%i \nKey2 :%i\n \n",
                key1, key2);

    key1 = key1 ^ RandOne;
    printf("Key1 :%i \nKey2 :%i \n",
                key1, key2);
    /*
    printf("\n");
    printf("Current status %d\n", status);
    printStatus();
    printf("\n");

    status = status | switchA;
    status = status | switchD;
    printf("Current status %d\n", status);
    printStatus();
    printf("\n");

    status = status & (~switchA);
    printf("Current status %d\n", status);
    printStatus();
    printf("\n");

    status = status & (~switchD);
    printf("Current status %d\n", status);
    printStatus();
    printf("\n");
    */

    return 0; 
}

void printOnOff(char Name, int SwitchNum)
{
    if (status & SwitchNum)
    {
        printf("%c: ON ", Name);
    }
    else
    {
        printf("%c: OFF ", Name);
    }
}

void printStatus()
{
    printOnOff('A', switchA);
    printOnOff('B', switchB);
    printOnOff('C', switchC);
    printOnOff('D', switchD);
    printf("\n");
}