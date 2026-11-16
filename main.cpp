#include <iostream>
#include <string>

class Armor {
private:
    // 私有数据：把装甲板的坐标藏起来，不许外面的人乱改
    int x; 
    int y;

public:
    // 构造函数（公开）
    Armor(int start_x, int start_y) {
        x = start_x;
        y = start_y;
    }

    // 公开函数：提供一个安全修改坐标的方法
    void moveTo(int new_x, int new_y) {
        x = new_x;
        y = new_y;
        std::cout << "装甲板移动到了: (" << x << ", " << y << ")\n";
    }

    // 公开函数：只让外面看，不让外面改
    int getX() { return x; }
    int getY() { return y; }
};

int main() {
    Armor target(3, 4);
    
    // target.x = 10; // ❌ 报错！因为 x 是 private，外面摸不到。
    
    target.moveTo(10, 20); // ✅ 只能通过公开的函数去改，安全！
    
    std::cout << "x坐标是: " << target.getX() << "\n";
    
    return 0;
}
