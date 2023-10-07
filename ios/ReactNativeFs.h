#import <React/RCTEventEmitter.h>

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReactNativeFsSpec.h"

@interface ReactNativeFs : RCTEventEmitter <NativeReactNativeFsSpec,UIDocumentPickerDelegate>
#else
#import <optional>
#import <React/RCTCxxConvert.h>
#import <React/RCTManagedPointer.h>

// These are automatically generated by RN Codegen when using the New Arch,
// however for the backward compatibility to the Old Arch we need to provide
// these ourselves.
namespace JS {
  namespace NativeReactNativeFs {
    struct FileOptionsT {
      NSString *NSFileProtectionKey() const {
        return _v[@"NSFileProtectionKey"];
      };
      FileOptionsT(NSDictionary *const v) : _v(v) {}
    private:
      NSDictionary *_v;
    };

    struct MkdirOptionsT {
      std::optional<bool> NSURLIsExcludedFromBackupKey() const {
        return _v[@"NSURLIsExcludedFromBackupKey"];
      }
      NSString *NSFileProtectionKey() const {
        return _v[@"NSFileProtectionKey"];
      }

      MkdirOptionsT(NSDictionary *const v) : _v(v) {}
    private:
      NSDictionary *_v;
    };

    struct NativeDownloadFileOptionsT {
      double jobId() const { return [_v[@"jobId"] doubleValue]; }
      NSString *fromUrl() const  { return _v[@"fromUrl"]; }
      NSString *toFile() const  { return _v[@"toFile"]; }
      bool background() const  { return _v[@"background"]; }
      double backgroundTimeout() const  { return [_v[@"backgroundTimeout"] doubleValue]; }
      bool cacheable() const  { return _v[@"cacheable"]; }
      double connectionTimeout() const  { return [_v[@"connectionTimeout"] doubleValue]; }
      bool discretionary() const  { return _v[@"discretionary"]; }
      id<NSObject>  headers() const  { return _v[@"headers"]; }
      double progressDivider() const  { return [_v[@"progressDivider"] doubleValue]; }
      double progressInterval() const  { return [_v[@"progressInterval"] doubleValue]; }
      double readTimeout() const  { return [_v[@"readTimeout"] doubleValue]; }
      bool hasBeginCallback() const  { return _v[@"hasBeginCallback"]; }
      bool hasProgressCallback() const  { return _v[@"hasProgressCallback"]; }
      bool hasResumableCallback() const  { return _v[@"hasResumableCallback"]; }

      NativeDownloadFileOptionsT(NSDictionary *const v) : _v(v) {}
    private:
      NSDictionary *_v;
    };

    typedef NSDictionary NativeUploadFileOptions;
    typedef NSDictionary TouchOptions;

    /*
    struct UploadFileItem {
      NSString *name() const;
      NSString *filename() const;
      NSString *filepath() const;
      NSString *filetype() const;

      UploadFileItem(NSDictionary *const v) : _v(v) {}
    private:
      NSDictionary *_v;
    };

    template <typename T>
    using LazyVector = FB::LazyVector<T,id>;
     */

    struct NativeUploadFileOptionsT {
      double jobId() const { return [_v[@"jobId"] doubleValue]; }
      NSString *toUrl() const { return _v[@"toUrl"]; }
      std::optional<bool> binaryStreamOnly() const { return _v[@"binaryStreamOnly"]; }
      id<NSObject>  files() const { return _v[@"files"]; }
      id<NSObject> _Nullable headers() const { return _v[@"headers"]; }
      id<NSObject> _Nullable fields() const { return _v[@"fields"]; }
      NSString *method() const { return _v[@"method"]; }
      bool hasBeginCallback() const { return _v[@"hasBeginCallback"]; }
      bool hasProgressCallback() const { return _v[@"hasProgressCallback"]; }

      NativeUploadFileOptionsT(NSDictionary *const v) : _v(v) {}
    private:
      NSDictionary *_v;
    };

    /*

    struct TouchOptions {
      std::optional<double> ctime() const;
      std::optional<double> mtime() const;

      TouchOptions(NSDictionary *const v) : _v(v) {}
    private:
      NSDictionary *_v;
    };
     */
  }
}

@implementation RCTCxxConvert (NativeReactNativeFs_FileOptionsT)
+ (RCTManagedPointer *)JS_NativeReactNativeFs_FileOptionsT:(id)json
{
  return facebook::react::managedPointer<JS::NativeReactNativeFs::FileOptionsT>(json);
}
@end
@implementation RCTCxxConvert (NativeReactNativeFs_MkdirOptionsT)
+ (RCTManagedPointer *)JS_NativeReactNativeFs_MkdirOptionsT:(id)json
{
  return facebook::react::managedPointer<JS::NativeReactNativeFs::MkdirOptionsT>(json);
}
@end
@implementation RCTCxxConvert (NativeReactNativeFs_NativeDownloadFileOptionsT)
+ (RCTManagedPointer *)JS_NativeReactNativeFs_NativeDownloadFileOptionsT:(id)json
{
  return facebook::react::managedPointer<JS::NativeReactNativeFs::NativeDownloadFileOptionsT>(json);
}
@end

@implementation RCTCxxConvert (NativeReactNativeFs_NativeUploadFileOptionsT)
+ (RCTManagedPointer *)JS_NativeReactNativeFs_NativeUploadFileOptionsT:(id)json
{
  return facebook::react::managedPointer<JS::NativeReactNativeFs::NativeUploadFileOptionsT>(json);
}
@end

@interface ReactNativeFs : RCTEventEmitter <RCTBridgeModule,UIDocumentPickerDelegate>
#endif

@property (retain) NSMutableDictionary* downloaders;
@property (retain) NSMutableDictionary* uuids;
@property (retain) NSMutableDictionary* uploaders;

@end
