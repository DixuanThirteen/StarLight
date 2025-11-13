#include "hello.h"

void HELLO::say_hello()
{
    cout << "Hello world" << endl;

}

int main()
{
    HELLO my_hello;
    my_hello.say_hello();

    system("pause");
    return 0;
}