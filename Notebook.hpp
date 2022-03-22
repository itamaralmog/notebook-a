
#ifndef NOTEBOOK
#define NOTEBOOK

#include <string>
#include "Direction.hpp"
#include <vector>


namespace ariel{
    class Notebook{
        public: 
            std::vector<std::vector<std::vector<char>>> * note_mat;
            bool exist;
            Notebook(){
                this-> exist = true;
                this-> note_mat = new std::vector<std::vector<std::vector<char>>>();
            }
            ~Notebook(){
                delete this-> note_mat;
            }
            void write(int x,int y, int z, Direction direct,const std::string &str);
            static std::string read(int x, int y, int z, Direction direct,int length);
            void erase(int x,int y, int z, Direction direct, int length);
            void show(int page);

    };
}


#endif