#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(d<l){
	        std::cout << "Too Early" << std::endl;
	    }
	   else if(d>r){
	        std::cout << "Too Late" << std::endl;
	    }
	    else{
	        std::cout << "Take second dose now" << std::endl;
	    }
	}
	return 0;
}
