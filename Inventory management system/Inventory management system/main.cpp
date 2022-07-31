#include<iostream>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int i, n;
ifstream fin;
ofstream fout;
fstream fio;
void disp();
class stock
{
	char name[30], pass[25];

	float pr; int quant;

public:
	void get();
	void get2();
	void show();
	int stchk(char nm[30]);
	void withd(int qty);
	void refil(int qty);

	stock()
	{
		pr = 0.0;
		quant = 0;
	}
	~stock()
	{
		pr = 0.0;
		quant = 0;
	}
}st;
void stock::withd(int qty)
{
	if (quant >= qty)
	{
		quant -= qty;
		cout << "\n\nStock updated.\n";
		cout << "\n\nTotal price to be paid:" << pr * qty;
	}
	else
		cout << "\n\nInsufficient stock";
	getch();


}

void stock::refil(int qty)
{

	quant += qty;
	cout << "\n\nStock updated.";
	getch();


}
int stock::stchk(char nm[30])
{
	if (strcmp(nm, name) == 0)
		return 0;
	else
		return 1;
}
void stock::get()
{
	cin >> name >> pr >> quant;

}
void stock::get2()
{
	cin >> name >> quant;
}

void stock::show()
{

	cout << "\n" << name << "\t\t\t" << quant << "\t\t\t" << pr;
}
void addnew()
{
	system("cls");
	disp();
	getch();
	system("cls");

	cout << "\nEnter the No. of Products that you wish to add: ";
	cin >> n;


	if (n != 0)
	{

		int j, l, sum = 0;

		fout.open("shop.dat", ios::binary | ios::app);
		for (i = 0;i < n;i++)

		{

			cout << "\n\nInput the name, price and the quantity of item respectively\n\n";
			st.get();
			fout.write((char*)&st, sizeof(st));
			cout << "\n\n item updated";
			cin.get();


		}
		cout << "\n\nStock Updated!!";


		fout.close();
		cin.get();
		system("cls");
		disp();
	}

	else
	{

		fout.close();
		cin.get();
		system("cls");
		cout << "\n\nNo items to be added";
	}

}






void withdraw()
{
	//	system("cls");
	char temp[100];int qty;
	int i = 0;
	long pos = 0;
	disp();
	cout << "\n\nEnter the product's name \n" << endl;
	cin >> temp;
	cout << "\n\nEnter quantity: \n" << endl;
	cin >> qty;
	try
	{
		fio.open("shop.dat", ios::binary | ios::out | ios::in);
		while (fio)
		{
			pos = fio.tellp();
			fio.read((char*)&st, sizeof(st));
			if (st.stchk(temp) == 0)
			{

				st.withd(qty);
				fio.seekp(pos);
				fio.write((char*)&st, sizeof(st));
				i++;break;
			}
		}


		if (i != 1)
			cout << "\n\n!!Record not found!!";
		fio.close();
		cin.get();
		//system("cls");
		disp();
		getch();
	}
	catch (std::fstream::failure e)
	{
		std::cerr << "Exception  handling\n";
	}

}

void disp()
{
	int i = 1;
	cout << "\n==================================================================";
	cout << "\n\n=================\tTHE STOCK ITEMS ARE\t==================";
	cout << "\n\n==================================================================\n";
	cout << "\n\nPARTICULARS\tSTOCK AVAILABLE\t\t\t PRICE";
	cout << "\n\n============================================================\n";
	try
	{

		fin.open("shop.dat", ios::binary);

		while (!fin.eof())
		{
			fin.read((char*)&st, sizeof(st));
			if (!fin.eof())
			{
				if (fin.tellg() < 0)
				{
					i = 0; break;
				}
				st.show();

			}
		}

		if (i == 0)
		{
			cout << "\n\n\t\t\t!!Empty record room!!";
			getch();
		}
		fin.close();
	}
	catch (std::ifstream::failure e)
	{
		std::cerr << "Exception\n";
	}


}

