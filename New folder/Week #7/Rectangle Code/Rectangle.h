class Rectangle{

    public:
        int side1, side2;

    Rectangle() {

        side1 = 1;
        side2 = 1;

    }

    Rectangle(int newSide1, int newSide2) {

        side1 = newSide1;
        side2 = newSide2;

    }

    int getArea();

};
