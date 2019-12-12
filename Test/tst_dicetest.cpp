#include <QtTest>
#include <QCoreApplication>
#include "dice.h"

// add necessary includes here

class DiceTest : public QObject
{
    Q_OBJECT
private:
    Dice m_roller;

public:
    DiceTest();
    ~DiceTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case2();
    void test_case4();
    void test_case6();
    void test_case8();
    void test_case10();
    void test_case12();
    void test_case20();
    void test_case100();
    void test_case7();

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

void DiceTest::test_case2()
{
    QVERIFY(m_roller.isStandard(2));
    auto result = m_roller.roll(2,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 2);
    result = m_roller.roll(2, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 2*5 && it >= 5);
}

void DiceTest::test_case4()
{
    QVERIFY(m_roller.isStandard(4));
    auto result = m_roller.roll(4,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 4);

    result = m_roller.roll(4, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 4*5 && it >= 5);
}

void DiceTest::test_case6()
{
    QVERIFY(m_roller.isStandard(6));
    auto result = m_roller.roll(6,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 6);

    result = m_roller.roll(6, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 6*5 && it >= 5);
}

void DiceTest::test_case8()
{
    QVERIFY(m_roller.isStandard(8));
    auto result = m_roller.roll(8,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 8);

    result = m_roller.roll(8, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 8*5 && it >= 5);
}

void DiceTest::test_case10()
{
    QVERIFY(m_roller.isStandard(10));
    auto result = m_roller.roll(10,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 10);

    result = m_roller.roll(10, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 10*5 && it >= 5);

}

void DiceTest::test_case12()
{
    QVERIFY(m_roller.isStandard(12));
    auto result = m_roller.roll(12,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 12);

    result = m_roller.roll(12, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 12*5 && it >= 5);

}

void DiceTest::test_case20()
{
    QVERIFY(m_roller.isStandard(20));
    auto result = m_roller.roll(20,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 20);

    result = m_roller.roll(20, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 20*5 && it >= 5);

}

void DiceTest::test_case100()
{
    QVERIFY(m_roller.isStandard(100));
    auto result = m_roller.roll(100,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 100);

    result = m_roller.roll(100, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 100*5 && it >= 5);

}

void DiceTest::test_case7()
{
    QVERIFY(!m_roller.isStandard(7));
    auto result = m_roller.roll(7,1, 1000);
    for(auto it: result)
        QVERIFY(it <= 7);

    result = m_roller.roll(7, 5, 1000);

    for(auto it: result)
        QVERIFY(it <= 7*5 && it >= 5);

}

QTEST_MAIN(DiceTest)

#include "tst_dicetest.moc"
