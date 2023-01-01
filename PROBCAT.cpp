#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x>=1 && x<100){
	        std::cout << "Easy" << std::endl;
	    }
	   else if(x>=100 && x<200){
	        std::cout << "Medium" << std::endl;
	    }
	    else{
	        std::cout << "Hard" << std::endl;
	    }
	    
	}
	return 0;
}