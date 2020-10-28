/** 
 * Universidad de La Laguna
 * Asignatura: Computabilidad y Algoritmia
 * Practica Nº 4 Palabras de Fibonacci
 * @author Ayob Asrout Vargas
 * @class Word
 * @brief Provides a method to check if a string belongs to the fibonacci sequence.
 * 
 * The class main goal is to determine whether or not a string belongs to the
 * fibonacci sequence, and what it's position. 
 * 
 * @date 28/10/2020
 * Contact: alu0101350158@ull.edu.es
 * Compilation: g++ -std=c++14 -g -Wall word.cc fibonacci_words.cc -o fibonacci_words 
 */

#ifndef Word_H_
#define Word_H_

#include <iostream>
#include <string>
#include <fstream>

class Word{
 public :
    /**
     * @brief Determines if the string of the class is a Fibonacci word
     * @return True if the word is a Fibonacci word, also changes the position attribute
     */
    bool IsFibonacci(void);

    /// Returns the size of the string of the class
    std::size_t get_size(void);

    /// Returns the position of the word in the sequence, 0 if word_ is not a Fibonacci word
    int get_position(void);

    /// Setter for the attribute word_
    void set_word(std::string input_string);

 private:
    /// String to evaluate
    std::string word_;

    /// Position in the sequence, 0 if word_ is not a Fibonacci word
    int position_;
};

#endif  // Word_H_
