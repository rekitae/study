#include <iostream>

class DynamicSingleton
{
private:
    DynamicSingleton() {}
    static DynamicSingleton *inst;
    int age;
  public:
    static DynamicSingleton *getInstance()
    {
        if (!inst)
          inst = new DynamicSingleton;
        return inst;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};

DynamicSingleton *DynamicSingleton::inst = nullptr;

int foo()
{
    return DynamicSingleton::getInstance()->getAge();
}

int main()
{
    DynamicSingleton *s = DynamicSingleton::getInstance();
    s->setAge(50);
    
    std::cout << "Hello World! , ";
    std::cout << DynamicSingleton::getInstance()->getAge() << " , " << foo();

    return 0;
}
