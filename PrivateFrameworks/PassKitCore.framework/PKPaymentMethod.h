/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMethod : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _network;
    PKPaymentPass * _paymentPass;
    unsigned int  _type;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *network;
@property (nonatomic, copy) PKPaymentPass *paymentPass;
@property (nonatomic) unsigned int type;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(BOOL)arg2;
- (id)network;
- (id)paymentPass;
- (void)setDisplayName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end