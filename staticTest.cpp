#include "staticTest.h"

StaticTest* StaticTest::m_instance = nullptr;

StaticTest* StaticTest::instance()
{
    if(m_instance == nullptr)
    {
        m_instance = new StaticTest();
    }
    
    return m_instance;
}

void StaticTest::finish()
{
    delete m_instance;
    m_instance = nullptr;
}
