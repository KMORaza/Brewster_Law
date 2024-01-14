#include "DielectricMaterial.h"
DielectricMaterial::DielectricMaterial(double refractiveIndex) : refractiveIndex(refractiveIndex) {}
double DielectricMaterial::getRefractiveIndex() const {
    return refractiveIndex;
}
