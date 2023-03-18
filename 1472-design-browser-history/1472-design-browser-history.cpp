class BrowserHistory {
public:
    stack<string> past;
    stack<string> future;
    string curr;
    BrowserHistory(string homepage)
    {
        curr = homepage;
    }

    void visit(string url)
    {
        past.push(curr);
        curr = url;
        while (!future.empty())
        {
            future.pop();
        }
    }

    string back(int steps)
    {
        while (steps > 0 and !past.empty())
        {
            future.push(curr);
            curr = past.top();
            past.pop();
            steps--; // steps = steps - 1;
        }
        return curr;
    }

    string forward(int steps)
    {
        while (steps > 0 and !future.empty())
        {
            past.push(curr);
            curr = future.top();
            future.pop();
            steps--;
        }
        return curr;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */