/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBLaunchdUtilities : XXUnknownSuperclass {
}
+(BOOL)createJobWithLabel:(id)label path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 machServices:(id)services threadPriority:(long long)priority waitForDebugger:(BOOL)debugger denyCreatingOtherJobs:(BOOL)jobs runAtLoad:(BOOL)load disableASLR:(BOOL)aslr;
+(void)deleteJobWithLabel:(id)label;
+(int)pidForLabel:(id)label;
+(int)lastExitStatusForLabel:(id)label;
+(id)allJobLabels;
+(void)setJetsamPriority:(long long)priority forJobLabel:(id)jobLabel isFrontmost:(BOOL)frontmost;
@end

