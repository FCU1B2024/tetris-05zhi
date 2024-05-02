#include <stdio.h>

typedef enum
{
    EMPTY = -1,
    I,
    J,
    L,
    O,
    S,
    T,
    Z
}ShapeId;

typedef enum
{
    RED = 41,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE,
    BLACK = 0,
}Color;

typedef struct
{
    ShapeId shape;
    Color color;
    int size;
    char rotates[4][4][4];
}Shape;

Shape shapes[7] =
{
    {
        .shape = I,
        .color = CYAN,
        .size = 4,
        .rotates = {
            {
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0},
                {0,0,0,0}
            },
            {
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0}
            },
            {
                {0,0,0,0},
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0}
            },
            {
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0}
            }
        }
    },
    {
        .shape = J,
        .color = BLUE,
        .size = 3,
        .rotates = {
            {
                {0,1,0},
                {0,1,0},
                {1,1,0}
            },
            {
                {1,0,0},
                {1,1,1},
                {0,0,0}
            },
            {
                {0,1,1},
                {0,1,0},
                {0,1,0}
            },
            {
                {0,0,0},
                {1,1,1},
                {0,0,1}
            }
        }
    },
    {
        .shape = L,
        .color = YELLOW,
        .size = 3,
        .rotates = {
            {
                {0,1,0},
                {0,1,0},
                {0,1,1}
            },
            {
                {0,0,0},
                {1,1,1},
                {1,0,0}
            },
            {
                {1,1,0},
                {0,1,0},
                {0,1,0}
            },
            {
                {0,0,1},
                {1,1,1},
                {0,0,0}
            }
        }
    },
    {
        .shape = O,
        .color = GREEN,
        .size = 2,
        .rotates = {
            {
                {1,1},
                {1,1}
            },
            {
                {1,1},
                {1,1}
            },
            {
                {1,1},
                {1,1}
            },
            {
                {1,1},
                {1,1}
            }
        }
    },
    {
        .shape = S,
        .color = PURPLE,
        .size = 3,
        .rotates = {
            {
                {1,0,0},
                {1,1,0},
                {0,1,0}
            },
            {
                {0,1,1},
                {1,1,0},
                {0,0,0}
 
            },
            {
                {0,1,0},
                {0,1,1},
                {0,0,1}
            },
            {
                {0,0,0},
                {0,1,1},
                {1,1,0}
            }
        }
    },
    {
        .shape = T,
        .color = RED,
        .size = 3,
        .rotates = {
            {
                {0,0,0},
                {1,1,1},
                {0,1,0}
            },
            {
                {0,1,0},
                {1,1,0},
                {0,1,0}
            },
            {
                {0,1,0},
                {1,1,1},
                {0,0,0}
            },
            {
                {0,1,0},
                {0,1,1},
                {0,1,0}
            }
        }
    },
    {
        .shape = Z,
        .color = WHITE,
        .size = 3,
        .rotates = {
            {
                {1,1,0},
                {0,1,1},
                {0,0,0}
            },
            {
                {0,0,1},
                {0,1,1},
                {0,1,0}
            },
            {
                {0,0,0},
                {1,1,0},
                {0,1,1}
            },
            {
                {0,1,0},
                {1,1,0},
                {1,0,0}
            }
        }
    }
};

int main()
{
    Color cur;

    for (int i = 0; i < 7; i++) {
        for (int r = 0; r < 4; r++) {
            //¦L¥X¤è¶ô
            for (int s = 0; s < shapes[i].size; s++) {
                for (int t = 0; t < shapes[i].size; t++) {
                    if (shapes[i].rotates[r][s][t] == 0) {
                        cur = BLACK;
                    }
                    else {
                        cur = shapes[i].color;
                    }
                    printf("\033[%dm \033[0m", cur);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}