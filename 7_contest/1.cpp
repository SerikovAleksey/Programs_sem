struct something {
    int a;
    bool b;
    char c;
};

struct something* calc_address(struct something* start, unsigned int number){
    return  start + number;
}