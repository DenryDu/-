/**
  *��ѧ���ɼ�����ϵͳ����D�̸�Ŀ¼�·�����Ϊuser.txt�Ŀ��ļ�
  *��20-186�д��������������͸�ʽ������ģ��ڶ�����ʱ�ɺ��ԣ�����ʱ������Ϊcout��������
 **/
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <stdlib.h>
#include <sstream>
#define M 16
#define N 14
#define K 3
using namespace std;

//����formϵ�к�����������&��ʽ�����
void form_head()
{
	system("cls");
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	for (int i = 0; i < 102; i++)
	{
		cout << "-";
	}
}
void form_title(string a)
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	for (int i = 0; i < (100 - a.length() - 18) / 2; i++)
	{
		cout << " ";
	}
	for (int i = 0; i < 9; i++)
	{
		cout << "-";
	}
	cout << a;
	for (int i = 0; i < 9; i++)
	{
		cout << "-";
	}
	for (int i = 0; i < (100 - a.length() - 18 - ((100 - a.length() - 18) / 2)); i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << endl;
}
void form_choice(string a)
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << a;
	for (int i = 0; i < 100 - a.length(); i++)
	{
		cout << " ";
	}
	cout << "|" << endl;
}
void form_body(string a)
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	for (int i = 0; i < (100 - a.length()) / 2; i++)
	{
		cout << " ";
	}
	cout << a;
	for (int i = 0; i < (100 - a.length() - ((100 - a.length()) / 2)); i++)
	{
		cout << " ";
	}
	cout << "|" << endl;
}
void form_input(string s)
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << s;
}
int form_int_input(string s)
{
	int ret;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << s;
	cin >> ret;
	return ret;
}
void combo(string a, int n)
{
	stringstream bstream;
	string b;
	bstream << n;
	bstream >> b;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << a;
	cout << n;
	for (int i = 0; i < (100 - a.length() - b.size()); i++)
	{
		cout << " ";
	}
	cout << "|" << endl;
}
void combo(string a, double n)
{
	stringstream bstream;
	string b;
	bstream << n;
	bstream >> b;
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << a;
	cout << n;
	for (int i = 0; i < (100 - a.length() - b.length()); i++)
	{
		cout << " ";
	}
	cout << "|" << endl;
}
void combo(string a, string b)
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	cout << "|";
	cout << a;
	cout << b;
	for (int i = 0; i < (100 - a.length() - b.length()); i++)
	{
		cout << " ";
	}
	cout << "|" << endl;
}
void divideline()
{
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " ";
	}
	for (int i = 0; i < 102; i++)
	{
		cout << "-";
	}
	cout << endl;
}


//���˵���
int main_menu()
{
	int ret;
	form_head();
	form_title("ѧ���ɼ�����");
	form_choice("��ѡ�����¹��ܣ�    ");
	form_body("1 - ���ļ�¼");
	form_body("2 - �޸ļ�¼");
	form_body("3 - ɾ����¼");
	form_body("4 - ����    ");
	form_body("5 - ����    ");
	form_body("6 - ��ʾ��¼");
	form_body("7 - ȫɾ    ");
	form_body("0 - �˳�    ");
	form_body("������ѡ��");
	ret = form_int_input("������ѡ��");
	return ret;
}



//ѧ���ࣺ
class Student     //��Ķ��壬����ѧ����Ϣ
{
	char num[N];        //ѧ��
	char name[M];		//����
	int score[K];		//����
	double gpa[K];		//gpa
	double agpa;        //ƽ��gpa
public:
	Student() {
		/*
		for (int i = 0; i < N; i++)
		{
			num[i] = 0;
		}
		for (int i = 0; i < N; i++)
		{
			name[i] = '_';
		}
		for (int i = 0; i < K; i++)
		{
			score[i] = 0;
		}
		for (int i = 0; i < K; i++)
		{
			gpa[i] = 0;
		}
		agpa = 0;
		*/
	}
	char *getnum();					//��ȡѧ��
	char *getname();				//��ȡ����
	void setname(char na[]);
	void setnum(char nu[]);			//����ѧ��
	void setscore(int sc[]);		//����ѧ���ɼ�
	void setgpa(double g[]);		//����ѧ���ɼ���Ӧ����
	void setagpa(double ag);		//����ѧ����ƽ������
	void computegpa();				//��ѧ������Ӧ����
	void computeagpa();				//��ѧ����ƽ�ݼ���
	void getscore(int ascore[]);	//ȡ��ѧ���ĳɼ�
	void getgpa(double agpa[]);		//ȡ��ѧ���ļ���
	void getagpa(double &g);		//ȡ��ѧ����ƽ������  
	void copy(Student &p);
	void disp();					//���ѧ������Ϣ
};

