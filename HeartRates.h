// HeartRates class that contains first name, last name and 
// date of birth (consisting of seperate attributes for month,
// day and year of birth.) and member functions to set and get
// these values.
#include <string>

class HeartRates {
	private:
		std::string firstName, lastName;
		int day{0}, month{0}, year{0};

	public:
		// HeartRates constructor with parameters
		HeartRates(std::string fName, std::string lName,
				int d, int m, int y):
			firstName{fName} {
			lastName = lName;
			if(d > 0 || m > 0 || y > 0){
				day = d;
				month = m;
				year = y;
			}
		}

		// member function that set the first and last name
		// in the object.
		void setName(std::string fName, std::string lName){
			firstName = fName;
			lastName = lName;
		}

		// member function that retrieves the first and last 
		// name from the object
		std::string getName() const {
			return firstName + " " + lastName;
		}
		
		void setBirth(int d, int m, int y){
			day = d;
			month = m;
			year = y;
		}

		int getDay() const{return day;}
		int getMonth() const{return month;}
		// member function that retrieves year attribute
		int getYear() const {
			return year;
		}
		int getAge() const {
			return 2019 - year;
		}

		int getMaxHeartRate() const {
			return 220 - getAge();
		}
		
		int getTargetHeartRate1() const {
			return getMaxHeartRate() / 2;
		}

		int getTargetHeartRate2() const {
			return getMaxHeartRate() * 85 / 100;
		}
};
