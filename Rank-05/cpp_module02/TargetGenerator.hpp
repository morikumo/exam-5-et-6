#ifndef TARGETGENERATOR
#define TARGETGENERATOR

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    public :
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *);
        void forgetTargetType(std::string const &);
        ATarget * createTarget(std::string const &);

        
    private :
        TargetGenerator(TargetGenerator const &other);
        TargetGenerator &operator=(TargetGenerator const &other);
        std::map<std::string, ATarget*> map;
};

#endif