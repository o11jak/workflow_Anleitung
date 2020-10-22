#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

private:
    void addNameFromFieldToList();
    QListWidget *liste;
    void sortList();
    void clearList();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonAdd_clicked();

    void on_buttonSort_clicked();

    void on_leditName_returnPressed();

    void on_Clear_clicked();

    void on_buttonClear_clicked();

    void DeletePressed();

    void on_buttonOpen_clicked();

    void on_buttonSave_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
