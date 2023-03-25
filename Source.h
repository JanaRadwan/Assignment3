#include<iostream> 
#include <string>
using namespace std;

class Person {
private:
	string Name;
	int ID;
	int Age;
public:
	Person() {
		Name = " ";
		ID = 0;
		Age = 0;
	}
	Person(string n, int id, int g) { Name = n; ID = id; Age = g; }
	void setname(string N) { Name = N; }
	void setID(int id) { ID = id; }
	void setage(int g) { Age = g; }
	string getname() { return Name; }
	int getid() { return ID; }
	int getAge() { return Age; }
	void printinfo() { cout << " abstract class " ; }

};

struct Appointment {
	int hours;
	int mins;
};

class customer : public Person {

private:
	int MechanicID;
	Appointment appointment;

public:
	customer() : Person() { MechanicID = 0; appointment.hours = 0; appointment.hours = 0; }
	customer(string N, int id, int g, int MID, Appointment app) :Person(N, id, g)
	{
		appointment = app;
		MechanicID = MID;
	}
	void setmechanicID(int MD) { MechanicID = MD; }
	void setappointment(Appointment a) { appointment = a; }
	int getmechanicid() { return MechanicID; }
	Appointment getappoin() { return appointment; }

	bool operator == (const  customer& c1)
	{
		if (this->appointment.hours == c1.appointment.hours && this->appointment.mins == c1.appointment.mins)
			return true;
		return false;

	}
	bool operator > (const  customer& c1)
	{
		if (this->appointment.hours > c1.appointment.hours && this->appointment.mins > c1.appointment.mins)
			return true;
		return false;
	}
	bool operator < (const  customer& c1)
	{
		if (this->appointment.hours < c1.appointment.hours && this->appointment.mins < c1.appointment.mins)
			return true;
		return false;
	}

	void printinfo() {
		cout << " Mr." << getname() << " has an appointment at " << appointment.hours << ":" << appointment.mins;
	}
};

class mechanic : public Person {
private:
	int counter;
	Appointment* A = new Appointment[counter];

public:
	mechanic() { counter = 0; }
	~mechanic() { delete [] A; } 
	mechanic(string n, int id, int g, int c, Appointment q) : Person(n, id, g)
	{
		counter = c;
		A[counter] = q;
	}

	bool isAvailable(Appointment B)
	{
		if (A[counter].hours == B.hours && A[counter].mins == B.mins)
			return false;
		else return true;
	}

	void setcounter(int x) { counter = x; }
	void setAppoin(Appointment B) { A[counter] = B; }
	int getcounter() { return counter; }
	Appointment* getappoint() {
		return A;
	}

	// void printinfo; 

};
template< class T>
class Queue {

private:
	int front;
	int rear;
	int counter;
	int maxsize;
	T* values;
public:
	Queue(int size = 10) {
		values = new T[size];
		maxsize = size;
		front = 0;
		rear = -1;
		counter = 0;
	}
	~Queue() { delete[] values; }
	bool IsEmpty() {
		if (counter)	return false;
		else return true;
	}
	bool IsFull() {
		if (counter < maxsize)	return false;
		else return true;
	}
	bool push(T x) {
		if (IsFull()) {
			cout << "Error: the queue is full." << endl;
			return false;
		}
		else {
			rear = (rear + 1) % maxsize;
			values[rear] = x;
			counter++;
			return true;
		}
	}
	T pop(T& x) {
		if (IsEmpty()) {
			cout << "Error: the queue is empty." << endl; 
			//return false;

		}
		else {

			x = values[front];
			front = (front + 1) % maxsize;
			counter--;
			return x; 
		}
	}
	


};
