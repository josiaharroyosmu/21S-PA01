//
// Created by Josiah Arroyo on 2/22/21.
//

#ifndef INC_21S_PA01_TWEET_H
#define INC_21S_PA01_TWEET_H

#include "Word.h"
#include <vector>


class Tweet {
private:
    DSString ID;
    DSString tweetContent;
    int sentiment;
public:
    Tweet();
    Tweet(DSString ID, DSString tweetContent, int sentiment);
    DSString getID();
    void setID(DSString ID);
    DSString getTweetContent();
    void setTweetContent(DSString tweetContent);
    int getSentiment();
    void setSentiment(int sentiment);
};


#endif //INC_21S_PA01_TWEET_H
