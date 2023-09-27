#include <stdio.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
struct Book
{
  char title[MAX_TITLE_LENGTH];
  char author[MAX_AUTHOR_LENGTH];
  int year;
  float price;
};
struct Library
{
  char name[50];
  char location[50];
  int numBooks;
  struct Book books[MAX_BOOKS];
};

int main()
{
  struct Library librarys[100];
  int i;
  for (int a = 0; a < 100; a++)
  {
    for (i = 0; i < MAX_BOOKS; i++)
    {
      if (librarys[a].books[i].year > 2015)
      {
        printf("%s - ", librarys[a].name);
        printf("%s\n", librarys[a].books[i].title);
      }
    }
  }
}
