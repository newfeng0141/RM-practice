#include <iostream>
#include <vector>  // 引入 vector 容器
#include <string>

int main() {
    // 1. 创建动态数组（以前 C 语言里得写 int arr[100]）
    std::vector<int> scores = {60, 80, 95};
    
    // 2. 随时添加元素（不用管数组会不会越界）
    scores.push_back(100);
    scores.push_back(75);
    
    // 3. 自动计算当前长度（不用自己写变量记录）
    std::cout << "当前一共有 " << scores.size() << " 个分数\n";
    
    // 4. C++ 独有的极简遍历方式（范围 for 循环）
    int sum = 0;
    for (int s : scores) {
        std::cout << "分数: " << s << "\n";
        sum += s;
    }
    
    std::cout << "总分: " << sum << "\n";

    return 0;
}
