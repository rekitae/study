#include <iostream>

class Singleton {
  private:
    Singleton() {}
    Singleton(const Singleton& other);
    static Singleton inst;
    int age;
  public:
    static Singleton& getInstance() { return inst; }
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};

Singleton Singleton::inst;

int foo()
{
    return Singleton::getInstance().getAge();
}

int main()
{
    Singleton::getInstance().setAge(10);
    
    std::cout << "Hello World! , ";
    std::cout << Singleton::getInstance().getAge() << " , " << foo();

    return 0;
}
