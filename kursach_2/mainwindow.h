#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "form_ticket.h"
#include <QMessageBox>
#include <QChar>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool check_all(QString surname, QString name, QString patronymic, QString tel_number, QString pas_num, QString snils,QString num_polis);

    Form_ticket *form_2 = nullptr;
private slots:
    void on_pushButton_zapisatsa_clicked();
signals:
    void signal_to_ticket(int, QTime, QString, QString, QString, QDate, QString, QString, QString, QString, QString, bool, QDate);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

