// cpp17-learning.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <optional>
#include <any>
#include <variant>
#include <cstddef>

int main()
{
    int i1 = 0;
    std::optional<int> opt1;
    struct A {
        int a;
        float b;
        int c;
    };

    A a;
    a. a =1;
    a.b = 2;
    a.c = 3;

    auto [a1,b1,c1] = a;
    std::cout << "a1b1c1 : "  << a1 << b1 << c1 << std::endl;

    std::string_view sv = "hello c++17";
    std::cout << "int size:" << sizeof(i1) <<  std::endl;
    std::cout << "ptr size:" << sizeof(int*) <<  std::endl;
    std::cout << "optional size:" << sizeof(opt1) <<  std::endl;
    std::cout << "optional A size:" << sizeof(std::optional<A>) <<  std::endl;
    std::cout << "class A size:" << sizeof(A) <<  std::endl;
    std::cout << "any size:" << sizeof(std::any) <<  std::endl;
    std::cout << "std::variant<int,bool> size:" << sizeof(std::variant<int,bool>) <<  std::endl;
    std::cout << "std::variant<int,bool,A> size:" << sizeof(std::variant<int,bool,A>) <<  std::endl;
    std::cout << "std::string_view: " << sizeof(sv) <<  std::endl;
    std::byte b{2};
    std::cout << std::to_integer<unsigned>(b) << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
