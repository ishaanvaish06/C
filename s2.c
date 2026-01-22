//CH.SC.U4AIE25020
//Scenario-5:Rating
#include <stdio.h>
int main() {
    int ratings[] = {4, 5, 3, 2, 5, 4, 3, 5, 1, 4, 2};
    int freq[6] = {0};   
    int n = 11;
    for(int i = 0; i < n; i++) {
        freq[ratings[i]]++;
    }
    for(int i = 1; i <= 5; i++) {
        printf("%d star: %d\n", i, freq[i]);
    }
    return 0;}