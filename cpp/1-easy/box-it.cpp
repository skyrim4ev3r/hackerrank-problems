#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
        int l,b,h;
    public:
        Box(): l{0}, b{0}, h{0}{}
        Box(int l,int b,int h): l{l}, b{b}, h{h}{}
        Box(const Box& g): l{g.l}, b{g.b}, h{g.h}{}

        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }

        unsigned long long CalculateVolume(){
            return (long long)b * h * l;
        }

        friend bool operator<(const Box& box1,const Box& box2){
            if (box1.l != box2.l) {
                 return box1.l < box2.l;
            }

            if (box1.b != box2.b) {
                 return box1.b < box2.b;
            }

            return box1.h < box2.h;
        }

        friend ostream& operator <<(ostream& output,  const Box& box) {
                output << box.l << " " << box.b << " " << box.h;
                return output;
        }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
