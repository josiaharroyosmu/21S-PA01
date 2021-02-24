//
// Created by Josiah Arroyo on 2/24/21.
//

#ifndef INC_21S_PA01_TRAINTESTIMPLEMENTATION_H
#define INC_21S_PA01_TRAINTESTIMPLEMENTATION_H

#include "Tweet.h"
#include <vector>
#include <iostream>

using namespace std;

class TrainTestImplementation {
private:
    vector<Tweet> tweetList;
    vector<DSString> positiveWords;
    vector<DSString> negativeWords;
public:
    TrainTestImplementation();
    Tweet createTweet(char* line, ifstream& trainingFile1, ifstream& trainingFile2);
    void trainingData(vector<Word>& words);





};


#endif //INC_21S_PA01_TRAINTESTIMPLEMENTATION_H
