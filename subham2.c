//LEETCODE PROBLEM 9:PALINDROME NUMBER
#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x) {
    if (x<0){
        return false;
    }
    int orignal=x;
    long long rev=0;
    while(x>0){
        int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
        
    }
    if(rev==orignal){
        return true;
    }
    return false;

}
int main(){
    printf("%d\n",isPalindrome(121));
    printf("%d\n",isPalindrome(-121));
    printf("%d\n",isPalindrome(10));
    return 0;
}