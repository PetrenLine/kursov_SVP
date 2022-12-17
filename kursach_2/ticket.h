#ifndef TICKET_H
#define TICKET_H
#include "qdatetime.h"
#include "QString"


class Ticket
{
public:

    Ticket(QTime time, QString surname, QString name, QString patronymic, QDate date_birth, QString tel_number,
               QString pas_num, QString snils, QString num_polis, QString doctor, bool sex,QDate date);

    int id;
    QTime time;
    QString surname;
    QString name;
    QString patronymic;
    QDate date_birth;
    QString tel_number;
    QString pas_num;
    QString snils;
    QString num_polis;
    QString doctor;
    bool sex;
    QDate date;

private:
     static int counter_id;

};

#endif // TICKET_H
