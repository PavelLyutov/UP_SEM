#include "Song.h"

Song::Song(char* Name, char* Singer, char* Genre, double Time)
 :Name(NULL), Singer(NULL), Genre(NULL)
{
    setName(Name);
    setSinger(Singer);
    setGenre(Genre);
    setTime(Time);
}
Song::Song(const Song& other)
 :Name(NULL), Singer(NULL), Genre(NULL)
{
    setName(other.Name);
    setSinger(other.Singer);
    setGenre(other.Genre);
    setTime(other.Time);
}
char* Song::getName()
{
    return Name;
}
char* Song::getSinger()
{
    return Singer;
}
char* Song::getGenre()
{
    return Genre;
}
double Song::getTime()
{
    return Time;
}

void Song::setName(const char* newName)
{
    delete[] this-> Name ;
    if (newName != NULL)
    {
        int len=strlen(newName);
        this-> Name=new char[len+1];
        strcpy(this->Name,newName);
    }
    else
    {
     this-> Name= new char[1];
     this-> Name[0]='\0';
    }

}
void Song::setSinger (const char* newSinger)
{
    delete[] this-> Singer ;
    if (newSinger != NULL)
    {
        int len=strlen(newSinger);
        this-> Singer=new char[len+1];
        strcpy(this->Singer,newSinger);
    }
    else
    {
     this-> Singer= new char[1];
     this-> Singer[0]='\0';
    }
}
void Song::setGenre (const char* newGenre)
{
    delete[] this-> Genre ;
    if (newGenre != NULL)
    {
        int len=strlen(newGenre);
        this-> Genre=new char[len+1];
        strcpy(this->Genre,newGenre);
    }
    else
    {
     this-> Genre= new char[1];
     this-> Genre[0]='\0';
    }
}
void Song::setTime(const  double newTime)
{
    Time=newTime;
}
Song& Song::operator=(const Song& other)
{
    if(this==&other)
    {
    setName(other.Name);
    setSinger(other.Singer);
    setGenre(other.Genre);
    setTime(other.Time);
    return *this;
    }
}

