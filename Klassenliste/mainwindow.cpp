#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QShortcut>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->liste = this->ui->listNames;      // um nicht immer ->ui schreiben zu müssen
    //this->ui->leditName->setPlaceholderText(tr("anderer Text"));

    //shortcut anlegen
    auto shortcutDelete = new QShortcut(Qt::Key_Delete, this->liste);
    //shortcut connecten
    connect(shortcutDelete, SIGNAL(activated()), this, SLOT(DeletePressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNameFromFieldToList()
{
    //Name aus LineEdit feld holen und Leerzeichen am Anfang und Ende entfernen
    auto name = this->ui->leditName->text().trimmed();
    //Name zur Liste hinzufügen
    this->ui->listNames->addItem(name);
    // LineEdit Feld Leeren
    this->ui->leditName->clear();
}

void MainWindow::sortList()
{
    //sortiere die liste aufsteigend
    this->liste->sortItems(Qt::SortOrder::AscendingOrder);
}

void MainWindow::clearList()
{
    int i = 0;
    for(i = this->liste->count(); i>0; i--)
    {
        this->liste->takeItem(0);
    }

    //this->liste->clear();    //einfachere möglichkeit
}

void MainWindow::on_buttonAdd_clicked()
{
    this->addNameFromFieldToList();
}

void MainWindow::on_buttonSort_clicked()
{
    this->sortList();
}

void MainWindow::on_leditName_returnPressed()
{
    this->addNameFromFieldToList();
}


void MainWindow::on_buttonClear_clicked()
{
    this->clearList();
}

void MainWindow::DeletePressed()
{
    //Lösche ausgeählten Namen von der Liste
    delete this->liste->currentItem();
}

void MainWindow::on_buttonSave_clicked()
{
    //Liste aus der Datei speichern
    QFile file("liste.txt");
    //Wenn öffnen der Datei erfolgreich
    //Nur schreibzugriff -> WirteOnly
    //Inhalt der Datei überschreiben -> Truncate
    if(file.open(QFile::WriteOnly| QFile::Truncate | QFile::Text))
    {
        //schreibe liste in Datei
        //Öffne TextStream
        QTextStream out(&file);
        //Schleife über alle Elemnte der Liste
        for(int i=0; i<this->liste->count();++i)
        {
            out << this->liste->item(i)->text() << "\n";
        }
        // wirklich in datei schreiben
        file.flush();
        //Datei schließen !!NICHT VERGESSEN!!
        file.close();
    }
}

void MainWindow::on_buttonOpen_clicked()
{
    //Liste aus der Datei öffnen
    QFile file("liste.txt");
    //Wenn öffnen der Datei erfolgreich
    if(file.open(QFile::ReadOnly | QFile::Text))
    {
        //Liste löschen
        this->liste->clear();
        //Lese aus datei in Liste
        QTextStream in(&file);
        while(!in.atEnd())
        {
            this->liste->addItem(in.readLine().trimmed());
        }

    //File schließen
    file.close();

    }
}

