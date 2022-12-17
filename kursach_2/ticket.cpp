#include "ticket.h"

 int Ticket::counter_id = 1;

Ticket::Ticket(QTime time, QString surname, QString name, QString patronymic, QDate date_birth, QString tel_number, QString pas_num, QString snils, QString num_polis, QString doctor, bool sex, QDate date)
{
    this->id = counter_id;
    counter_id++;
    this->time = time;
    this->surname = surname;
    this->name = name;
    this->patronymic = patronymic;
    this->date_birth = date_birth;
    this->tel_number = tel_number;
    this->pas_num = pas_num;
    this->snils = snils;
    this->num_polis = num_polis;
    this->doctor = doctor;
    this->sex = sex;
    this->date = date;
}
