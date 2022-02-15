#pragma once
#include <assert.h>
#include <math.h>

class StaticTest
{
public:   
    static StaticTest* instance();
    static void finish();   
    
private:
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
    constexpr bool more(const _T& obj1, const _P& obj2)
    {
        return obj1>obj2;
    }
    
    template<typename _T, typename _P>
    constexpr bool less(const _T& obj1, const _P& obj2)
    {
        return obj1<obj2;
    }
    
    template<typename _T, typename _P>
    constexpr bool moreEqual(const _T& obj1, const _P& obj2)
    {
        return !less(obj1,obj2);
    }

    template<typename _T, typename _P>
    constexpr bool lessEqual(const _T& obj1, const _P& obj2)
    {
        return !more(obj1,obj2);
    }
    
    template<typename _T, typename _P>
    friend constexpr bool operator< (const _T& obj1, const _P& obj2)
    {
        return less(obj1, obj2);
    }
    
    template<typename _T, typename _P>
    friend constexpr bool operator> (const _T& obj1, const _P& obj2)
    {
        return more(obj1, obj2);
    }
    
    template<typename _T, typename _P>
    friend constexpr bool operator<= (const _T& obj1, const _P& obj2)
    {
        return lessEqual(obj1, obj2);
    }
    
    template<typename _T, typename _P>
    friend constexpr bool operator>= (const _T& obj1, const _P& obj2)
    {
        return moreEqual(obj1, obj2);
    }
    
private:
    StaticTest(){}
    StaticTest(const StaticTest& orig) = delete;
    StaticTest& operator=(const StaticTest&) = delete;
    ~StaticTest(){}
    
private:
    static StaticTest* m_instance;
};