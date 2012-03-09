/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADStoreItemOfferJSO : ADJavaScriptObject  {
    NSString *_identifier;
    NSString *_price;
    NSString *_action;
    BOOL _preorder;
}

@property(readonly) NSString * identifier;
@property(readonly) NSString * price;
@property(readonly) NSString * action;
@property(readonly) BOOL preorder;

+ (id)scriptingKeys;

- (id)action;
- (void)dealloc;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setAction:(id)arg1;
- (BOOL)preorder;
- (void)setPreorder:(BOOL)arg1;
- (void)setPrice:(id)arg1;
- (id)price;
- (id)initWithSSItemOffer:(id)arg1;

@end