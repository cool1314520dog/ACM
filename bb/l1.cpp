#include<iostream>

using namespace std;

inline float swap(float x, float y)
{
    return x>y? x : y;
}

int main()
{
    float result;
    result = swap(5, 10);
    cout << result << endl;
    return 0;
}
//内联函数中不能有数组定义，也不能有任何静态类型的定义。
//内联函数中不能含有循环，switch和复杂嵌套的if语句。
//内联函数不能是递归函数
