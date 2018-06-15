let web3 = Web3.make();
web3.setProvider(new web3.Providers.HttpProvider());

let watchBalance = () => {
  let coinbase = web3.eth.coinbase;

  let originalBalance =  web3.Eth.getBalance(coinbase).toNumber();
}

