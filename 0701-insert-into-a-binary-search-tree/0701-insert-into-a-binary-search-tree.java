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
    void help(TreeNode root, int val) {
        if (root == null) {
            //----This doesnt work as Java passes references by value.
            // root = new TreeNode(val);
            // root.left=null;
            // root.right=null;
            return;
        }
        int rval = root.val;
        if (val > rval) {
            if (root.right != null)
                help(root.right, val);
            else {
                root.right = new TreeNode(val);
                return;
            }
        } else {
            if (root.left != null)
                help(root.left, val);
            else {
                root.left = new TreeNode(val);
                return;
            }
        }
    }

    public TreeNode insertIntoBST(TreeNode root, int val) {
        if (root == null) {
            root = new TreeNode(val);
            root.left=null;
            root.right=null;
            return root;
        }
        help(root, val);
        return root;
    }
}