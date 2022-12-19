#include "form_ticket.h"
#include "ui_form_ticket.h"

Form_ticket::Form_ticket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_ticket)
{
    ui->setupUi(this);
}

Form_ticket::~Form_ticket()
{
    delete ui;
}

void Form_ticket::slot_from_mainwindow(int id, QTime time, QString surname, QString name, QString patronymic, QDate date_birth, QString tel_number, QString pas_num, QString snils, QString num_polis, QString doctor, bool sex,QDate date)
{
    ui->label_date->setText(date.toString());
    ui->label_num_ticket->setText(QString::number(id));
    ui->label_time->setText(time.toString());
    ui->label_surname->setText(surname);
    ui->label_name->setText(name);
    ui->label_patronymic->setText(patronymic);
    ui->label_date_birth->setText(date_birth.toString());
    ui->label_tel_num->setText(tel_number);
    ui->label_pasport->setText(pas_num);
    ui->label_snils->setText(snils);
    ui->label_num_polus->setText(num_polis);
    ui->label_doctor->setText(doctor);

    if(sex == true ){
        ui->label_sex->setText("M");
    } else if(sex == false){
        ui->label_sex->setText("Ж");
    }
    this->show();


}

void Form_ticket::on_pushButton_clicked()
{
    this->close();
}



void Form_ticket::on_pushButton_print_clicked()
{
    QString path = "Talon.txt";

    QFile file(path);
    QTextStream out(&file);

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qDebug() << "Файл открыт";
        out << "Номер талона: " << ui->label_num_ticket->text() << "\n";
        out << "Фамилия: " << "Имя: " << "Отчество: " << "Дата рождения: " << "Пол пациента: " << "\n";
        out << ui->label_surname->text() << " " << ui->label_name->text()  << " " << ui->label_patronymic->text()  << " " << ui->label_date_birth->text()  << " "  << ui->label_sex->text() << "\n";
        out << "Контактный телефон: " << "Время записи: " << "Дата записи: " << "\n";
        out << ui->label_tel_num->text() << ui->label_time->text() << ui->label_date->text() << "\n";
        out << "Вы записаны к врачу: " << ui->label_doctor->text() << "\n";
        out << "Паспортные данные:  " << ui->label_pasport->text() << "\n";
        out << "Снилс:              " << ui->label_snils->text() <<"\n";
        out << "Номер страхового полюса: " << ui->label_num_polus->text() << "\n";
    }
}

