#include "word.h"

bool Word::IsFibonacci(void) {
    if ((word_ == "a")) {  // Caso trivial
        position_ = 1;
        return true;
    }

    if ((word_ == "b")) {  // Caso trivial
        position_ = 2;
        return true;
    }

    std::string iteration_word_0 = "a";

    std::string iteration_word_1 = "b";

    std::string iteration_word_2 = iteration_word_0 + iteration_word_1;

    position_ = 3;

    while ((word_ != iteration_word_2)  &&
    (get_size() > iteration_word_2.length())) {
        iteration_word_0 = iteration_word_1;

        iteration_word_1 = iteration_word_2;

        iteration_word_2 = iteration_word_0 + iteration_word_1;

        position_++;
    }

    if (word_ != iteration_word_2) {
        position_ = 0;
        return false;
    } else {
        return true;
    }
}



std::size_t Word::get_size(void) {
    return word_.length();
}



int Word::get_position(void) {
    return position_;
}



void Word::set_word(std::string input_string) {
    word_ = input_string;
}
