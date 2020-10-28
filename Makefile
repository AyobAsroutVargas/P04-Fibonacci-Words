CXX = g++
CXXFLAGS = -std=c++14 -g -Wall

fibonacci_words: fibonacci_words.o word.o
	$(CXX) $(CXXFLAGS) -o $@ $^

word.o: word.cc word.h
	$(CXX) -c word.cc

fibonacci_words.o: fibonacci_words.cc word.h
	$(CXX) -c fibonacci_words.cc

clean:
	rm *.o output.txt
  
