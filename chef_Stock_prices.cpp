#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    float s,a,b,c;
	    std::cin >> s>>a>>b>>c;
	    int inc =s+(c*s)/100;
	    if(inc>=a && inc<=b){
	        std::cout << "yes" << std::endl;
	    }
	    else{
	        std::cout << "no" << std::endl;
	    }
	}
	return 0;
}
