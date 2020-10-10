#include "Map.h"

Map::Map() :layoutformat	  { {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30},
								{30, 30, 30,  0, 13, 13, 13, 13, 13, 13, 13, 13,  1, 30, 30, 30,  8, 30,  9, 30, 30, 30,  0, 13, 13, 13, 13, 17, 28, 13, 13, 13, 13,  1, 30, 30},
								{30, 30, 30,  8, 26, 26, 27, 26, 26, 26, 26, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26, 26, 26, 27, 11, 10, 26, 26, 26, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  2, 14,  3, 26,  2,  3, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26,  2,  3, 26,  6,  7, 26,  2,  3, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26, 11, 10, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26, 11, 10, 26, 26, 26, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26, 11, 10, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26, 11,  6, 14, 14,  3, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  6, 15,  7, 26,  6,  7, 26,  6, 13, 13, 13,  7, 30,  6, 13, 13, 13,  7, 26,  6, 15, 15, 15,  7, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  2, 14,  3, 26,  2, 14, 14, 14, 14, 14, 14,  3, 30,  2, 14, 14, 14,  3, 26,  2,  3, 26,  2, 14, 14,  7, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26,  6, 15, 15,  3,  2, 15, 15,  7, 30,  6, 15, 15, 15,  7, 26, 11, 10, 26,  6, 15, 15,  3, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26, 26, 26, 26, 11, 10, 30, 30, 30, 30, 30, 30, 30, 30, 30, 26, 11, 10, 26, 26, 26, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26,  2,  3, 26, 11, 10, 30, 18, 12, 12, 12, 19, 30,  2,  3, 26, 11, 10, 26,  2,  3, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  6, 15,  7, 26, 11, 10, 26,  6,  7, 30,  9, 30, 30, 30,  8, 30, 11, 10, 26,  6,  7, 26, 11, 10, 26,  6,  7, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 26, 26, 26, 26, 11, 10, 26, 30, 30, 30,  9, 30, 30, 30,  8, 30, 11, 10, 26, 26, 26, 26, 11, 10, 26, 26, 26, 26,  9, 30, 30},
								{30, 30, 30, 24, 14, 14, 14,  3, 26, 11,  6, 14, 14,  3, 30, 31, 30, 30, 30,  8, 30, 11,  6, 14, 14,  3, 30, 11,  6, 14, 14,  3, 26,  9, 30, 30},
								{30, 30, 30, 16, 15, 15, 15,  7, 26, 11,  2, 15, 15,  7, 30, 31, 30, 30, 30,  8, 30, 11,  2, 15, 15,  7, 30, 11,  2, 15, 15,  7, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 26, 26, 26, 26, 11, 10, 26, 30, 30, 30,  9, 30, 30, 30,  8, 30, 11, 10, 26, 26, 26, 26, 11, 10, 26, 26, 26, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  2, 14,  3, 26, 11, 10, 26,  2,  3, 30,  9, 30, 30, 30,  8, 30, 11, 10, 26,  2,  3, 26, 11, 10, 26,  2,  3, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26,  6,  7, 26, 11, 10, 30, 22, 13, 13, 13, 23, 30,  6,  7, 26, 11, 10, 26,  6,  7, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26, 26, 26, 26, 11, 10, 30, 30, 30, 30, 30, 30, 30, 30, 30, 26, 11, 10, 26, 26, 26, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26,  2, 14, 14,  7,  6, 14, 14,  3, 30,  2, 14, 14, 14,  3, 26, 11, 10, 26,  2, 14, 14,  7, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  6, 15,  7, 26,  6, 15, 15, 15, 15, 15, 15,  7, 30,  6, 15, 15, 15,  7, 26,  6,  7, 26,  6, 15, 15,  3, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  2, 14,  3, 26,  2,  3, 26,  2, 12, 12, 12,  3, 30,  2, 12, 12, 12,  3, 26,  2, 14, 14, 14,  3, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26, 11, 10, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26, 11,  2, 15, 15,  7, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 11, 30, 10, 26, 11, 10, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26, 11, 10, 26, 26, 26, 26, 11, 10, 26,  9, 30, 30},
								{30, 30, 30,  8, 26,  6, 15,  7, 26,  6,  7, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26,  6,  7, 26,  2,  3, 26,  6,  7, 26,  9, 30, 30},
								{30, 30, 30,  8, 26, 26, 27, 26, 26, 26, 26, 26,  9, 30, 30, 30,  8, 30,  9, 30, 30, 30,  8, 26, 26, 26, 27, 11, 10, 26, 26, 26, 26,  9, 30, 30},
								{30, 30, 30,  4, 12, 12, 12, 12, 12, 12, 12, 12,  5, 30, 30, 30,  8, 30,  9, 30, 30, 30,  4, 12, 12, 12, 12, 25, 20, 12, 12, 12, 12,  5, 30, 30} }
{

}

int Map::getlayouttexture(int x, int y)
{
	return layoutformat[x][y];
}
