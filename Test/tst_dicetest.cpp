#include <QtTest>
#include <QCoreApplication>

// add necessary includes here

class DiceTest : public QObject
{
    Q_OBJECT

public:
    DiceTest();
    ~DiceTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

DiceTest::DiceTest()
{

}

DiceTest::~DiceTest()
{

}

void DiceTest::initTestCase()
{

}

void DiceTest::cleanupTestCase()
{

}

void DiceTest::test_case1()
{

}

QTEST_MAIN(DiceTest)

#include "tst_dicetest.moc"
