// до 1ва задача д)

#include <iostream>
#include <cstring>
using namespace std;
struct Book{
char title[100];
char author[100];
char genre[100];
char ISBN[100];
int Pages;
double prize;
};
void printBook(Book first)
{
    cout<<"title: "<<first.title<<endl;
    cout<<"author: "<<first.author<<endl;
    cout<<"genre: "<<first.genre<<endl;
    cout<<"ISBN: "<<first.ISBN<<endl;
    cout<<"PAGES : "<<first.Pages<<endl;
    cout<<"PRize : "<<first.prize<<" leva"<<endl;
}
void initBook(Book& book,char* title,char*author,char*genre,char*ISBN,int Pages,double prize)
{
    strcpy(book.title, title);
    strcpy(book.author,author);
    strcpy(book.genre,genre);
    strcpy(book.ISBN,ISBN);
    book.Pages = Pages;
    book.prize = prize;
}

bool sameAuthor(Book first,Book second)
{
   int x = strlen(first.author);
    bool flag = true;
    for(int i =0;i<x;i++)
    {
        if(first.author[i]==second.author[i]) continue;
        else
        {
            flag=false;
            break;
        }

    }
    return flag;

}

int countPrize(Book* book,int size = 10)
{
    int sumPrize=0;
    for(int i =0 ;i<10;i++)
    {
        sumPrize=sumPrize + book[i].prize;
    }
    return sumPrize;
}

int lowPrize(Book* book,int size)
{
    int minPrize = book[0].prize;
    for(int i=0;i<size;i++)
    {

        if(minPrize<book[i].prize)
        {
            continue;
        }
        else minPrize = book[i].prize;

    }


return minPrize;
}

int countGenre(Book* book ,int size,char* genre)
{
    int countBooks=0;
    for(int i=0;i<size;i++)
    {
        if(strcmp(book[i].genre,genre)==0) countBooks++;
    }

    return countBooks;
}
int main()
{
    Book first;
    Book second;

    initBook(first,"Pod Igoto","Ivan Vazov","roman","143214124",681,11);
    initBook(second,"Pod Indigoto","Ivan Vazov","roman","143214124",112,10);
    //cout<<(sameAuthor(first,second)?"edin avtor":"razl.avtori");
    Book book[2]={first,second};
    int size = 2;
    char genre[20]="roman";
    //cout<<lowPrize(book,size );
    cout<<countGenre(book,size,genre);
    return 0;
}
