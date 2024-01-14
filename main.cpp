// Created: September 2022
#include "IncidentLight.h"
#include "DielectricMaterial.h"
#include "TransmittedLight.h"
#include <iostream>
int main() {
    double incidentIntensity = 1.0;
    double incidentAngleDegrees = 45.0;
    double refractiveIndex = 1.5;
    IncidentLight incidentLight(incidentIntensity, incidentAngleDegrees * M_PI / 180.0);
    DielectricMaterial material(refractiveIndex);
    TransmittedLight transmittedLight(incidentLight, material);
    std::cout << "Incident Light:\n";
    std::cout << "Intensity: " << incidentLight.getIntensity() << "\n";
    std::cout << "Polarization Angle: " << incidentLight.getPolarizationAngle() << " radians\n";
    std::cout << "\nDielectric Material:\n";
    std::cout << "Refractive Index: " << material.getRefractiveIndex() << "\n";
    std::cout << "\nTransmitted Light:\n";
    std::cout << "Intensity: " << transmittedLight.getIntensity() << "\n";
    std::cout << "Transmission Angle: " << transmittedLight.getTransmissionAngle() << " radians\n";
    return 0;
}
