#include<iostream>
using namespace std;

int main()
{
  //I declare the variables for the first two triangles
    int quantity = 26; //This variable does not indicate the number of characters in the pattern or diagram.
    int letter = 65 + quantity - 1;//I use letter with the value 65, because it is the corresponding value in ascii for the letter 'A', which is the letter that all rows start with.
    int rows_counter = 65;//I create this counter for the rows.
    int space_counter = quantity - 1; //this counter works according to spaces.

    /*==========================================================================================
    I created a 'while' loop to create the two patterns or triangles.
    ===========================================================================================*/

    while (rows_counter < letter)
    {
            /*In this 'for' loop I start the i at value '65', and the row counter has the same value, so when the variable 'i', is greater than 65 it will go to the next 'for' loop.*/
            for (int i = 65; i <= rows_counter; i++)
            {
                cout << static_cast<char>(i);/*static_cast<char> allows us to use the ascii as an array.*/
            }
            
            /*This 'for' loop works by targeting the number of spaces per row, similar to the previous loop.*/
            for ( int j = 0; j <= space_counter; j++)
            {
                cout << "  ";
            }

            /*This loop handles the letters in reverse, the decrementing variable causes it to loop through and print the ascii in reverse.*/
            for (int l = rows_counter; l >= 65; --l )
            {
                cout << static_cast<char>(l);
            }
            cout << endl;//here we print each corresponding line break.
            rows_counter++;//this counter increments for each completed while loop.
            space_counter--;//this counter decrements for each completed while loop.

            
    }

    //This 'for' loop prints the characters on the left side of the triangle.
    for (int i = 0; i < quantity-1; i++)
        {
            cout << static_cast<char>(65 + i);
        }

    cout << " " << static_cast<char>(64 + quantity) << "  ";/*This 'cout' prints the spaces and the last letter of the selected amount of characters*/

        //this 'for' loop prints the last string of characters in reverse order.
        for (int l = rows_counter - 1; l >= 65; l-- )
        {
            cout << static_cast<char>(l);
        }

    cout << endl << endl;//one last line break to close the pattern.

return 0;
}