//ѧ����
//������ʵ�֣�
char* Student::getnum()
{
	return num;
}
char* Student::getname()
{
	return name;
}
void Student::setname(char na[])
{
	strcpy(name, na);
}
void Student::setnum(char nu[])
{
	strcpy(num, nu);
}
void Student::setscore(int sc[])
{
	for (int i = 0; i < K; i++)
	{
		score[i] = sc[i];
	}
}
void Student::setgpa(double g[])
{
	for (int i = 0; i < K; i++)
	{
		gpa[i] = g[i];
	}
}
void Student::setagpa(double ga)
{
	agpa = ga;
}
void Student::computegpa()  //�󼨵�
{
	for (int i = 0; i < K; i++)
	{
		if (score[i] < 60)
		{
			gpa[i] = 0.0;
		}
		else
		{
			gpa[i] = (score[i] - 60.0) / 10.0 + 1.0;
		}
	}
}
void Student::computeagpa()  //��ƽ������
{
	double sum = 0.0;
	for (int i = 0; i < K; i++)
	{
		sum += gpa[i];
	}
	agpa = sum / K;
}
void Student::getscore(int ascore[])
{
	for (int i = 0; i < K; i++)
	{
		ascore[i] = score[i];
	}
}
void Student::getgpa(double agpa[])
{
	for (int i = 0; i < K; i++)
	{
		agpa[i] = gpa[i];
	}
}
void Student::getagpa(double &g)
{
	g = agpa;
}
void Student::copy(Student &p)
{
	int temp_score[K];
	double temp_gpa[K];
	double temp_agpa;
	this->setnum(p.getnum());
	this->setname(p.getname());

	p.getscore(temp_score);
	this->setscore(temp_score);
	p.getgpa(temp_gpa);
	this->setgpa(temp_gpa);
	p.getagpa(temp_agpa);
	this->setagpa(temp_agpa);
}
void Student::disp()
{
	int i;
	form_head();
	form_title("��Ϣչʾ");
	combo("ѧ�ţ�", num);
	combo("����", name);
	combo("�����ɼ���", score[0]);
	combo("�������㣺", gpa[0]);
	combo("����ɼ���", score[1]);
	combo("�����㣺", gpa[1]);
	combo("������Ƴɼ���", score[2]);
	combo("������Ƽ��㣺", gpa[2]);
}
void swap(Student &a, Student &b)
{

	Student temp;
	int temp_score[K];
	double temp_gpa[K];
	double temp_agpa;
	temp.setnum(a.getnum());
	temp.setname(a.getname());
	a.getscore(temp_score);
	temp.setscore(temp_score);
	a.getgpa(temp_gpa);
	temp.setgpa(temp_gpa);
	a.getagpa(temp_agpa);
	temp.setagpa(temp_agpa);

	a.setnum(b.getnum());
	a.setname(b.getname());
	b.getscore(temp_score);
	a.setscore(temp_score);
	b.getgpa(temp_gpa);
	a.setgpa(temp_gpa);
	b.getagpa(temp_agpa);
	a.setagpa(temp_agpa);

	b.setnum(temp.getnum());
	b.setname(temp.getname());
	temp.getscore(temp_score);
	b.setscore(temp_score);
	temp.getgpa(temp_gpa);
	b.setgpa(temp_gpa);
	temp.getagpa(temp_agpa);
	b.setagpa(temp_agpa);
}


