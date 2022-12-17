#ifndef FORM_TICKET_H
#define FORM_TICKET_H

#include <QDialog>
#include <QTime>
#include <QString>
#include <QDate>
#include <fstream>
#include <QFile>
#include <QTextStream>
namespace Ui {
class Form_ticket;
}

class Form_ticket : public QDialog
{
    Q_OBJECT

public:
    explicit Form_ticket(QWidget *parent = nullptr);
    ~Form_ticket();
public slots:
    void slot_from_mainwindow(int id, QTime time, QString surname, QString name, QString patronymic, QDate date_birth, QString tel_number, QString pas_num, QString snils, QString num_polis, QString doctor, bool sex, QDate date);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_print_clicked();

private:
    Ui::Form_ticket *ui;
};

#endif // FORM_TICKET_H

