/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSThread, NSString, <GEOTileRequesterDelegate>, GEOTileKeyList;

@interface GEOTileRequester : NSObject  {
    GEOTileKeyList *_keyList;
    <GEOTileRequesterDelegate> *_delegate;
    id _context;
    NSThread *_thread;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
}

@property(readonly) GEOTileKeyList * keyList;
@property(retain) <GEOTileRequesterDelegate> * delegate;
@property(retain) id context;
@property(retain) NSThread * thread;
@property(retain) NSString * bundleIdentifier;
@property(retain) NSString * bundleVersion;

+ (id)hostname;
+ (unsigned char)tileProviderIdentifier;

- (void)cancel;
- (void)dealloc;
- (void)setThread:(id)arg1;
- (id)thread;
- (id)initWithKeyList:(id)arg1;
- (id)bundleVersion;
- (void)setBundleVersion:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)start;
- (id)context;
- (void)setContext:(id)arg1;
- (id)bundleIdentifier;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)keyList;

@end