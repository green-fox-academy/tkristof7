//
// Created by tothk on 2019. 04. 17..
//

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

#include <string>

class BlogPost {


public:
    BlogPost(std::string authorName, std::string title, std::string text, std::string publicationDate);


    std::string getAuthorName();

    void setAuthorName(std::string authorName);

    std::string getTitle();

    void setTitle(std::string title);

    std::string getText();

    void setText(std::string text);

    std::string getPublicationDate();

    void setPublicationDate(std::string publicationDate);

private:
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;
};

#endif