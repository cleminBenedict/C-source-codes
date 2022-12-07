#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main() {
    int numberOfCities;
    printf("Number of cities : ");
    scanf("%d",&numberOfCities);
    int numberOfBlocks[numberOfCities+1];
    numberOfBlocks[0]=1;
    printf("Number of blocks in each city respectively : \n");
    for(int i = 1; i<=numberOfCities;i++){
        printf("Number of blocks for city %d: ",i);
        scanf("%d",&numberOfBlocks[i]);
    }
    int maxBlocks;
    for(int i =1; i<numberOfCities;i++){
        int currentGCD = gcd(numberOfBlocks[i],numberOfBlocks[i+1]);
        maxBlocks += currentGCD;
    }
    printf("******************************\n");
    printf("Maxium number of blocks: %d",maxBlocks);
    return 0;
}