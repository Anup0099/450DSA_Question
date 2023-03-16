/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
     void dfs(Node *node, Node *copy, vector<Node *> &visited)
    {
        visited[node->val] = copy;
        for (auto curr : node->neighbors)
        {
            if (visited[curr->val] == NULL)
            {
                Node *newNode = new Node(curr->val);
                copy->neighbors.push_back(newNode);
                dfs(curr, newNode, visited);
            }
            else
            {
                copy->neighbors.push_back(visited[curr->val]);
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL)
            return NULL;
        vector<Node *> visited(101, NULL);
        Node *copy = new Node(node->val);
        visited[node->val] = copy;
        for (auto curr : node->neighbors)
        {
            if (visited[curr->val] == NULL)
            {
                Node *newNode = new Node(curr->val);
                copy->neighbors.push_back(newNode);
                dfs(curr, newNode, visited);
            }
            else
            {
                copy->neighbors.push_back(visited[curr->val]);
            }
        }
        return copy;
    }
};