#include <iostream>

int main(){
    int dx, dy, k;
    std::cin>> dx >> dy >> k;

    char grid[dy][dx];
    for(int i = 0; i < dy; i++){
        for(int j = 0; j < dx; j++){
            grid[i][j] = '.';
        }
    }
    
    // print
    for(int i = 0; i < dy; i++){
        for(int j = 0; j < dx; j++){
            std::cout<< grid[i][j];
        }
        std::cout<<std::endl;
    }

    int exit;
    std::cin>>exit;
}