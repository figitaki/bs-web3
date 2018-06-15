# bs-web3

Web3 bindings for [BuckleScript](https://github.com/bloomberg/bucklescript) in [Reason](https://github.com/facebook/reason).

[![npm](https://img.shields.io/npm/v/bs-web3.svg?style=flat-square)](https://www.npmjs.com/package/bs-web3) [![Travis](https://img.shields.io/travis/figitaki/bs-web3.svg?style=flat-square)](https://travis-ci.org/figitaki/bs-web3)

## Installation

Install bs-web3 using npm:

```
npm install web3
```

Alternatively, using yarn:

```
yarn add web3
```

Then add bs-web3 as a dependency to `bsconfig.json`

## Usage

This package implements the majority of functionality provided by Web3. Here's a basic example.

```
Js.log(Web3.version);
Js.log(Web3.Utils.randomHex(32));
```

For more examples see the `example/` folder. 

