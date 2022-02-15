#pragma once
#include <assert.h>

class StaticTest
{
public:
    template<typename _T, typename _P>
    constexpr void checkEqual(const _T& obj1, const _P& obj2)
    {
        assert(obj1 == obj2);
    }
    
    template<typename _T, typename _P>
    constexpr bool checkNotEqual(const _T& obj1, const _P& obj2)
    {
        return (!checkEqual(obj1,obj2));
    }
    
    template<typename _T, typename _P>
    constexpr bool moreThan(const _T& obj1, const _P& obj2)
    {
        return obj1>obj2;
    }
    
    template<typename _T, typename _P>
    constexpr bool lessThan(const _T& obj1, const _P& obj2)
    {
        return obj1<obj2;
    }
    
    static StaticTest* instance();
    static void finish();
    
private:
    StaticTest(){}
    StaticTest(const StaticTest& orig) = delete;
    StaticTest& operator=(const StaticTest&) = delete;
    ~StaticTest(){}
    
private:
    static StaticTest* m_instance;
};