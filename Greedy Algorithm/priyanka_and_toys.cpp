/*Priyanka has n toys; each toy has a weight w[i].\
A container can hold toys whose weights are all within 4 units of the lightest toy in that container, 
i.e., if the lightest toy in a container has weight x, every toy in that container must have weight between x and x + 4. 
Find the minimum number of containers needed to pack all toys.
hackerrank
*/

int toys(vector<int> w) {
    sort(w.begin(), w.end()); 
    int n = w.size();
    int containers = 0;

    int i = 0;
    while (i < n) {
        containers++;                 
        int base = w[i];         
        int limit = base + 4; 
        i++;               
        
        while (i < n && w[i] <= limit) {
            i++;
        }
    }

    return containers;
}