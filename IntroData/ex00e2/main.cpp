#include <iostream>

using namespace std;

int main()
{
    int totalRow,totalColumn,r;
    cin >> totalRow >> totalColumn; // first line input
    cin >> r; // total Region of interest

    int matrix[totalRow][totalColumn];

    for (int i = 0; i < totalRow; ++i) {
        for (int j = 0; j < totalColumn; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for(int r_count =0;r_count < r;r_count++){
        int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2; // start the first row and col at 1,1!!!
        if((r1 > r2) || (c1 > c2))cout << "INVALID" << endl;
        else if(r1 > totalRow || c1 > totalColumn) cout << "OUTSIDE" << endl;
        else{
            --r1; --c1; --r2; --c2; // normalize to make r1 start at 0?
            int maximum = matrix[r1][c1];
            for(int currentRow = r1;(currentRow <= r2) && (currentRow < totalRow); currentRow++){
                for(int currentColumn = c1;(currentColumn <= c2) && (currentColumn < totalColumn); currentColumn++){
                    int currentMember = matrix[currentRow][currentColumn];
                    maximum = (currentMember > maximum) ? currentMember : maximum;
                }
            }
            cout << maximum << endl;
        }

    }
        return 0;
}
