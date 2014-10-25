#include "langage.h"

Langage::Langage(QObject * parent): QObject(parent), m_currentLanguage(nullptr)
{
    initTranslator();
}

Langage::~Langage()
{
    deleteTranslator();
}

void Langage::initTranslator()
{
    if(m_currentLanguage == nullptr)
    {
        m_currentLanguage = new QTranslator;
        if(!m_currentLanguage->load(QApplication::applicationDirPath()+"/"+
                                QLocale::languageToString(QLocale::system().language())+".qm"))
        {
            m_currentLanguage->load(QApplication::applicationDirPath()+"/"+
                                            QLocale::languageToString(QLocale::English)+".qm");
        }
        QApplication::instance()->installTranslator(m_currentLanguage);
    }
}

void Langage::deleteTranslator()
{
    if(m_currentLanguage != nullptr)
    {
        QApplication::instance()->removeTranslator(m_currentLanguage);
        delete m_currentLanguage;
    }
}

void Langage::change(QString l)
{
    m_currentLanguage->load(QApplication::applicationDirPath()+"/"+l+".qm");
    emit s_languageChange();
}
