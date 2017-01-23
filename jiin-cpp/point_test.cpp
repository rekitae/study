#include <iostream>
int main()
{
        // *age 는 메모리에 있는 값을 가르킨다.
        // age 는 메모리 주소를 가르킨다.
        int *age = new int;
        int *age2;
 
 
        *age = 30; // *age 값을 30으로 변경
        std::cout << "1 - " << *age << "\n";
 
 
        // age2는 메모리를 할당 받지 못해서 사용할 수 없는 int point 일 뿐이다.
        // 아래와 같이 하면 실행중 "Segmentation fault" 가 발생한다.
        // *age2 = 10;
        // age2 는 이제부터 age 와 같은 주소를 바라 본다.
        age2 = age;
 
 
        *age = 50;
        std::cout << "2 - " << age << "\n";
        std::cout << "2 - " << age2 << "\n";

 
        *age2 = 70;
        std::cout << "3 - " << *age << "\n";
        std::cout << "3 - " << *age2 << "\n";

 
        char *s = new char[5];
        s[0] = 'a';
        s[1] = 'b';
        s[2] = 'c';
        s[3] = 'd';
        //s[4] = 'e';

 
        std::cout << s << ".\n";

        char *s2;
        char *s3;
        s2 = &s[1];
        s3 = s+2;
 
 
        std::cout << s2 << ".\n";
        std::cout << s3 << ".\n";

        int *i = new int[5];
        i[0] = 1;
        i[1] = 2;
        i[2] = 3;
        i[3] = 4;
        
        int *i2;
        int *i3;
        i2 = &i[1];
        i3 = i+2;
        
        std::cout << *i << ".\n";
        std::cout << *i2 << ".\n";
        std::cout << *i3 << ".\n";


        delete age;
        delete s;
 
 
        return 0;
}