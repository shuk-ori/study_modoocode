#include <iostream>
//<iostream> 을 사용하는 이유는 iostream 이 <ostream> 과 <istream> 을 모두 포함하고 있어서 편리하기 때문

#include "header1.h"
#include "header2.h"

//꺾인 괄호는 컴파일러마다 설정되어있는 경로에서 파일을 찾고
//큰따옴표는 작성 중인 코드가 있는 경로에서 파일을 찾습니다.

using header1::foo;
/*
namespace header1{
int func(){
    foo();
    header2::foo();
    return 0;
}

}
*/

int main(){

    int a = 10;
    int b = 100;
    std::cout << a+b << '\n';
    std::cout << "Hello, World!!!" << std::endl;
   
 //   foo(); //header1
 //   header2::foo();

    std::cout << "hi" << std::endl
              << "my name is "
              << "shuk-ori" << std::endl;

    int sum =0;
    for(int i=1; i<=10; i++)
    {
        sum += i;

    }
    std::cout << "sum : " << sum << std::endl;

    return 0;

}