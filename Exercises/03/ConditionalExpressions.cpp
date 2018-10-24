int a = 256;
if (a > 255 && ++a)
{
	cout << "Valar morghulis\n";
}

unsigned char a = 255;
unsigned char b = 100;
if (++a > 100 && b > 50)
{
	cout << "Hear Me Roar\n";
}

int b = 16;
if (b > 16 || b++)
{
	cout << "Valar dohaeris\n";
}

int d = 512;
if (d > 512 && ++d)
{
	cout << "King of the north\n";
}

int c = 0;
if (c >= 0 && c++)
{
	cout << "Winter is coming\n";
}

int e = 1024;
if (e =! 512 ? 1024 : !(256 - 2*16*8))
{
	cout << "Where are my dragons ???\n";
}

int a = 0x8;
switch (a)
{
    default: cout << -1;
    case 7: cout << 02;
    case 8: case 9: cout << 09;
    case 10: cout << 00;
}

int num1, num2;
if (num1 !> num2)
{
    std::cout << "Num1 = " << num1;
}
else if (num1 <> num2)
{
    std::cout << "Num1 <> Num2"
}
else
{
    std::cout << "Num2: " << num2;
}

int sumOfGrades = 6 + 3 + 4 + 4 + 3 + 6;
int numberOfGrades = 6;

if((sumOfGrades / numberOfGrades) > 4.5)
{
    std::cout << "Very good\n";
}
else
{
    std::cout << "Still needs to improve\n"
}

int a = 3;
int b = 48 % 16; 
std::cout << a / b;


float a = 0.7;
if (a < 0.7)
{
    std::cout << "a < 0.7";
}
else
{
    std::cout << "a > 0.7 || a == 0.7";
}

switch (0X0)
{
    case NULL:
    {
        cout << "VW Passat\n";
        break;
    }
    case '\0':
    {
        cout << "VW Golf\n";
        break;
    }
    case 0:
    {
        cout << "VW Jetta\n";
        break;
    }
    case 00:
    {
        cout << "VW Scirocco\n";
        break;
    }
    case 0b0:
    {
        cout << "VW Arteon\n";
        break;
    }
    default: 
    {
        cout << "VW Polo\n";
    }
}

if (((((currentIdx % boardSize) + 1 >= boardSize && currentDirection == DIRECTION_RIGHT) || ((currentIdx % boardSize) - 1 < 0 && currentDirection == DIRECTION_LEFT)
	|| (currentIdx + 1) / boardSize >= boardSize)
	&& board[currentIdx / boardSize][currentIdx % boardSize] != 0u)
	|| ((currentDirection == DIRECTION_RIGHT || currentDirection == DIRECTION_DOWN) && board[(currentIdx + movement) / boardSize][(currentIdx + movement) % boardSize] != 0)
	|| ((currentDirection == DIRECTION_UP || currentDirection == DIRECTION_LEFT) && board[(currentIdx - movement) / boardSize][(currentIdx - movement) % boardSize] != 0))
{
	currentDirection = (DIRECTIONS)((currentDirection + 1) % DIRECTIONS_COUNT);
}
