#include "scan.hpp"
scan::scan(std::string PATH){
    setPath(PATH);
}
void scan::readFile() {
    try {
        read.open(filePath);
        write.open(filePath);

        if (read.fail() || write.fail())
            throw(1);

        std::cout << "OPENED!\n";

    } catch (...) {
        std::cout << "CANNOT OPEN FILE\n";
    };
    // null endline
    std::getline(read, a, '\000');

    for (int i = 0; i < a.length(); i++) {
        if (a[i] != '\n') {

            x.push_back(a[i]);

        } else {
            logLines.push_back(x);
            x.erase();
        }
    }
    read.close();
}
void scan::setPath(std::string PATH){
    this->filePath = PATH;
}
std::vector<std::string> scan::getLog() { return logLines; }
