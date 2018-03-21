#include "mapping.h"
#include "mainwindow.h"

Mapping::Mapping(QMainWindow *parrent) {
    this->par = parrent;
    this->init();
}


void Mapping::init() {
    for (int i = 0; i < MAP_WIDTH/5; i++) {
        for (int j = 0; i < MAP_HEIGHT/5; j++) {
            map[i][j] = 0;
        }
    }
}


void Mapping::update_map() {

    double fi, d;
    double x, y;
    int i,j;
    // ideme point_count/2 lebo v scan_array su pary [uhol vzdialenost]
    for (int i = 0; i <  rplidar.localMeranie[1].numberOfScans; i++) {     // treba upravit neviem ci je dobre to number of scan
        fi = 360 - rplidar.localMeranie[1].Data[i].scanAngle;
        d = rplidar.localMeranie[1].Data[i].scanDistance;

        x= QMainWindow.x();
        x= map.


    }

    map[(int)x/5][(int)y/5] = 1 ;
}


