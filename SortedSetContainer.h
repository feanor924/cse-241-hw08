/* 
 * File:   SortedSetContainer.h
 * Author: caner
 *
 * Created on December 10, 2014, 9:03 PM
 */

#ifndef SORTEDSETCONTAINER_H
#define	SORTEDSETCONTAINER_H
#include "Container.h"
#include <iostream>
#include <vector>

namespace Contain{
      
    template<class T>
    class SortedSetContainer :public Container<T> {
    
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

#endif	/* SORTEDSETCONTAINER_H */

