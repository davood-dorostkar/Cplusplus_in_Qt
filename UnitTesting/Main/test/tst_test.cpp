#include <QtTest>
#include "../app/myclass.h"
// add necessary includes here

class test : public QObject
{
    Q_OBJECT
    myclass *a;
public:
    test();
    ~test();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_myfunc();
};

test::test()
{

}

test::~test()
{

}

void test::initTestCase()
{

}

void test::cleanupTestCase()
{

}

void test::test_myfunc()
{
    QCOMPARE(a->myfunc(),1);
}



QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
