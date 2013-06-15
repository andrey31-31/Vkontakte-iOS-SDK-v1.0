//
// Created by AndrewShmig on 5/28/13.
//
//
// Copyright (c) 2013 Andrew Shmig
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
// FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//
#import <Foundation/Foundation.h>


@interface VKFavourites : NSObject

/**
 @name Users
 */
- (id)usersCount:(NSUInteger)count;
- (id)usersCount:(NSUInteger)count offset:(NSUInteger)offset;

/**
 @name Photos
 */
- (id)photosCount:(NSUInteger)count;
- (id)photosCount:(NSUInteger)count offset:(NSUInteger)offset;

/**
 @name Posts
 */
- (id)postsCount:(NSUInteger)count;
- (id)postsCount:(NSUInteger)count offset:(NSUInteger)offset;
- (id)postsCount:(NSUInteger)count offset:(NSUInteger)offset extended:(NSUInteger)extended;

/**
 @name Videos
 */
- (id)videosCount:(NSUInteger)count;
- (id)videosCount:(NSUInteger)count offset:(NSUInteger)offset;

/**
 @name Links
 */
- (id)links;


@end