#ifndef DIELECTRIC_MATERIAL_H
#define DIELECTRIC_MATERIAL_H
class DielectricMaterial {
private:
    double refractiveIndex;
public:
    DielectricMaterial(double refractiveIndex);
    double getRefractiveIndex() const;
};
#endif
