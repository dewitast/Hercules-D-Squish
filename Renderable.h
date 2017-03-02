#ifndef RENDERABLE_H
#define RENDERABLE_H

/** @class Renderable
  * Kelas abstrak Renderable merepresentasikan objek yang dapat dicetak.
  */
class Renderable{
public:
	/** @brief Constructor.
	  * @param c Char yang merepresentasikan objek ketika dicetak.
	  */
	Renderable(char c);

	/** @brief Destructor.
	  */
	virtual ~Renderable();

	/** @brief Mengembalikan char yang merupakan representasi objek ketika dicetak
	  */
	virtual char render() = 0;
protected:
	char name;
};

#endif
