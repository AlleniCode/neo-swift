// Objective-C API for talking to github.com/o3labs/neo-utils/neoutils Go package.
//   gobind -lang=objc github.com/o3labs/neo-utils/neoutils
//
// File is generated by gobind. Do not edit.

#ifndef __Neoutils_H__
#define __Neoutils_H__

@import Foundation;
#include "Universe.objc.h"


@class NeoutilsBlockCountResponse;
@class NeoutilsFetchSeedRequest;
@class NeoutilsNodeList;
@class NeoutilsSeedNodeResponse;
@class NeoutilsSharedSecret;
@class NeoutilsSimplifiedNEP9;
@class NeoutilsWallet;

@interface NeoutilsBlockCountResponse : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)jsonrpc;
- (void)setJsonrpc:(NSString*)v;
- (long)id_;
- (void)setID:(long)v;
- (long)result;
- (void)setResult:(long)v;
- (int64_t)responseTime;
- (void)setResponseTime:(int64_t)v;
@end

@interface NeoutilsFetchSeedRequest : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NeoutilsBlockCountResponse*)response;
- (void)setResponse:(NeoutilsBlockCountResponse*)v;
- (NSString*)url;
- (void)setURL:(NSString*)v;
@end

@interface NeoutilsNodeList : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
// skipped field NodeList.URL with unsupported type: *types.Slice

@end

@interface NeoutilsSeedNodeResponse : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)url;
- (void)setURL:(NSString*)v;
- (long)blockCount;
- (void)setBlockCount:(long)v;
- (int64_t)responseTime;
- (void)setResponseTime:(int64_t)v;
@end

/**
 * Shared Secret with 2 parts.
 */
@interface NeoutilsSharedSecret : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSData*)first;
- (void)setFirst:(NSData*)v;
- (NSData*)second;
- (void)setSecond:(NSData*)v;
@end

@interface NeoutilsSimplifiedNEP9 : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)to;
- (void)setTo:(NSString*)v;
- (NSString*)assetID;
- (void)setAssetID:(NSString*)v;
- (double)amount;
- (void)setAmount:(double)v;
@end

@interface NeoutilsWallet : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
/**
 * Create a new wallet.
 */
- (instancetype)init;
- (NSData*)publicKey;
- (void)setPublicKey:(NSData*)v;
- (NSData*)privateKey;
- (void)setPrivateKey:(NSData*)v;
- (NSString*)address;
- (void)setAddress:(NSString*)v;
- (NSString*)wif;
- (void)setWIF:(NSString*)v;
- (NSData*)hashedSignature;
- (void)setHashedSignature:(NSData*)v;
/**
 * Compute shared secret using ECDH
 */
- (NSData*)computeSharedSecret:(NSData*)publicKey;
@end

/**
 * Simple bytes to Hex
 */
FOUNDATION_EXPORT NSString* NeoutilsBytesToHex(NSData* b);

// skipped function ConvertByteArrayToBigInt with unsupported parameter or return types


/**
 * Decrypt AES encrypted string in base64 format to decrypted string
 */
FOUNDATION_EXPORT NSString* NeoutilsDecrypt(NSData* key, NSString* encryptedText);

/**
 * Encrypt string to base64 format using AES
 */
FOUNDATION_EXPORT NSString* NeoutilsEncrypt(NSData* key, NSString* text);

/**
 * Generate a wallet from a WIF
 */
FOUNDATION_EXPORT NeoutilsWallet* NeoutilsGenerateFromWIF(NSString* wif, NSError** error);

/**
 * Generate a wallet from a private key
 */
FOUNDATION_EXPORT NeoutilsWallet* NeoutilsGeneratePublicKeyFromPrivateKey(NSString* privateKey, NSError** error);

/**
 * Generate Shamir shared secret to SharedSecret struct.
 */
FOUNDATION_EXPORT NeoutilsSharedSecret* NeoutilsGenerateShamirSharedSecret(NSString* secret, NSError** error);

/**
 * Simple hex string to bytes
 */
FOUNDATION_EXPORT NSData* NeoutilsHexTobytes(NSString* hexstring);

/**
 * Convert NEO address to script hash
 */
FOUNDATION_EXPORT NSString* NeoutilsNEOAddressToScriptHash(NSString* neoAddress);

/**
 * Create a new wallet.
 */
FOUNDATION_EXPORT NeoutilsWallet* NeoutilsNewWallet(NSError** error);

FOUNDATION_EXPORT NeoutilsSimplifiedNEP9* NeoutilsParseNEP9URI(NSString* uri, NSError** error);

/**
 * Recover the secret from shared secrets.
 */
FOUNDATION_EXPORT NSString* NeoutilsRecoverFromSharedSecret(NSData* first, NSData* second, NSError** error);

FOUNDATION_EXPORT NSData* NeoutilsReverseBytes(NSData* b);

/**
 * Convert script hash to NEO address
 */
FOUNDATION_EXPORT NSString* NeoutilsScriptHashToNEOAddress(NSString* scriptHash);

FOUNDATION_EXPORT NeoutilsSeedNodeResponse* NeoutilsSelectBestSeedNode(NSString* commaSeparatedURLs);

/**
 * Sign data using ECDSA with a private key
 */
FOUNDATION_EXPORT NSData* NeoutilsSign(NSData* data, NSString* key, NSError** error);

/**
 * Validate NEO address
 */
FOUNDATION_EXPORT BOOL NeoutilsValidateNEOAddress(NSString* address);

#endif
