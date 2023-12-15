#ifndef BUILDINGDICTIONARY_H
#define BUILDINGDICTIONARY_H
#include "BuildingInfo.h"
class BuildingDictionary {
    public:
        BuildingDictionary() {
            initializeMapBuildingLocations();
        }
        std::vector<std::pair<int,int>> getCoordinates(std::string buildingName);
        std::vector<BuildingInfo> getBuildings();
    private:
        std::vector<BuildingInfo> buildings;
        void initializeMapBuildingLocations();
};

#endif