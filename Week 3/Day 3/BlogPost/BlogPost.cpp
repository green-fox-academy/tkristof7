//
// Created by tothk on 2019. 04. 17..
//

#include "BlogPost.h"
#include <string>

BlogPost::BlogPost(std::string authorName, std::string title, std::string text,
                   std::string publicationDate) : authorName(authorName), title(title), text(text),
                                                  publicationDate(publicationDate) {}

std::string BlogPost::getAuthorName() {
    return authorName;
}

void BlogPost::setAuthorName(std::string authorName) {
    BlogPost::authorName = authorName;
}

std::string BlogPost::getTitle() {
    return title;
}

void BlogPost::setTitle(std::string title) {
    BlogPost::title = title;
}

std::string BlogPost::getText() {
    return text;
}

void BlogPost::setText(std::string text) {
    BlogPost::text = text;
}

std::string BlogPost::getPublicationDate() {
    return publicationDate;
}

void BlogPost::setPublicationDate(std::string publicationDate) {
    BlogPost::publicationDate = publicationDate;
}

