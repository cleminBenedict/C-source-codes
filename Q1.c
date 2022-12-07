#include <stdio.h>
#include <math.h>

int main() {
    int totalTests, currentTest;
    printf("Number of tests : ");
    scanf("%d",&totalTests);
    for(currentTest=0;currentTest<totalTests;currentTest++){
        int a,b,k;
        printf("a b k : ");
        int totalDigits=0;
        scanf("%d %d %d",&a,&b,&k);
        int output;
        for (int i=0;i<k;i++){
            int sum = a+i*b;
            int count=(sum==0)?1:log10(sum)+1; 
            totalDigits+=count;
            if(totalDigits>=k){
                while(totalDigits>k){
                    sum=sum/10;
                    totalDigits--;
                }
                output=sum%10;
                break;
            }
        }
        printf("\n");
        printf("%d",output);
        printf("\n");
    }
    
    return 0;
}