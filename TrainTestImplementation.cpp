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

void TrainTestImplementation::trainingData(vector<Word>& words) {
    //open both files
    ifstream trainingFile1;
    ifstream trainingFile2;
    trainingFile1.open("test_dataset_10k.csv");
    trainingFile2.open("test_dataset_sentiment_10k.csv");
    char* lines = new char[1000];
    DSString str;

    for (int i = 1; i <= 10000; i++) {
        //fill the tweetList vector with the tweets
        //call createTweet to access the IDs, tweetContents, and the sentiments
        tweetList[i-1] = createTweet(lines, trainingFile1, trainingFile2);
    }

    //sort words into positive or negative
    for (int i = 0; i < 10000; i++) {
        //removes punctuation and stores each new word on a new line
        char* minusPunctuation = strtok(tweetList[i].getTweetContent().c_str(), ".,:;?()[]\"\'!_-/ ");
        /**
        for (int i = 0, len = tweetList[i].getTweetContent().getLength(); i < len; i++) {
            if (ispunct(tweetList[i].getTweetContent().c_str()[i]))
            {
                string temp =
                tweetList[i].getTweetContent().c_str().erase(i--, 1);
                len = text.size();
            }
        }
        char* minusPunctuation = text.erase(remove_if(0,tweetList[i].getTweetContent().getLength(),tweetList[i].getTweetContent().c_str()),tweetList[i].getTweetContent().getLength());
         **/
        //store the sentiment of the specific tweet
        int sentiment = tweetList.at(i).getSentiment();
        //while the tweet content is not empty
        while (minusPunctuation != NULL) {
            str = minusPunctuation;
            for (int j = 0; j < 10000; j++) {

            }
        }
    }
}