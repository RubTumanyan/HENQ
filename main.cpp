#include <fstream>
#include <iostream>

int main() {
    //we create a object outFile and open hello.txt
    std::ofstream outFile("hello.txt");

    //if we can't open the file
    if (!outFile) {
        std::cerr << "Не удалось открыть!" << std::endl;
        return 1;
    }

    // write the sentence
    outFile << "Hello, C++ File World!" << std::endl;

    // close the file
    outFile.close();

    // and we check it's clode or not
    if (outFile.is_open()) {
        std::cerr << "Файл не закрылся корректно!" << std::endl;
        return 1;
    }

    return 0;
}
