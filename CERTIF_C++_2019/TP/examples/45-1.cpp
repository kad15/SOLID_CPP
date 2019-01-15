#include<iostream.h>
#include<time.h>
class a {
public: 
	virtual void ex(void);
}
;
class b {
public:
	void ex(void);
	
}

main()
{
	cout<<sizeof(a)<<endl;
	cout<<sizeof(b)<<endl;
}