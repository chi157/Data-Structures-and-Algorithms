#include <stdio.h>

void swap(char *str, int i, int j);
void reverse(char *str, int i, int j);

// 交換陣列內字元位置
void swap(char *str, int i, int j){
    char temp = str[i];
	str[i] = str[j];
    str[j] = temp;
}

// 反轉(遞迴方法)
void reverse(char *str, int i, int j)
{
    if(i < j){
        swap(str, i, j);
        reverse(str, i+1, j-1);
    }
}

int main()
{
    char str[] = "abcde";
    reverse(str, 0, 4);
    int i;
    for(i=0; i<5; i++){
        printf("%c ", str[i]);
    }
}