//�û����ݻ�����
class UserDatabase {
	int nElem;			//ѧ����Ϣ���е�Ԫ�ظ���
	int Maxu;			//����ѧ��
	Student *user;		//ָ��ѧ����Ϣ��ָ��
public:
	UserDatabase(int n = 30);		//���캯������user.txt����User[]
	~UserDatabase();				//������������user[]д��user.txt�ļ���
	void clear();					//ɾ������ѧ����Ϣ
	void add_record(char *nu, char *na, int sc[]);	//���ѧ����Ϣ������ѧ�����԰���������
	void delete_record(Student *p);					//ɾ��ѧ����Ϣ
	void modify_record(Student *p, int sc[]);		//ɾ��ѧ����Ϣ
	Student * query(char *nu);						//��ѧ�Ų��ң�˳����ң�������Ҳ�����ö��ַ�����
	void sorta_num();								//��ѧ����������ѡ�����򷨣�
	void sorta_name();								//�������������򣨲������򷨣�
	void sorta_agpa();								//��ƽ��������������ð�����򷨣�
	void sort_num();								//��ѧ�Ž�������ѡ�����򷨣�
	void sort_name();								//�����������򣬽��ų�����Ķ��������������
	void sort_agpa();								//��ƽ�����㽵������ð�����򷨣�
	int disp(int begin);							//�������ѧ������Ϣ
};
UserDatabase::UserDatabase(int n)//���캯������ʼ��ѧ����Ϣ����user.txt����User[]��
{
	int i, sc[K];
	double g[K], ag;
	char num[N], na[M];
	ifstream infile;						//�����ļ�����
	infile.open("D:/user.txt", ios::in);	//�򿪸������ļ�
	if (!infile)							//���ļ��������󣬳����˳�
	{
		cout << "���ļ�����" << endl;
		exit(0);
	}
	nElem = 0;
	Maxu = n;
	if (n) {
		user = new Student[n];
	}
	else {
		user = 0;
	}
	for (int i = 0; i < 9; i++)
	{
		infile >> num;
	}
	while (infile >> num)
	{
		infile >> na;
		for (i = 0; i < K; i++) {
			infile >> sc[i];
		}
		for (i = 0; i < K; i++)
		{
			infile >> g[i];
		}
		infile >> ag;
		if (nElem == Maxu)						//���ʵ�ʿռ䲻��
		{
			Student *newptr;
			newptr = new Student[Maxu + 10];    //����һ�±�ռ�
			for (i = 0; i < nElem; i++)
			{
				newptr[i] = user[i];			//��ԭ���е�Ԫ�ؿ������±���
			}
			delete []user;					//�ͷ�ԭ��ռ� delete[Maxu]user; 
			Maxu += 10;
			user = newptr;
		}

		//����Ԫ�أ�
		user[nElem].setnum(num);
		user[nElem].setname(na);
		user[nElem].setscore(sc);
		user[nElem].setgpa(g);
		user[nElem].setagpa(ag);
		nElem++;
	}
	infile.close();
}

UserDatabase::~UserDatabase()
{
	ofstream ofile;
	int temp_score[K];
	double temp_gpa[K];
	double temp_agpa;
	fstream file("D:/user.txt", ios::out);
	ofile.open("D:/user.txt");
	ofile << "ѧ��             ����            ����          ����          �������          ����1          ����2          ����3          ƽ������" << endl;
	for (int i = 0; i < nElem; i++)
	{
		user[i].getscore(temp_score);
		user[i].getgpa(temp_gpa);
		user[i].getagpa(temp_agpa);
		ofile << user[i].getnum() << "    " << user[i].getname();
		for (int j = 0; j < K; j++)
		{
			ofile << "              " << temp_score[j];
		}
		for (int j = 0; j < K; j++)
		{
			ofile << "                " << temp_gpa[j];
		}
		ofile << "                " << temp_agpa << endl;
	}
	ofile.close();
	nElem = 0;
	Maxu = 30;
	user = new Student[Maxu];
}

