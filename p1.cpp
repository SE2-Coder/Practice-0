#include<iostream>
using namespace std;

int main()
{
  
    cout << "=========================================================================================" << endl;
    cout << "=========== Programa de diagrama con letras practica - 0 Informatica II =================" << endl; 
  //I declare the variables for the first two triangles
    int quantity = 0; //This variable does indicate the number of characters in the pattern or diagram.
    do
    {
        cout << "Digite el número entre 2 y 26 para crear el diagrama: ";
        cin >> quantity;
    }while(quantity < 1 || quantity > 26);
    
    
    
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

    cout << endl;//one last line break to close the pattern.

    //==========================================Punto 02===========================================

    /*I declare 3 new variables for the second pattern, 'under_row_counter', so that in the same way as the first pattern or diagram it counts each row.  */
    int under_row_counter = 65;
    int counter_letter = quantity - 1;
    int counter_mirror_letter = letter;


    /*I use a new while loop in the reverse way of the first diagram. The iteration will be performed until the counter 'under_row_counter is one unit short of having the value of 'letter''*/
    while ( under_row_counter < letter )
    {
        /*when 'i' is less than 'counter_letter' it will go up one unit it will print the corresponding letter value to the ascii system*/
        for ( int i = 0; i < counter_letter; i++ )
        {
            cout << static_cast<char>( 65 + i );/*This line allows us to print characters by walking through the ascii system as an array.*/
        }

        /*To print the spaces; 'j' will have the value of 'counter_letter', and in the same way it will be less than 'quantity', for each time the iteration goes through the spaces will be printed.*/
        for ( int j = counter_letter; j < quantity; j++ )
        {
            cout << "  ";
        }
        cout << "  ";

        //This 'for' prints the letters of the last triangle in reverse.
        for ( int k = counter_mirror_letter-1; k >= 65; k-- )
        {
            cout << static_cast<char>(k);
        }

        under_row_counter++;//the counter is incremented at the end of each 'while'.
        counter_letter--; //decrement at the end of each 'while'.
        counter_mirror_letter--;//decrement at the end of each 'while'.

        cout << endl;
    }
return 0;
}