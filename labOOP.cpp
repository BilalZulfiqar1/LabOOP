#include <iostream>

using namespace std;


class band
{

	protected:
		
		int count;
		virtual int getcount()=0;
	
						
};

class metal:public band
{
	private:
		int members;
		int pyrotech;
	
	public:
	
		
		
		void setmemb(int members)
		{
			this ->members=members;
		}
		
		int getmemb()
		{
			return this->members;
		}
		
		void setpyro(int pyrotech)
		{
			this ->pyrotech=pyrotech;
		}
		
		int getpyro()
		{
			return this->pyrotech;
		}
		
		int getcount()
		
		{
			count=members+pyrotech;
			return count;
			
		}
		
};

class Jazz:public band
{
private:
		int members;
	
	public:
	
		
		
		void setmemb(int members)
		{
			this ->members=members;
		}
		
		int getmemb()
		{
			return this->members;
		}
		
		
		int getcount()
		
		{
			count=members;
			return count;
			
		}
};
class marching:public band
{
	private:
		int members;
	
	public:
	
		
		
		void setmemb(int members)
		{
			this ->members=members;
		}
		
		int getmemb()
		{
			return this->members;
		}
		
		
		int getcount()
		
		{
			count=members;
			return count;
			
		}
};
class sympony:public band
{
	private:
		int members;
		int conductor;
	
	public:
		
		void setmemb(int members)
		{
			this ->members=members;
		}
		
		int getmemb()
		{
			return this->members;
		}
		
	
		int getcount()
		
		{
		
			conductor =1;
			count=members+conductor;
			return count;
			
			
		
		}
};


int main()
{
	metal Bilal;
	Bilal.setmemb(3);
	Bilal.setpyro(6);
	
	Jazz raaf;
	raaf.setmemb(14);
	marching shah;
	shah.setmemb(21);
	
	sympony khan;
	khan.setmemb(12);
	
	
	cout<<Bilal.getcount()<<endl;
	cout<<raaf.getcount()<<endl;
	cout<<shah.getcount()<<endl;
	cout<<khan.getcount()<<endl;
	
	//setcount(a);
	
}
