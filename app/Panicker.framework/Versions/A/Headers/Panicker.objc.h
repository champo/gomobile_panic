// Objective-C API for talking to champo.com/panic Go package.
//   gobind -lang=objc champo.com/panic
//
// File is generated by gobind. Do not edit.

#ifndef __Panicker_H__
#define __Panicker_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class PanickerPanickerImpl;
@protocol PanickerPanicker;
@class PanickerPanicker;

@protocol PanickerPanicker <NSObject>
- (NSData* _Nullable)panic:(NSData* _Nullable)p0 error:(NSError* _Nullable* _Nullable)error;
@end

@interface PanickerPanickerImpl : NSObject <goSeqRefInterface, PanickerPanicker> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
- (NSData* _Nullable)panic:(NSData* _Nullable)b error:(NSError* _Nullable* _Nullable)error;
@end

FOUNDATION_EXPORT void PanickerInit(void);

@class PanickerPanicker;

@interface PanickerPanicker : NSObject <goSeqRefInterface, PanickerPanicker> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (NSData* _Nullable)panic:(NSData* _Nullable)p0 error:(NSError* _Nullable* _Nullable)error;
@end

#endif