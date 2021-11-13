class ParkingSystem {
public:
    int parking_spaces[3];
    ParkingSystem(int big, int medium, int small) {
        parking_spaces[0] = big;
        parking_spaces[1] = medium;
        parking_spaces[2] = small;
    }
    
    bool addCar(int carType) {
        if(parking_spaces[carType -1] > 0) {
            parking_spaces[carType - 1] -= 1;
            return true;
        } else 
            return false;
    }
};
