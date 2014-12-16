/* 
 * File:   SortedSetContainer.cpp
 * Author: caner
 * 
 * Created on December 10, 2014, 9:03 PM
 */

#include "SortedSetContainer.h"
#include <algorithm>
#include <iostream>
#include <vector>

namespace Contain{

    template<class T>
    void SortedSetContainer<T>::add(const T& element) throw(mistake){

        int sizee=Container<T>::vec.size();
        
        Container<T>::vec.push_back(element);
        if ( sizee == Container<T>::vec.size() )
            throw mistake();
        Container<T>::duplicate(Container<T>::vec);
        sort(Container<T>::vec.begin(),Container<T>::vec.end());
    
    }
    
    template<class T>
    void SortedSetContainer<T>::remove(const T& element) throw(mistake){
       
        int sizee=Container<T>::vec.size();
        
        Container<T>::duplicate(Container<T>::vec);
        sort(Container<T>::vec.begin(),Container<T>::vec.end());
        
        for (int i=0;i<Container<T>::vec.size(); ++i){
            if ( element == Container<T>::vec[i] )
                Container<T>::vec.erase(Container<T>::vec.begin()+i);
        }
        
        if ( sizee == Container<T>::vec.size() )
            throw mistake();
    
    }
    
    template<class T>
    int SortedSetContainer<T>::search(const T& element){
        int s;
        int k=0;
        Container<T>::duplicate(Container<T>::vec);
        sort(Container<T>::vec.begin(),Container<T>::vec.end());
        
        for (int i=0;i<Container<T>::vec.size(); ++i){
            if ( element == Container<T>::vec[i] ){
                s=i;
                ++k;
                break;
            }
        }
        if ( k > 0)
            return s;
        else 
            return 0;
    }

    template<class T>
    T SortedSetContainer<T>::first(){
        
        Container<T>::duplicate(Container<T>::vec);
        
        sort(Container<T>::vec.begin(),Container<T>::vec.end());
        
        Container<T>::call += 1;
        
        return Container<T>::vec[0];
    }
    
    template<class T>
    T SortedSetContainer<T>::next(){
        
        Container<T>::duplicate(Container<T>::vec);
        
        sort(Container<T>::vec.begin(),Container<T>::vec.end());
        
        return Container<T>::vec[Container<T>::call]; 
    }
    
    template<class T>
    int SortedSetContainer<T>::size(){
        
        return Container<T>::vec.size();
    
    }
    
    template<class T>
    bool SortedSetContainer<T>::empty(){
        
        return Container<T>::vec.empty();
    
    }
    

}