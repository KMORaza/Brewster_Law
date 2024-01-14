#include "IncidentLight.h"
IncidentLight::IncidentLight(double intensity, double polarizationAngle)
    : intensity(intensity), polarizationAngle(polarizationAngle) {}
double IncidentLight::getIntensity() const {
    return intensity;
}
double IncidentLight::getPolarizationAngle() const {
    return polarizationAngle;
}
