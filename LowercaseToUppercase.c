#include <stdio.h>

// int main() {
//     char lowercase;
//     char uppercase;

//     // 提示用户输入小写字母
//     //printf("请输入一个小写字母: ");
//     scanf("%c", &lowercase);

//     // 检查输入是否是小写字母
//     if (lowercase >= 'a' && lowercase <= 'z') {
//         // 转换为大写字母
//         uppercase = lowercase - 'a' + 'A';
//         printf("%c\n", uppercase);
//     } else {
//         printf("输入不是小写字母\n");
//     }

//     return 0;
// }
int main(){
    char lowercase,uppercase;
    scanf("%c",&lowercase);
    if(lowercase>='a'&&lowercase<='z'){
        uppercase=lowercase-'a'+'A';
        printf("%c\n",uppercase);
    } else {
        printf("你输入错误了\n");
        //printf是小括号，不是大括号。
    }
    return 0;
}
