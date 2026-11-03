public:
    int countRotations(string s, int k) {
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        
    }
};class Solution {
public:

    const result = rotateLeft(d, arr);

    ws.write(result.join(' ') + '\n');

    ws.end();
}

    const n = parseInt(firstMultipleInput[0], 10);

    const d = parseInt(firstMultipleInput[1], 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');
    // Write your code here

}