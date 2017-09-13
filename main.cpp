/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R162668X
 *
 * Created on September 13, 2017, 10:42 AM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
class Tools{
protected:
    int strength;
    char type;
public:
    void Setstrength(int thisstrength){
    strength = thisstrength;
    }
    
};
class Rock:protected Tools{
public:
    Rock(int thisstrength,char thistyper){
        strength = thisstrength;
        type = thistyper;
    }
    void Display(){
        cout<<"Type:"<<type<<endl;
             cout<<"Strength:"<<strength<<endl;
    }
    void fight(bool f){
        fight=f;
    }
};
class Paper:protected Tools{
public:
    Paper(int thisstrength,char thistypep){
        strength = thisstrength;
        type = thistypep;
    }
    void Display(){
        cout<<"Type:"<<type<<endl;
             cout<<"Strength:"<<strength<<endl;
     void fight(bool f){
        fight==f;
    }
};
class Scissors:protected Tools{
public:
   Scissors(int thisstrength,char thistypes){
        strength = thisstrength;
        type = thistypes;
    }
   void Display(){
        cout<<"Type:"<<type<<endl;
             cout<<"Strength:"<<strength<<endl;
   }
    void fight(bool f){
        fight = f;
        
        if (fight==true)
            return"Scissors win";
    
};
int main(int argc, char** argv) {

    return 0;
}
