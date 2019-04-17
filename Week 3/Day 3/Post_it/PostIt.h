//
// Created by tothk on 2019. 04. 17..
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H

#include <string>


class PostIt {
public:
    PostIt(std::string backgroundColor, std::string text, std::string textColor);

    std::string getBackgroundColor();

    void setBackgroundColor(std::string &backgroundColor);

    std::string getText();

    void setText(std::string text);

    std::string getTextColor();

    void setTextColor(std::string textColor);

private:
    std::string backgroundColor;
    std::string text;
    std::string textColor;

};


#endif //POST_IT_POSTIT_H
