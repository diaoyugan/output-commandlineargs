#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    // 获取完整的命令行参数
    std::vector<std::string> commandLineArgs;
    for (int i = 0; i < argc; ++i) {
        commandLineArgs.push_back(argv[i]);
    }

    // 解析命令行参数
    std::vector<std::string> startupOptions;
    for (const std::string& arg : commandLineArgs) {
        // 不输出程序目录
        if (arg != argv[0]) {
            startupOptions.push_back(arg);
        }
    }

    // 输出启动项
    if (!startupOptions.empty()) {
        std::cout << "启动时添加的启动项：" << std::endl;
        for (const std::string& option : startupOptions) {
            std::cout << option << std::endl;
        }
    }
    else {
        std::cout << "没有添加任何启动项。" << std::endl;
    }

    std::cout << "按下任意键退出" << std::endl;
    cin.get();

    return 0;
}

