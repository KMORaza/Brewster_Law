#ifndef INCIDENT_LIGHT_H
#define INCIDENT_LIGHT_H
class IncidentLight {
private:
    double intensity;
    double polarizationAngle;
public:
    IncidentLight(double intensity, double polarizationAngle);
    double getIntensity() const;
    double getPolarizationAngle() const;
};
#endif