void UserDatabase::clear()
{
	nElem = 0;
	Maxu = 30;
	user = new Student[Maxu];
	ofstream f("D:/user.txt", ios::trunc);
	f.close();

}
void UserDatabase::add_record(char * num, char *name, int score[])
{
	if (nElem == Maxu)
	{
		Student *newptr;
		newptr = new Student[Maxu + 10];
		for (int i = 0; i < nElem; i++)
			newptr[i] = user[i];
		for (int i = 0; i < Maxu; i++)   //ɾ��ԭ��ռ�õĿռ�
		{
			Student* temp;
			temp = user;
			user++;
			delete temp;
		}
		Maxu += 10;
		user = newptr;
	}
	user[nElem].setnum(num);
	user[nElem].setname(name);
	user[nElem].setscore(score);
	user[nElem].computegpa();
	user[nElem].computeagpa();
	nElem++;
}
void UserDatabase::delete_record(Student *p)
{
	int i, j;
	int temp_score[K];
	double temp_gpa[K];
	double temp_agpa;
	for (i = 0; i < nElem; i++)
	{
		if (strcmp(p->getnum(), user[i].getnum()) == 0)
		{
			for (j = i; j < nElem - 1; j++)
			{
				user[i].setnum(user[i + 1].getnum());
				user[i].setname(user[i + 1].getname());
				user[i + 1].getscore(temp_score);
				user[i].setscore(temp_score);
				user[i + 1].getgpa(temp_gpa);
				user[i].setgpa(temp_gpa);
				user[i + 1].getagpa(temp_agpa);
				user[i].setagpa(temp_agpa);
			}
		}
	}
	nElem--;
}
void UserDatabase::modify_record(Student *p, int score[])
{
	p->setscore(score);
	p->computegpa();
	p->computeagpa();
}
Student * UserDatabase::query(char *num)
{
	int i;
	for (i = 0; i < nElem; i++)
	{
		if (strcmp(user[i].getnum(), num) == 0)
		{
			return &user[i];
		}
	}
	return NULL;
}
void UserDatabase::sorta_num()
{
	int i, j;
	int min_entry;
	for (i = 0; i < nElem; i++)
	{
		min_entry = i;
		for (j = i + 1; j < nElem; j++)
		{
			if (strcmp(user[j].getnum(), user[min_entry].getnum()) < 0)
				min_entry = j;
		}
		swap(user[i], user[min_entry]);
	}
}
void UserDatabase::sorta_name()
{
	int i, j;
	Student current;
	for (i = 1; i < nElem; i++)
	{
		if (strcmp(user[i].getname(), user[i - 1].getname()) < 0)
		{
			j = i;
			current.copy(user[i]);
			do
			{
				user[j].copy(user[j - 1]);
				j--;
			} while (j > 0 && strcmp(user[j - 1].getname(), current.getname()) > 0);
			user[j].copy(current);
		}
	}
}
void UserDatabase::sorta_agpa()
{
	int i, j;
	double a, b;
	for (i = nElem - 1; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			user[j].getagpa(a);
			user[j + 1].getagpa(b);
			if (a > b)
			{
				swap(user[j], user[j + 1]);
			}
		}
	}
}
void UserDatabase::sort_num()
{
	int i, j;
	int max_entry;
	for (i = 0; i < nElem; i++)
	{
		max_entry = i;
		for (j = i + 1; j < nElem; j++)
		{
			if (strcmp(user[j].getnum(), user[max_entry].getnum()) > 0)
				max_entry = j;
		}
		swap(user[i], user[max_entry]);
	}
}
void UserDatabase::sort_name()
{
	int i, j;
	Student current;
	for (i = 1; i < nElem; i++)
	{
		if (strcmp(user[i].getname(), user[i - 1].getname()) > 0)
		{
			j = i;
			current.copy(user[i]);
			do
			{
				user[j].copy(user[j - 1]);
				j--;
			} while (j > 0 && strcmp(user[j - 1].getname(), current.getname()) < 0);
			user[j].copy(current);
		}
	}
}
void UserDatabase::sort_agpa()
{
	double a, b;
	for (int i = nElem - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			user[j].getagpa(a);
			user[j + 1].getagpa(b);
			if (a < b)
			{
				swap(user[j], user[j + 1]);
			}
		}
	}
}
int UserDatabase::disp(int begin)
{
	cout << endl;
	int i, j;
	if (nElem == 0)
	{
		form_head();
		form_title("ERROR!");
		form_body("û���κμ�¼");
		divideline();
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}
	int start = (begin - 1) * 10;
	int total = (nElem % 10 == 0) ? nElem / 10 : nElem / 10 + 1;
	int temp_score[K];
	double temp_gpa[K];
	double temp_agpa;
	char c[10];
	form_head();
	form_title("��¼��ʾ");
	form_choice("ѧ��           ����             ����   ����   ������� ����1   ����2   ����3   ƽ������");
	if ((nElem - start) <= 10)
	{
		for (i = start; i < nElem; i++)
		{
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << " ";
			}
			cout << "|";
			user[i].getscore(temp_score);
			user[i].getgpa(temp_gpa);
			user[i].getagpa(temp_agpa);
			printf("%-14s ", user[i].getnum());
			printf("%-16s ", user[i].getname());
			printf("%-4d   %-4d   %-4d   ", temp_score[0], temp_score[1], temp_score[2]);
			printf("  %-4.1lf    %-4.1lf    %-4.1lf     ", temp_gpa[0], temp_gpa[1], temp_gpa[2]);
			printf("%.1lf", temp_agpa);
			for (int i = 0; i < 17; i++)
			{
				cout << " ";
			}
			cout << "|" << endl;
		}
	}
	else
	{
		for (i = start; i < 10; i++)
		{

			user[i].getscore(temp_score);
			user[i].getgpa(temp_gpa);
			user[i].getagpa(temp_agpa);
			printf("%-14s ", user[i].getnum());
			printf("%-16s ", user[i].getname());
			printf("%-4d   %-4d   %-4d   ", temp_score[0], temp_score[1], temp_score[2]);
			printf("  %-4.1lf    %-4.1lf    %-4.1lf     ", temp_gpa[0], temp_gpa[1], temp_gpa[2]);
			printf("%.1lf", temp_agpa);
			for (int i = 0; i < 17; i++)
			{
				cout << " ";
			}
			cout << "|" << endl;
		}

	}
	for (int i = 0; i < 5; i++)
		cout << " ";
	for (i = 0; i < 80; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << " ";
	printf("��������ҳ����%d, ��%dҳ\n", begin, total);
	for (int i = 0; i < 5; i++)
		cout << " ";
	printf("��һҳ��Y/N��:");
	cin >> c;
	for (int i = 0; i < 5; i++)
		cout << " ";
	for (i = 0; i < 91; i++)
		cout << "-";
	cout << endl;
	if (begin == total)
	{
		return 1;
	}
	if (strcmp(c, "Y") == 0 || strcmp(c, "y") == 0)
	{
		disp(begin + 1);
	}
	return 1;
}



