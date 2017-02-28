class Renderable{
public:
	Renderable(char);
	~Renderable();
	virtual char render() = 0;
protected:
	char name;
};