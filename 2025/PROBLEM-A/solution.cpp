#include <iostream>
#include <string>

typedef struct Node{
    int value;
    Node* left = nullptr;
    Node* right = nullptr;
} Node;


class Lexicographic{
    private:
    std::string* text;
    public:
    Lexicographic(std::string *text_) : text(text_) { }

    //swap the index i and index i+1 of the text
    void swamp(int first, int second){
        if (first > (*text).length() || first < 0) return;
        if (second > (*text).length() || second < 0) return;

        char temp = (*text)[first];
        (*text)[first] = (*text)[second];
        (*text)[second] = temp;
    }

    //for P[i] < P[i+1], R := { right of i } 
    //Find in R the mayor and minor of P[i] (P[j])
    //Swamp it (P[i], P[j])
    //Swamp all index before P[i] without the new P[i]
    void compareIndex(){  // O(2n)
        int i = 0; 
        for (int n = (*text).length()-1; n > 0; n--){  // n
            if (n+1 > (*text).length()) continue;
            if ((*text)[n] < (*text)[n+1]) {
                i = n;
                break;
            }
        }
        
        std::cout<<"Pivove en: "<<i<<" ; text[pivote]= "<<(*text)[i]<<std::endl;
        std::string sub_str = (*text).substr(i+1, (*text).length());
        int j = sub_str.length()-1;
        for (int n = 0; n < sub_str.length()-1; n++){  // n
            std::cout<<"temp: "<<sub_str[n]<<std::endl;
            if (sub_str[n] > (*text)[i] && sub_str[n] < sub_str[j]) j = n;
        }

        std::cout<<"Menor mayor: "<<j<<" ; text[j]= "<<(*text)[j]<<std::endl;
        std::cout<<"Subcadena: "<< sub_str <<std::endl;

        swamp(i, j);
        std::cout<<"Permutaion m+1: "<<(*text)<<std::endl;
    }
};

std::string text = "abcd";

int main(){
    Lexicographic l(&text);
    l.compareIndex();

    int i;
    std::cout<<"Salir: ";
    std::cin>>i;
}