// CMD
// g++ foo.cpp && .\a.exe
// g++ foo.cpp && a
// g++ foo.cpp && a.exe
// g++ foo.cpp -o foo.out && foo.out
// g++ foo.cpp -o foo.out && .\foo.out

// VSCode
// g++ foo.cpp ; ./a.exe
// g++ foo.cpp ; .\a.exe

#include <iostream>
#include <vector>
#include <thread>
// using namespace std;

void show() {
std::cout << "concaksiu" << std::endl;
}

int cal(int a, int b) {
return a+b;
}



int main() {
	// show();
	std::thread t1(show);
	if(t1.joinable()) {
		t1.join();
	}
	// t1.detach();
	std::cout << cal(7,8) << std::endl;
	return 0;
}
