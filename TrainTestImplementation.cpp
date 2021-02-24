//
// Created by Josiah Arroyo on 2/24/21.
//

#include "TrainTestImplementation.h"
#include <fstream>
#include <vector>
#include <iostream>
#include <cstring>
#include <sstream>
#include <string>
using namespace std;

TrainTestImplementation::TrainTestImplementation() {
    vector<Tweet> TweetList;
    vector<DSString> positiveWords;
    vector<DSString> negativeWords;
}

//store new tweet with its ID, content, and sentiment
Tweet TrainTestImplementation::createTweet(char* line, ifstream& trainingFile1, ifstream& trainingFile2) {
    line = new char[1000];
    DSString ID;
    DSString tweetContent;
    int sentiment;

    //store ID
    trainingFile1.getline(line, 1000, ',');
    ID = line;
    line = new char[1000];

    //skip date, no query, and ID
    trainingFile1.getline(line, 1000, ',');
    line = new char[1000];
    trainingFile1.getline(line, 1000, ',');
    line = new char[1000];
    trainingFile1.getline(line, 1000, ',');
    line = new char[1000];
    //store tweetContent
    trainingFile1.getline(line, 1000, ',');
    tweetContent = line;
    line = new char[1000];

    //store sentiment
    trainingFile2.getline(line, 1000, ',');
    //convert line to int
    sentiment = atoi(line);

    return Tweet(ID, tweetContent, sentiment);
}

void TrainTestImplementation::trainingData(vector<Word> &words) {
    ifstream trainingFile1;
    trainingFile1.open("test_dataset_10k.csv");
    char line[1000];

    for (int i = 0; i <= 10000; i++) {
        trainingFile1.getline(line, 1000, ',');
        DSString str;
        int count = 0;

    }

}