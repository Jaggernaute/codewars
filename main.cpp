#include <iostream>
#include <filesystem>
#include <vector>

#define filename_str p.path().filename().string()

int main() {

    std::string prefix = "CW-";
    std::vector<std::string> directory_name;
    std::vector<std::string> directory;

    for (auto& p : std::filesystem::directory_iterator("..")) {
        if (std::filesystem::is_directory(p) && filename_str.rfind(prefix, 0) == 0) {
            directory_name.push_back(filename_str.substr(3, filename_str.length()));
            directory.push_back(p.path().string());
        }
    }
    for (int i = 0; i < directory_name.size(); i++) {
        std::string file = std::to_string(i+1) + " > " + directory_name[i];
        std::cout << file << std::endl;
    }

    std::cout << "Select a directory: ";
    int select;
    std::cin >> select;

    std::cout << "You selected " << directory[select-1] << std::endl;

    std::string clean_dir = "rm -rf " + directory[select-1] + "/build/*";
    const char* clean_dir_cstr = clean_dir.c_str();
    system(clean_dir_cstr);

    std::string cmd_cmake = " cmake " + directory[select-1] + "/CMakelists.txt -B " + directory[select-1] +"/build ";
    const char* cmd_char_cmake = cmd_cmake.c_str();
    system(cmd_char_cmake);

    std::string cmd_make = "make -C " + directory[select-1] + "/build/";
    const char* cmd_char_make = cmd_make.c_str();
    system(cmd_char_make);

    std::string cmd_run = "./" + directory[select-1] + "/build/bin";
    const char* cmd_char_run = cmd_run.c_str();
    system(cmd_char_run);

    return 0;
}
