class Box{
	//Access method of the class attributes.
	public:
		double length; // length of a box
		double breadth; // breadth of a box
		double height; // height of a box
};

int main(void){
	Box box1; // Declare instance box1 of class Box
	Box box2; // same

	double volume = 0.0;

	// box 1 specification:
	box1.height = 5.0;
	box1.length = 6.0;
	box1.breadth = 7.0;

	// box 2 specification:
	box2.height = 10.0;
	box2.length = 12.0;
	box2.breadth = 13.0;

	//volume of box 1
	volume = box1.height * box1.length * box1.breadth;
	cout << "Volume of box1: " << volume << endl;

	volume = box2.height * box2.length * box2.breadth;
	cout << "Volume of box2: " << volume << endl;

	return 0;
}