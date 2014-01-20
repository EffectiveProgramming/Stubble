#import "SBLMatcher.h"
#import "SBLMockObject.h"

typedef enum {
    SBLTransactionManagerStateAtRest,
    SBLTransactionManagerStateStubInProgress,
    SBLTransactionManagerStateVerifyInProgress,
} SBLTransactionManagerState;

@interface SBLTransactionManager : NSObject

@property (nonatomic, readonly) SBLTransactionManagerState state;

+ (instancetype)currentTransactionManager;

- (void)clear;

- (void)prepareForWhen;
- (void)whenMethodInvokedForMock:(SBLMockObject *)mock;
- (SBLStubbedInvocation *)performWhen;

- (void)prepareForVerify;
- (void)verifyMethodInvokedForMock:(SBLMockObject *)mock;
- (void)verifyMockCalled:(NSString *)errorMessage;
- (void)verifyMockNotCalled:(NSString *)errorMessagej;
//- (void)performVerify;
- (SBLVerificationResult *)performVerifyNumberOfTimes:(SBLTimesMatcher *)timesMatcher;

- (void)addMatcher:(SBLMatcher *)matcher;

@end