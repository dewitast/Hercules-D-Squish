#include "Zoo.h"
#include "Cell.h"

Zoo::Zoo() : baris(0), kolom(0)
{}

Zoo::Zoo(int b, int k) : baris(b), kolom(k)
{
	*cell = new Cell* [baris];
	for (int i=0;i<baris;++i)
	{
		*cell[i] = new Cell[kolom];
	}
}

Zoo::Zoo(const Zoo& z) : baris(z.baris), kolom(z.kolom)
{
	*cell = new Cell* [baris];
	for (int i=0;i<baris;++i)
	{
		*cell[i] = new Cell[kolom];
	}
}

Zoo& Zoo::operator=(const Zoo& z)
{
	for (int i=0;i<baris;++i)
		delete [] *cell;
	delete [] cell;
	*cell = new Cell* [baris];
	for (int i=0;i<baris;++i)
		*cell[i] = new Cell[kolom];
	for (int i=0;i<baris;++i)
		for (int j=0;j<kolom;++j)
			cell[i][j] = z.cell[i][j];

}

Zoo::~Zoo()
{
	for (int i=0;i<baris;++i)
		for (int j=0;j<kolom;++j)
			delete [] cell[i][j];
	delete [] cell;
}
