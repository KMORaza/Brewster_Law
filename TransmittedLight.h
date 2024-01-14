#ifndef TRANSMITTED_LIGHT_H
#define TRANSMITTED_LIGHT_H
#include "IncidentLight.h"
#include "DielectricMaterial.h"
class TransmittedLight {
private:
    double intensity;
    double transmissionAngle;
public:
    TransmittedLight(const IncidentLight& incidentLight, const DielectricMaterial& material);
    double getIntensity() const;
    double getTransmissionAngle() const;
};
#endif
