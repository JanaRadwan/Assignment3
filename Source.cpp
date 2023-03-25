#include"Source.h"
template<class T>
void sw(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;

}

int main()
{
	int count = 0;
	string Cname;
	int CID, Cage;
	Appointment Null, C;
	Null.hours = 0; Null.mins = 0;
	C.hours = 0; C.mins = 0;
	customer Array[3];

	mechanic M1("Ayman", 32, 45, 0, Null);
	mechanic M2("Khaled", 46, 36, 0, Null);
	mechanic M3("Mai", 84, 32, 0, Null);
	cout << " getting cutomers info : " << endl;
	for (int i = 0; i < 3; i++) {
		cout << " please enter your name , ID and age" << endl;
		cout << " Name :"; cin >> Cname; cout << " ID: ";cin >> CID; cout << " Age:"; cin >> Cage;
		cout << " please enter your preferred appointment " << endl;
		cout << " Hour : "; cin >> C.hours;cout << " Min: "; cin >> C.mins;
		Array[i].setname(Cname);
		Array[i].setID(CID);
		Array[i].setage(Cage);
		Array[i].setappointment(C);


	}
	if (M1.isAvailable(Array[0].getappoin()) == true)
	{
		Array[0].setmechanicID(M1.getid());
		M1.setcounter(++count);
		M1.setAppoin(Array[0].getappoin());
	}
	else if (M2.isAvailable(Array[0].getappoin()) == true)
	{
		Array[0].setmechanicID(M2.getid());
		M2.setcounter(++count);
		M2.setAppoin(Array[0].getappoin());
	}
	else if (M3.isAvailable(Array[0].getappoin()) == true)
	{
		Array[0].setmechanicID(M3.getid());
		M3.setcounter(++count);
		M3.setAppoin(Array[0].getappoin());
	}

	if (M2.isAvailable(Array[1].getappoin()) == true)
	{
		Array[1].setmechanicID(M2.getid());
		M2.setcounter(++count);
		M2.setAppoin(Array[1].getappoin());
	}
	else if (M1.isAvailable(Array[1].getappoin()) == true)
	{
		Array[1].setmechanicID(M1.getid());
		M1.setcounter(++count);
		M1.setAppoin(Array[1].getappoin());
	}
	else if (M3.isAvailable(Array[1].getappoin()) == true)
	{
		Array[1].setmechanicID(M3.getid());
		M3.setcounter(++count);
		M3.setAppoin(Array[1].getappoin());
	}
	if (M3.isAvailable(Array[2].getappoin()) == true)
	{
		Array[2].setmechanicID(M3.getid());
		M3.setcounter(++count);
		M3.setAppoin(Array[2].getappoin());
	}
	else if (M1.isAvailable(Array[2].getappoin()) == true)
	{
		Array[2].setmechanicID(M1.getid());
		M1.setcounter(++count);
		M1.setAppoin(Array[2].getappoin());
	}
	else if (M2.isAvailable(Array[2].getappoin()) == true)
	{
		Array[2].setmechanicID(M2.getid());
		M2.setcounter(++count);
		M2.setAppoin(Array[2].getappoin());
	}
	for (int i = 0; i < 3; i++)
	{
		Array[i].printinfo();
		if (Array[i].getmechanicid() == M1.getid()) {
			cout << " with " << M1.getname();cout << endl;
		}
		else if (Array[i].getmechanicid() == M2.getid()) {
			cout << " with " << M2.getname();cout << endl;
		}
		else if (Array[i].getmechanicid() == M3.getid()) {
			cout << " with " << M3.getname();cout << endl;
		}
	}


	


	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (Array[i] > Array[j]) 
				sw(Array[i], Array[j]);
		}
	}
	Queue <customer> list;
	list.push(Array[0]);
	list.push(Array[1]);
	list.push(Array[2]);
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		Array[i].printinfo();
		if (Array[i].getmechanicid() == M1.getid()) {
			cout << " with " << M1.getname();cout << endl;
		}
		else if (Array[i].getmechanicid() == M2.getid()) {
			cout << " with " << M2.getname();cout << endl;
		}
		else if (Array[i].getmechanicid() == M3.getid()) {
			cout << " with " << M3.getname();cout << endl;
		}
	}


	return 0;
}