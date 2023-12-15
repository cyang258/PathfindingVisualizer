#ifndef BUILDINGINFO_H
#define BUILDINGINFO_H
#include <string>
#include <vector>

class BuildingInfo {
    public:
        BuildingInfo(){};
        BuildingInfo(std::string name, std::vector<std::pair<int, int>> coordinates, std::pair<int, int> entrance){
            this->name = name;
            this->coordinates = coordinates;
            this->entrance = entrance;
        }

        std::string getName();
        std::vector<std::pair<int, int>> getCoordinates();
        std::pair<int, int> getEntrance();

    private:
        std::string name;
        std::pair<int, int> entrance;
        std::vector<std::pair<int, int>> coordinates;
};

#endif