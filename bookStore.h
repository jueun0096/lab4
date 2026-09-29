#pragma once
#include "book.h"

namespace KimJueun2649073
{

    class bookStore
    {
        book b {};
        bool avaliable {};

    public:
        bookStore(book b0 = book{1,0}, bool a0 = false)
            : b {b0}, avaliable{a0}{}
        
        void print () const //bookStore::print()
        {
            b.print(); //book::print() - id, price
            if (avaliable)
                std::cout << " avaliable\n";
            else 
                std::cout << " NOT avaliable\n";
        }
        const book& getBook () const { return b; }
        void setBook (const book& b0) { b = b0; }
    };

}