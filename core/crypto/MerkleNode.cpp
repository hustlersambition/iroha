#include "MerkleNode.hpp"

#include "Hash.hpp"
#include "../repository/TransactionRepository.hpp"

/**
* Implementation of a binary Merkle tree node;
*/
namespace MerkleNode {
std::string hash;
std::string pairedNode;
std::string parent;
std::vector<std::string> children;
}  // namespace MerkleNode
