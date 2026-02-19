#include <iostream>
// using namespace std;s
int main(){
    int n;
    std::cout<<"Enter the no.of stars to be printed in one side of the square : "<<"\n";
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
    return 0;
}

