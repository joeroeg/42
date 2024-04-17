#include "Harl.hpp"

int main(int argc, char** argv) {
    if (argc == 2) {
        Harl harl;
        harl.complain(argv[1]);
    } else {
        std::cout << "Usage: " << argv[0] << " <log_level>" << std::endl;
    }
    return 0;
}
