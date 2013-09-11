#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

#include <string>

// Define ByteCoin-Qt message queue name for mainnet
#define BYTECOINURI_QUEUE_NAME_MAINNET "ByteCoinURI"
// Define ByteCoin-Qt message queue name for testnet
#define BYTECOINURI_QUEUE_NAME_TESTNET "ByteCoinURI-testnet"

extern std::string strByteCoinURIQueueName;

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
