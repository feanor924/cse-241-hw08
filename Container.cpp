/* 
 * File:   Container.cpp
 * Author: caner
 * 
 * Created on December 10, 2014, 9:03 PM
 */

#include "Container.h"
#include <iostream>
#include <vector>


using namespace std;

namespace Contain{
    
    template<class T>
    Container<T>::Container(){
        call=0;
    }
    
    template<class T>
    void Container<T>::addAll(const Container<T>& contain){
        
        for (int i=0;i<contain.vec.size(); ++i)
            add(contain.vec[i]);
    }
    
    template<class T>
    void Container<T>::removeAll(const Container<T>& contain){
        
        for(int i=0;i<contain.vec.size();++i)
            remove(contain.vec[i]);
    }
    
    template<class T>
    vector<T> Container<T>::toVector(){
        
        vector<T> vec1;
 
        for (int i=0;i<vec.size();++i)
            vec1.push_back(vec[i]);
        
        return vec1;
    }
    
    template<class T>
    void Container<T>::duplicate(vector<T> &vec2){
        
        int k=0;
        vector<T> vec1;
        vector<T> vec3;

        for (int i=0;i<vec2.size();++i)
            vec3.push_back(vec2[i]);
                    
        for (int i=0; i<vec2.size();++i){
            for(int j=0;j<vec3.size();++j){
                if ( vec2[i] == vec3[j])
                    ++k;
                if ( ( vec2[i] == vec3[j] ) && k == 1){
                    vec1.push_back(vec2[i]);
                    vec3.erase(vec3.begin()+j);
                    --j;
                }
                if ( ( vec2[i] == vec3[j] ) && k > 1){
                    vec3.erase(vec3.begin()+j);
                    --j;
                }                    
            }
            vec2.clear();
            for (int b=0; b<vec3.size();++b)
                vec2.push_back(vec3[b]);            
            k=0;
        }
        
        for (int i=0;i<vec3.size();++i)
            vec1.push_back(vec3[i]);
        vec2.clear();
        for (int i=0;i<vec1.size();++i)
            vec2.push_back(vec1[i]);
        
    }
    template<class T>
    bool Container<T>::isSorted(const Container<T>& contain){

        int k=0;

        for (int i=0;i<contain.vec.size()-1;++i){
            if ( contain.vec[i] > contain.vec[i+1])
                ++k;
        }
        if (k >0)
            return false;
        else
            return true;
        }       
    
}


