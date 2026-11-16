#include <iostream>
#include <string>

// 定义一个类：装甲板 (Armor)
class Armor {
public:
    // 属性（成员变量）
    std::string color;  // 颜色
    int x;              // 横坐标
    int y;              // 纵坐标

    // 行为（成员函数）：计算它距离中心的距离
    int getDistance() {
        // 简单的数学计算模拟
        return x * x + y * y; 
    }

    // 构造函数：创建对象时自动运行
    Armor(std::string c, int start_x, int start_y) {
        color = c;
        x = start_x;
        y = start_y;
        std::cout << "发现一个" << color << "色的装甲板！\n";
    }
};

int main() {
    // 实例化（创建一个对象）
    Armor myTarget("红", 3, 4);
    
    std::cout << "坐标: (" << myTarget.x << ", " << myTarget.y << ")\n";
    std::cout << "距离平方: " << myTarget.getDistance() << "\n";

    return 0;
}
