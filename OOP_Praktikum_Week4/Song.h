#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Song{
    private:
        char* Name;
        char* Singer;
        char* Genre;
        double Time;

        public:

            Song(char* Name= "Bqla Roza", char* Singer="slavka kalcheva", char* Genre="hit", double Time=3);

            char* getName();
            char* getSinger();
            char* getGenre();
            double getTime();

            void setName(const char* Name) ;
            void setSinger(const char* Singer) ;
            void setGenre(const char* Genre) ;
            void setTime (const double Time) ;


        Song(const Song& other);
        Song& operator=(const Song& other);

};