int add_page(UserDatabase &user)
{
	char num[N];
	char name[M];
	int score[K];
	form_head();
	form_title("���Ӽ�¼");
	form_input("������ѧ��ѧ��: ");
	cin >> num;
	if (user.query(num) != NULL)
	{
		form_head();
		form_title("  ERROR!  ");
		form_body("��ѧ���Ѵ���");
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}
	else
	{
		form_input("������ѧ��������");
		cin >> name;
		form_input("������ѧ�������ɼ���");
		cin >> score[0];
		form_input("������ѧ������ɼ���");
		cin >> score[1];
		form_input("������ѧ��������Ƴɼ���");
		cin >> score[2];
		user.add_record(num, name, score);
		user.sorta_num();
		divideline();
		form_body("��ӳɹ�");
		divideline();
		cout << endl;

		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);

		return 0;
	}
}

int modify_page(UserDatabase &user)
{
	cout << endl;
	char num[N];
	char name[M];
	int score[K];
	Student *temp;
	char c[N];
	form_head();
	form_title("�޸ļ�¼");
	form_input("������ѧ��ѧ��: ");
	cin >> num;
	if (user.query(num) == NULL)
	{
		form_head();
		form_title("  ERROR!  ");
		form_body("��ѧ��������");
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}
	else
	{
		temp = user.query(num);
		temp->disp();
		form_input("������ѧ���޸ĺ�����ɼ���");
		cin >> score[0];
		form_input("������ѧ���޸ĺ�����ɼ���");
		cin >> score[1];
		form_input("������ѧ���޸ĺ������Ƴɼ���");
		cin >> score[2];
		divideline();
		form_input("ȷ���޸ģ�Y/N����");
		cin >> c;
		divideline();
		if (strcmp(c, "Y") == 0 || strcmp(c, "y") == 0)
		{
			user.modify_record(temp, score);

			divideline();
			form_title("�޸ĳɹ�");
			user.sorta_num();
			form_body("3����Զ����ز˵�");
			_sleep(3 * 1000);
			return 1;
		}
		else
		{
			form_head();
			form_title("  ERROR!  ");
			form_body("�޸�ʧ��");
			form_body("3����Զ����ز˵�");
			_sleep(3 * 1000);
			return 0;

		}
	}
}

