#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
using std::filesystem::directory_iterator;
using namespace std;

int main() {
    string path = "/Users/andrew/Desktop/Projects/";

    for (const auto & file : directory_iterator(path))
        cout << file.path().filename() << endl;

    return EXIT_SUCCESS;
}
