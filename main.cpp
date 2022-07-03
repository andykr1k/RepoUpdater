#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
using std::filesystem::directory_iterator;
using namespace std;

int main() {
    string path = "/Users/andrew/Desktop/Projects/";

    for (const auto & file : directory_iterator(path)){
        cout << file.path().filename().string() << " is being updated." << endl;
        string string_path = file.path().filename().string();
        string command = "cd /Users/andrew/Desktop/Projects/" + string_path + " &&  git pull";
        int n = command.length();
        char char_array[n + 1];
        strcpy(char_array, command.c_str());
        system(char_array);
    }


    return EXIT_SUCCESS;
}
