#include <iostream>
#include <cstdlib>
#include <bitset>
// Add your library file
// Example: #include "automata.h"

using namespace std;

int main (int argc, char** argv){

    /*
    * Update line 4 - 18 according your implementation, you should initialize the automaton first.
    */
    // string Q[] = {"q0","q1","q2"};
    // string F[] = {"q0"};
    // char Sigma[] = {'0','1'};

    // automata* M = new automata(states(Q,Q+3),alphabet(Sigma,Sigma+2),"q0",states(Q,Q+1));

    for(int i = 0; i< 10; i++){
        bitset<4> bits(i);
        string bitstring = bits.to_string();
        // Once you intilize the automaton, you should uncomment the following line
        //cout<<i<<":"<<bitstring<<"->"<<boolalpha<<M->isAccepted(bitstring)<<endl;
    }

    return EXIT_SUCCESS;
}