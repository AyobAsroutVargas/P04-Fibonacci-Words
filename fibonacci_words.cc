#include "word.h"

int main(int argc, char* argv[]) {
    if ((argc == 2)) {
        std::string arg = argv[1];
        if (arg == "--help") {
            std::cout << "Usage: " << argv[0] << " Input file name "
        << "Output file name" << std::endl;
        std::cout <<"Functionality: Given a sequence of words in an input file"
        << "\nthe program checks if they are Fibonacci words and."
        << "\nOutput will go into the specified output file" << std::endl;
        } else {
            std::cout << "Usage: " << argv[0] << " Input file name "
        << "Output file name" << std::endl;
        }

        return 0;
    }
    else  if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " Input file name "
        << "Output file name, use --help for more information" << std::endl;
        return 0;
    }

    std::ofstream fout;

    fout.open(argv[2]);

    std::ifstream fin;

    fin.open(argv[1]);

    std::string input_string;

    Word palabra;

    while (std::getline(fin, input_string)) {
        palabra.set_word(input_string);
        if (palabra.IsFibonacci()) {
            fout << input_string << " is the word number "
            << palabra.get_position() << std::endl;
        } else {
            fout << input_string << " is not a Fibonacci word" << std::endl;
        }
    }

    return 0;
}
