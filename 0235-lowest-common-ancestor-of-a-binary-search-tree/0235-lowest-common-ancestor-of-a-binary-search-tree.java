/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public TreeNode solve(TreeNode root, TreeNode l, TreeNode r){

        if(root==null)return root;
        if(root==l || root==r)return root;
        TreeNode left = solve(root.left,l,r);
        TreeNode right = solve(root.right,l,r);

        if(left !=null && right !=null)return root;
        if(left!=null)return left;
        else return right;


    }


    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        return solve(root,p,q);
    }
}