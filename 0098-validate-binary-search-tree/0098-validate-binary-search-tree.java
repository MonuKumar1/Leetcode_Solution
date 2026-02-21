/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    boolean solve(TreeNode x, Long leftMax, Long rightMin) {

        if (x == null) {
            return true;
        }

        if ((long)x.val <= rightMin || (long)x.val >= leftMax) {
            // System.out.println(leftMax + " " + rightMin + " " + x.val);
            return false;

        }

        return solve(x.left, (long)x.val, rightMin) && solve(x.right, leftMax, (long)x.val);

    }

    public boolean isValidBST(TreeNode root) {

        return solve(root, Long.MAX_VALUE, Long.MIN_VALUE);

    }
}