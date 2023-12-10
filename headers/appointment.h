#ifndef APPOINTMENT_H
# define APPOINTMENT_H

#include <string.h>
#include <ctype.h>
#include "cell.h"

typedef struct s_date
{
    int year;
    int month;
    int day;
}t_date;

typedef struct s_time
{
    int hour;
    int minute;
}t_time;

typedef struct s_appointment
{
    t_date date;
    t_time start;
    t_time length;
    char *purpose;
}t_appointment;

typedef struct s_cell_apt
{
    t_appointment apt;
    int level;
    struct s_cell_apt **next;
}t_cell_apt;

typedef struct s_list_apt
{
    int maxlevel;
    t_cell_apt **head;
} t_list_apt;

typedef struct s_contact
{
    char *surname;
    char *firstname;
    char *conc_name;
    t_list_apt appointments;
}t_contact;

typedef struct s_cell_cnt
{
    t_contact *contact;
    int level;
    struct s_cell_cnt **next;
}t_cell_cnt;

typedef struct s_list_contact
{
    int maxlevel;
    t_cell_cnt **head;
}t_list_contact;

typedef struct s_calendar
{
    t_list_contact *list_cnt;
}t_calendar;

t_list_apt* createEmptyAptList(int maxlevel);
t_list_contact* createEmptyCntList(int maxlevel);
t_cell_cnt* createCellCnt(int level, t_contact* contact);
char *scanString();
t_contact* scanContact();
char *concUnderscore(char *string1, char *string2);
char *strlower(char *string);
void displayContact(t_contact* contact);
void displayLevelCnt(t_list_contact* list,int level);
void insertContact(t_list_contact *list, t_contact* contact);
void displayAllLevelCnt(t_list_contact* list);

#endif