# acornfaucet
Source code for the ```acornfaucet1``` Telos account/contract

This EOSIO contract has a single action "get(account)", which pays 0.0001 ACORN to the given Telos account. The faucet temporarily pays for the RAM to store the ACORN balance if the target account doesn't have an ACORN token balance entry yet. IF that's the case, the RAM is charged back to the faucet user the next time they try to transfer any amount of their ACORN.  

See the ACORN faucet contract/account here: https://telos.eosx.io/account/acornfaucet1

Telos is an EOSIO-based blockchain network. See: https://telosfoundation.io/

ACORN is a token hosted on Telos, at the ```acornaccount``` contract. See: https://www.acorns.fun
