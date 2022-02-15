#ifndef STATICTEST_H
#define STATICTEST_H

class StaticTest
{
public:
    template<typename _T, typename _P>
    bool checkEqual(const _T& obj1, const _P& obj2)
    {
        return static_assert(obj1==obj2);
    }
    
    template<typename _T, typename _P>
    bool checkEqual();
    
    
protected:
    static StaticTest* instance();
    static void finish();
    
private:
    StaticTest();
    StaticTest(const StaticTest& orig) = delete;
    StaticTest& operator=(const StaticTest&) = delete;
    ~StaticTest();
    
private:
    static StaticTest* m_instance;
};

#endif /* STATICTEST_H */

