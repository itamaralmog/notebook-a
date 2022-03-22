#include "doctest.h"
#include "Notebook.hpp"
#include "Direction.hpp"

using namespace ariel;

TEST_CASE("writing and reading"){
    Notebook * n = new Notebook();

    n ->write(0,0,0,Direction::Vertical,"abcde");
    for(int i = 0 ; i < 25 ; i++){
        CHECK(n->read(0,0,0,Direction::Vertical,2).compare("ab")==0);
    }
}