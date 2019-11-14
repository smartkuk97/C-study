// PracticeCpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


// C++ 간단 정리

#include <iostream>  // C의 stdio.h 와 비슷   .h 가 붙지 않음

//using namespace std;  // std의 모든것 std 없이 사용 안쓰는게 좋음 겹칠숟도있으니

int main()
{
    std::cout << "Hello World!\n" << std::endl;
	

	// std:: 의 정체 
	// std는 c++표준 라이브러리의 모든함수, 객체 등이 정의된 이름공간(namespace)  어디 소속인지 지정해주는것

	// ********namspace 
	  // 아래 처럼 선언
	/*namespace header1 { 
		int foo();
		void bar();
		foo(); 자기자신 안에서는 마음대로
	}
	header1::foo(); 밖에서는 namespace 같이
	namespace header2 {
		int foo();
		void bar();
		header1::foo(); 다른 namespace 있는 것 실행
	}
	
	//////
	using header1::foo;   무조건 foo는 저거만 쓸거다 선언도 가능
	그러면 foo() namespace 없이 사용
	using namespace header1; 요렇게 쓰면 header1의 모든것 사용
    /////

	namespace {
		
		int OnlyInThisFile() {}

	}
	이름 없이 쓰면 static 처럼 사용 공간안에서만 사용할수 있음 접근을 못함

	*/

	// ******* 변수 선언 
	// C는 항상 최상단에서 변수 선업 
	// C++은 사용하기 직전 어느 위치도 관계 없음
 
	// ******* 함수의 차이
	
	// C
	// int change_val(int *p) { *p =3; return 0;}   사용 : change_val(&number);
	// C++ 레퍼런스 (참조자, 다른이름)
	// int change_val(int &p} { p = 3; return 0;}   사용 : change_val(number);    &p 라는것은 number의 다른이름이 p 다 라는 의미로 됨 

	// 레퍼런스의 선언 
	// int& ref = number; 별명을 지어준것과 같은 의미
	// int& ref; 이건 안됨 반드시 초기화, 별명부를 놈이 있어야함
	// ref는 int* const 와 같은 형태로 한번 지정되면 절대 바꿀수 없음




}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴


