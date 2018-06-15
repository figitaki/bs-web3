module Utils = {
  [@bs.module "web3"][@bs.scope "utils"]
  external randomHex : int => string = "randomHex";
}

[@bs.module "web3"][@bs.val] external version: string = "version";
