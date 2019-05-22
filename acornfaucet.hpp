/**
 * This contract interacts with the 'acornaccount' ACORN token contract to allow
 *   'host' and 'player' clients to bet against each other.
 *
 * The 'host' offers commitments and reveals them. It can serve games as long as it has 
 *   a positive balance of deposits.
 *
 * Players play by simply transferring the token into this contract. The contract detects
 *   the transfer action and reacts accordingly, i.e. tries to immediately match it to a 
 *   host commitment. If it can't, the player's transfer is rejected.
 */
#pragma once

#include <eosio/asset.hpp>
#include <eosio/eosio.hpp>
#include <eosio/transaction.hpp>
//#include <eosio/crypto.hpp>

#include <string>

namespace eosiosystem {
   class system_contract;
}

namespace eosio {

   using std::string;

   class [[eosio::contract("acornfaucet")]] faucet : public contract {
      public:
         using contract::contract;

         [[eosio::action]]
	 void get( name receiver );
   };

} /// namespace eosio
