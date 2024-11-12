#include <iostream>
using namespace std;

int main() {
    int n;

    // 输入一个正整数n
    cout << "請輸入一個正整數n: ";
    cin >> n;

    // 1. 使用 for 循环计算小于等于 n 的所有偶数的和
    int sum_even_for = 0;
    for (int i = 2; i <= n; i += 2) {  // 从2开始，每次加2
        sum_even_for += i;
    }

    // 2. 使用 while 循环计算小于等于 n 的所有偶数的和
    int sum_even_while = 0;
    int i = 2;  // 从2开始
    while (i <= n) {
        sum_even_while += i;
        i += 2;
    }

    // 3. 使用 do-while 循环计算小于等于 n 的所有偶数的和
    int sum_even_do_while = 0;
    i = 2;  // 从2开始
    do {
        sum_even_do_while += i;
        i += 2;
    } while (i <= n);

    // 输出结果
    cout << "小於或等於的偶數總和" << n << " (using for): " << sum_even_for << endl;
    cout << "小於或等於的偶數總和" << n << " (using while): " << sum_even_while << endl;
    cout << "小於或等於的偶數總和" << n << " (using do-while): " << sum_even_do_while << endl;

    return 0;
}
