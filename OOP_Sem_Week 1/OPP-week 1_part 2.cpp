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
void initBook(Book& book,char* title,char*author,char*genre,char*ISBN,int Pages,double prize)
{
    strcpy(book.title, title);
    strcpy(book.author,author);
    strcpy(book.genre,genre);
    strcpy(book.ISBN,ISBN);
    book.Pages = Pages;
    book.prize = prize;
}
int maxPages(Book* book ,int  size)
  {
    int maxPages = book[0].Pages;
       for(int i=0;i<size;i++)
       {
        if(book[i].Pages>maxPages) maxPages = book[i].Pages;
       }
        return maxPages;

   }

int checkISBN(Book* book,int size,char* ISBN)
{
    for(int i = 0 ;i<size;i++)
    {
        if(strcmp(book[i].ISBN,ISBN)==0) return i;
    }
    return -1;



}

int main()
{
     Book first;
    Book second;

    initBook(first,"Pod Igoto","Ivan Vazov","roman","143214124",681,11);
    initBook(second,"Pod Indigoto","Ivan Vazov","roman","14300024",700,10);
    //cout<<(sameAuthor(first,second)?"edin avtor":"razl.avtori");
    Book book[2]={first,second};
    int size = 2;
    char ISBN[40]="gg";
    //cout<<maxPages(book,size);
    cout<<checkISBN(book,size,ISBN);


    return 0;
}
