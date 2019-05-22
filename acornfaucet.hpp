/**
 * Simple ACORN faucet contract.
 */
#pragma once

#include <eosio/asset.hpp>
#include <eosio/eosio.hpp>
#include <eosio/transaction.hpp>

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
