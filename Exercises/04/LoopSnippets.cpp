int countLoops()
{
    int counter = 0;
    for(int i = 0; i < 16; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                for(int n = 0; n < 2; n++)
                {
                    for(int l = 0; l < 0; l++)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    return counter;
}

void toDoOrNotToDo()
{
    int i = 0;
    do
    {
        cout << i;
        i++;
    } while(5, 4, 3, 2, 1, 0);
}

void octRange()
{
    for(int i = 0; i < 011; i++)
    {
        cout << i << endl;
    }
}

void print5Times()
{
    for(int i = 0; i <= 5; i++);
        cout << i << endl;
}

bool sober = false;
unsigned char beer = 0;
while(sober)
{
    beer++;
}

bool sober = false;
unsigned char beer = 0;
do
{
    beer++;
} while(sober);

bool sober = true;
unsigned char beer = 0;
while(sober)
{
    beer++;
}

for(int i = 0, j = 0; j < 20, i < 10; ++i, j += 3)
{
    cout << "We like C++\n";
}

for(int i = 0, j = 0; i < 10, j < 20; ++i)
{
    cout << "We love C++\n";
}

for(unsigned char i = 0; i < 256; i++)
{
    cout << "I find your lack of bits disturbing\n";
}

void printEven()
{
    int number = 1;
    // Print even numbers from in the range [1, 5]
    for(;;)
    {
        if(number > 5);
            break;

        if(number % 2 == 0)
        {
            cout << number << endl;
        }
        number++;
    }
}

void printOdd()
{
    // Print odd numbers in the range [1, 10]
    int number = 1;
    while(number <= 10)
    {
        if(number % 2 == 0)
            continue;
        cout << number << endl;
        number++;
    }
}
