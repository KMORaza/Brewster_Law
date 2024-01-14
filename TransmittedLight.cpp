#include "TransmittedLight.h"
#include <cmath>
TransmittedLight::TransmittedLight(const IncidentLight& incidentLight, const DielectricMaterial& material) {
    double incidentAngle = incidentLight.getPolarizationAngle();
    double refractiveIndex = material.getRefractiveIndex();
    transmissionAngle = atan(refractiveIndex * tan(incidentAngle));
    double cosThetaI = cos(incidentAngle);
    double cosThetaT = cos(transmissionAngle);
    intensity = incidentLight.getIntensity() * pow((cosThetaI / cosThetaT), 2);
}
double TransmittedLight::getIntensity() const {
    return intensity;
}
double TransmittedLight::getTransmissionAngle() const {
    return transmissionAngle;
}
