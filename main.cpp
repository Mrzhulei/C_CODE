#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	int score;
};
struct teacher
{
	string name;
	student sarray[5];
};
void hanshu(struct teacher tarray[],int num)
{
	for(int i=0;i<num;i++)
	{
		string p="ABCDE";
		tarray[i].name = "teacher_";
		tarray[i].name+=p[i];
		for(int j=0;j<5;j++)
		{
            tarray[i].sarray[j].name="student_";
			tarray[i].sarray[j].name+=p[j];
			int ranbom =rand()%61+40;
			tarray[i].sarray[j].score=ranbom;
		}
	}
}
void print(teacher tarray[],int num)
{
	for(int i=0;i<num;i++)
	{
		cout<<"��ʦ������Ϊ��"<<tarray[i].name<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"ѧ��������Ϊ��"<<tarray[i].sarray[j].name<<" "<<"ѧ���ķ���Ϊ"<< tarray[i].sarray[j].score<<endl;
		}
	}
}
int main ()
{
	struct teacher tarray[3];

		hanshu(tarray,3);

		print(tarray,3);
	return 0;





 }
