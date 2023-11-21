#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
    
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        map[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &typeName)
{
    if (map.find(typeName) != map.end())
        map.erase(map.find(typeName));
}

ATarget * TargetGenerator::createTarget(std::string const & typeName)
{
    ATarget *pointeur = NULL;
    if (map.find(typeName) != map.end())
        pointeur = map[typeName];
    return pointeur;

}