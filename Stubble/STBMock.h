#import "STBMockObject.h"
#import "STBStubbleCore.h"


#define WHEN(__METHOD_CALL) ({ [STBStubbleCore.core prepareForWhen]; __METHOD_CALL; [STBStubbleCore.core performWhen]; })
// #define VERIFY(__METHOD_CALL) ({ [STBStubbleCore.core prepareForVerify]; __METHOD_CALL; [STBStubbleCore.core performVerify]; })





//STBMockObject *verify(id mock);
//
//STBMockObject *when(id mock);

// ********************
// Mockito syntax
//when(mockedList.get(0)).thenReturn("first");




// ********************
// Mock objects have verify, reject, stub methods

//[[mockObject verify:times(2)] myMethod:@"Blargh"];

//[[mockObject.when myMethod:@"Blargh" param2:any()] thenReturn:@"Ack"];
//
//[[[mockObject when] myMethod:@"Blargh" param2:any()] thenReturn:@"Ack"];
//
//
//when([mockObject myMethod:@"Blargh"]);
//

//[[when.mockObject myMethod:@"Blargh" param2:any()] thenReturn:@"DGnadosg"]

// ********************
// All calls are C and look like verify(mockObject), or any(), etc.
//
//[verify(mockObject, times(2)) myMethod:any()];
//[verify(mockObject, never()) myMethod:any()];
//
//[[when(mockObject) myMethod:@"Blargh" param2:any() param3:captor(&myInt)] thenReturn:@"Baz"];
//
//[[stub(mockObject) doStuff:@"Blah"] andReturn:@"Baz"];
//
//[mockObject doStuff:@"Blah"]; // evaluates to @"Baz"


