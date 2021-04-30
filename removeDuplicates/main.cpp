#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &myVec){
    auto myIter = myVec.begin();
	while(myIter != myVec.end()){
        if(*myIter == *(myIter+1)){
            myVec.erase(myIter);
            std::cout << " size: " << myVec.size() << std::endl;
            myIter = myVec.begin();
        }
        myIter++;
	}
}

void printVector(const std::vector<int> &vec){
    for(auto e : vec){
        std::cout << e;
    }
    std::cout << std::endl;
}

int main(){
	std::vector<int> myVec{1,1};
	printVector(myVec);
	removeDuplicates(myVec);
	std::cout << "-----------------------" << std::endl;
	printVector(myVec);
	return 0;
}