int delete_page(UserDatabase &user)
{
	cout << endl;
	int i, j, k;
	char num[N];
	char name[M];
	int score[K];
	double gpa[K];
	double agpa;
	Student *temp;
	char c[N];
	form_head();
	form_title("ɾ����¼");
	form_input("������ѧ��ѧ��: ");
	cin >> num;
	if (user.query(num) == NULL)
	{
		form_head();
		form_title("  ERROR!  ");
		form_body("��ѧ��������");
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}
	else
	{
		temp = user.query(num);
		temp->disp();
		divideline();
		form_input("ȷ��ɾ����Y/N����");
		cin >> c;
		cout << endl;
		if (strcmp(c, "Y") == 0 || strcmp(c, "y") == 0)
		{
			user.delete_record(temp);
			divideline();
			form_body("ɾ���ɹ�");
			form_body("3����Զ����ز˵�");
			_sleep(3 * 1000);
			user.sorta_num();
			return 1;
		}
		else
		{
			form_body("ɾ��ʧ��");
			form_body("3����Զ����ز˵�");
			_sleep(3 * 1000);
			return 0;
		}
	}

}
int search_page(UserDatabase &user)
{
	cout << endl;
	int i, j, k;
	char num[N];
	char name[M];
	int score[K];
	double gpa[K];
	double agpa;
	Student *temp;
	char c[N];
	form_head();
	form_title(" ���� ");
	form_input("������ѧ��ѧ��: ");
	cin >> num;
	if (user.query(num) == NULL)
	{
		form_head();
		form_title("  ERROR!  ");
		form_body("��ѧ��������");
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}
	else
	{
		char in;
		temp = user.query(num);
		temp->disp();
		divideline();
		form_input("���������ַ��ٰ��س����ɷ��ز˵�:");
		cin >> in;
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}

}
int sort_page(UserDatabase &user)
{
start:
	cout << endl;
	int i, j, k;
	form_head();
	form_title("����ҳ");
	form_choice("��ѡ������ʽ");
	form_body("1 - ��ѧ�ţ�����");
	form_body("2 - ������������");
	form_body("3 - ��ƽ�����㣨����");
	form_body("4 - ��ѧ�ţ�����");
	form_body("5 - ������������");
	form_body("6 - ��ƽ�����㣨����");
	form_body("0 - �˳�  ");
	form_input("���������ѡ��");
	int num;
	cin >> num;
	switch (num)
	{
	case 0:
		return 0;
	case 1:
		user.sorta_num();
		break;
	case 2:
		user.sorta_name();
		break;
	case 3:
		user.sorta_agpa();
		break;
	case 4:
		user.sort_num();
		break;
	case 5:
		user.sort_name();
		break;
	case 6:
		user.sort_agpa();
		break;
	default:
		form_head();
		form_title("  ERROR!  ");
		form_body("����ĺ��볬������Χ�������˵�����ѡ��");
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		goto start;
	}

	form_head();
	form_title("����ɹ�");
	form_body("3����Զ����ز˵�");
	_sleep(3 * 1000);

	return 1;
}
int all_delete(UserDatabase &user)
{
	int i, j;
	char c[10];
	form_head();
	form_title("ȫ��ɾ��");
	form_input("ȷ��ɾ����Y/N����");
	cin >> c;
	for (i = 0; i < 40; i++)
		cout << "-";
	cout << endl;
	if (strcmp(c, "Y") == 0 || strcmp(c, "y") == 0)
	{
		user.clear();
		form_head();
		form_title("����ɹ�");
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 1;
	}
	else
	{
		form_head();
		form_body("3����Զ����ز˵�");
		_sleep(3 * 1000);
		return 0;
	}
}


void error_page()
{
	form_head();
	form_title("  ERROR!  ");
	form_body("����ĺ��볬������Χ�������˵�����ѡ��");
	form_body("3����Զ����ز˵�");
	_sleep(3 * 1000);
}

int main()
{
	UserDatabase user;
start:
	system("cls");
	int flag = main_menu();
	while (flag != 0)
	{
		switch (flag)
		{
		case 1:
			add_page(user);
			break;
		case 2:
			modify_page(user);
			break;
		case 3:
			delete_page(user);
			break;
		case 4:
			search_page(user);
			break;
		case 5:
			sort_page(user);
			break;
		case 6:
			user.disp(1);
			break;
		case 7:
			all_delete(user);
			break;
		case 0:
			return 0;
		default:
			error_page();
		}

		flag = main_menu();
	}
	return 0;
}
