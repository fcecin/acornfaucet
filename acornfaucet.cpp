#include <acornfaucet.hpp>

namespace eosio {
  
  void faucet::get( name receiver ) {
    require_auth( receiver );
    
    // Attempt to pay 0.0001 ACORN to the receiver using the faucet's own ACORN balance.
    // If the faucet is empty for some reason, this simply fails.
    action(
	   permission_level{ _self, "active"_n },
	   "acornaccount"_n, "transfer"_n,
	   std::make_tuple(_self, receiver, asset(1, symbol("ACORN", 4)), std::string(""))
	   ).send();
  }
  
} /// namespace eosio

EOSIO_DISPATCH( eosio::faucet, (get) )
