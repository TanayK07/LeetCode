class Solution {
public:
    int findInMountainArray(int target, MountainArray &arr) {
        int s = 0, e = arr.length() - 1, m;
        while (s < e) {
            m = s + (e - s) / 2;
            if (arr.get(m) < arr.get(m + 1))
                s = m + 1;
            else
                e = m;
        }
        int p = m, l = -1, r = -1;
        s = 0, e = p;
        while (s <= e) {
            m = s + (e - s) / 2;
            int v = arr.get(m);
            if (v == target)
                l = m;
            if (v < target)
                s = m + 1;
            else
                e = m - 1;
        }
        s = p+1;
        e = arr.length() - 1;
        while (s <= e) {
            m = s + (e - s) / 2;
            int v = arr.get(m);
            if (v == target)
                r = m;
            if (v > target)
                s = m + 1;
            else
                e = m - 1;
        }
        return l == r ? l : (l != -1 ? l : r);
    }
};