void refill()
{
	//system("cls");
	char temp[100];int qty;
	int i = 0;
	long pos = 0;
	disp();
	cout << "\n\nEnter the products name \n" << endl;
	cin >> temp;
	cout << "\n\nEnter quantity: \n" << endl;
	cin >> qty;
	fio.open("shop.dat", ios::binary | ios::out | ios::in);
	while (fio)
	{
		pos = fio.tellp();
		fio.read((char*)&st, sizeof(st));
		if (st.stchk(temp) == 0)
		{

			st.refil(qty);
			fio.seekp(pos);
			fio.write((char*)&st, sizeof(st));
			i++;break;
		}
	}
	if (i != 1)
		cout << "\n\n!!Record not found!!";
	fio.close();
	//system("cls");
	cin.get();
	disp(); cin.get();


}
void remove()
{
	//system("cls");
	int i = 0;
	char temp[30];
	cout << "\n\t\t\t\tDelete Record";
	cout << "\n\nEnter the name of the product:";
	cin >> temp;
	fout.open("temp.dat", ios::binary);
	fin.open("shop.dat", ios::binary);
	while (!fin.eof())
	{
		fin.read((char*)&st, sizeof(st));
		if (!fin.eof())
			if (st.stchk(temp) == 0)
			{
				st.show();
				cout << "\n\n\t\tRecord deleted";
				i++;
			}
			else
				fout.write((char*)&st, sizeof(st));
	}
	if (i == 0)
		cout << "\n\n!!Record not found!!";
	fin.close();
	fout.close();
	remove("shop.dat");
	rename("temp.dat", "shop.dat");
}
int main()
{
	char pass[10], pass2[10];
	int i, j;
	string email;
	string staffeid;
	string password;
	string userNumber;
	int h;
	char name[100];
	const int Num_Length = 10;
	cout << "\n\n\t|============ WELCOME TO RM Grocaries ============|";
	getch();
	//system("cls");
	cout << "\n\t\t      Yelahanka , Bengaluru-560064             \n";
	cout << "\n\n\t|=================================================|";
	cout << "\n\n\t\t   1. ADMIN Menu\n\n\t\t   2. Employee Menu\n\n\t\t";
	cout << "\n\n\t\t        \n";
	cout << "\n\nEnter Your Choice:";
	cin >> j;
	if (j == 1)
	{

		//system("cls");

	//Added Login
		cout << "\t\t\t Please Login  \n";
		cout << "\t\t\t Enter ID    \n";
		cin >> email;
		cout << "\t\t\t Password    \n";
		cin >> password;

		if (email == "vinay@email.com" && password == "vinay@123")
		{
			//adminstrator();
			//system("cls");
		dealermenu:system("cls");
			cout << "==============================";
			cout << "\n\n\t\t\t    ADMIN MENU\n1. Add new product\n2. Display stock\n3. Update\n4. Delete an item\n5. Exit:";
			cout << "\n\n\n===========END OF MENU=============";
			cout << "\n\n Enter your Choice :\t";
			cin >> i;
			if (i == 1)
			{
				addnew();getch();
				goto dealermenu;
			}
			else if (i == 2)
			{
				//system("cls");
				disp();getch();goto dealermenu;
			}
			else if (i == 3)
			{
				refill();goto dealermenu;
			}
			else if (i == 4)
			{
				remove();getch();goto dealermenu;
			}
			else
			{
				//system("cls");
				getch();
				exit(0);
			}
		}
		else
		{
			cout << "\n\n\nINPUT CORRECT PASSWORD!!!\n\n";
			getch();
			getch();
			getch();
			getch();
			getch();
			getch();
			exit(0);
		}

		//Stopped here



	}
	if (j == 2)
	{
		// system("cls");

		 //Password for Staff Login
		cout << "\t\t\t Enter ID    \n";
		cin >> staffeid;
		cout << "\t\t\t Password    \n";
		cin >> password;

		if (staffeid == "270699" && password == "123")
		{
		custmenu:
			cout << "=================================================================";
			cout << "\n\n\t\t\t    EMPLOYEE MENU\n1. PURCHASE\n2. Display stock\n3. Exit:";
			cout << "\n\n\n==========================END OF MENU=============================";

			cout << "\n\n Enter your Choice :\t";
			cin >> i;



			if (i == 1)
			{
				withdraw();getch();goto custmenu;
			}
			else if (i == 2)
			{
				//system("cls");
				disp();getch();goto custmenu;
			}

			else
			{
				cout << "\n\nSorry!! Please Provide Valid Password..\n\n";
				getch();
				getch();
				getch();
				getch();
				getch();

				exit(0);
			}

		}

		getch();
	}
}