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

    TreeNode solve(TreeNode root,TreeNode p,TreeNode    q){
        if(root == p || root == q || root == null)return root;

        TreeNode left = solve(root.left,p,q);
        TreeNode right = solve(root.right,p,q);

        if(left!=null && right !=null)    return root;
        if(left!=null) return left;
        else return right;

    }

    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        
        return solve(root,p,q);
    }
}