#ifndef LANGAGE_H
#define LANGAGE_H

#include <QTranslator>
#include <QApplication>
#include <QObject>
#include <QDebug>
#include <QMessageBox>

class Langage: public QObject
{
    Q_OBJECT
private:
    QTranslator* m_currentLanguage;

public:
    Langage(QObject* = 0);
    ~Langage();
    void initTranslator();
    void deleteTranslator();
    void change (QString);

signals:
    void s_languageChange();
};

#endif // LANGAGE_H
