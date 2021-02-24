#include <iostream>
#include <fstream>
#include "TrainTestImplementation.h"



int main() {
    TrainTestImplementation data;
    vector<Word> words;
    data.trainingData(words);

    return 0;

    std::cout << "Hello, World!" << std::endl;
    /**
    std::ofstream fout("output01.txt");
    fout << "Hello world!" << std::endl;
    fout.close();
    return 0;
     **/
}
