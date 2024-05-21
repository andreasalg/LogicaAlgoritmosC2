#define MAXSTR 60
#define MAXREG 1000

typedef struct PERSON{
    char cif[MAXSTR];
    char name[MAXSTR];
    char lastName[MAXSTR];
    int year;
};

PERSON people[MAXREG];

int pos = 0;
  