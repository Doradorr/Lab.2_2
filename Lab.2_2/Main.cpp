struct Student {

	int ID;
	int yearofSrudy;
	double avgMark;
};

int main() {

	Student myStudent = {1234567890, 1, 4,5};
	myStudent.yearofStudy = 2; //changed the class on 2

	Student mySecondStudent;
	mySecondStudent.ID = 9876543210;
	mySecondStudent.yearofSrudy = 3;
	mySecondStudent.avgMark = 3.9;

	return 0;
}

//enum type

enum Week {mon, tue, wed, thu, fri, sat, sun};

struct Student { ... };

int main() {

	Week today = wed;

}