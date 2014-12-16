/* 
 * File:   SortedContainer.h
 * Author: caner
 *
 * Created on December 10, 2014, 9:03 PM
 */

#ifndef SORTEDCONTAINER_H
#define	SORTEDCONTAINER_H
#include <iostream>
#include <vector>
#include "Container.h"

using Contain::Container;

namespace Contain{

    template<class T>
    class SortedContainer :public Container<T> {
    
        public:
            
            virtual void add(const T& element) throw(mistake);
            virtual void remove(const T& element) throw(mistake);
            virtual int search(const T& element);
            virtual T first();
            virtual T next();
            virtual bool empty();
            virtual int size();
    
        private:


    };
    
}

#endif	/* SORTEDCONTAINER_H */

