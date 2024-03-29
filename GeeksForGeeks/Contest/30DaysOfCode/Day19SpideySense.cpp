struct queueNode
{
    // i, j and distance stores x and y-coordinates
    // of a matrix cell and its distance from bomb
    // respectively
    int i, j, distance;
};

class Solution{
    
    public:
 
    // These arrays are used to get row and column
    // numbers of 4 neighbors of a given cell 
    int row[4] = { -1, 0, 1, 0};
    int col[4] = { 0, 1, 0, -1 };
    
    // return true if row number and column number
    // is in range
    bool isValid(int i, int j,int m,int n)
    {
    if ((i < 0 || i > m - 1) || (j < 0 || j >n - 1))
        return false;
 
    return true;
    }
 
   // return true if current cell is an open area and its
   // distance from bomb is not calculated yet
   // i.e true when we need to visit it else false
   bool isSafe(int i, int j, vector<vector<char>>& matrix,vector<vector<int>> &output)
   {
    if (isValid(i,j,matrix.size(),matrix[0].size())==false)
    {
        return false;
    }

    if (matrix[i][j] != 'O' || output[i][j] != -1)// i.e W/B or if O then it has been visited
        return false;
 
    return true;
    }
    
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
     
     vector<vector<int>> output(M,vector<int>(N)); //making a 2D vector of MXN
    queue<queueNode> q;
 
    // finding bomb location and adding into queue
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // initialize each cell as -1
            output[i][j] = -1;
            if (matrix[i][j] == 'B')
            {
                queueNode pos = {i, j, 0};
                q.push(pos);
                // guard has 0 distance
                output[i][j] = 0;
            }
        }
    }
    
    //BFS implementation
    
    // do till queue is empty
   while (!q.empty())
    {
 
        // get the front cell in the queue and update
        // its adjacent cells
        queueNode curr = q.front();
         q.pop();
        int x = curr.i, y = curr.j, dist = curr.distance;
 
        for (int i = 0; i < 4; i++)
        {
            
            if (isSafe(x + row[i], y + col[i], matrix, output))
            // i.e we need to visit this point (x+row[i],y+col[i])
            {
                //update distance in the output matrix
                output[x + row[i]][y + col[i]] = dist + 1;
 
                queueNode pos = {x + row[i], y + col[i], dist + 1};
                // pushing ine the queue
                q.push(pos);
            }
        
        }
     
      
    }
 
   // return output matrix
   
    return output;
    } 
    
  
};