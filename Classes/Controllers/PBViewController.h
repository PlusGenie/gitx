//
//  PBViewController.h
//  GitX
//
//  Created by Pieter de Bie on 22-09-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBGitRepository.h"

@class PBGitRepository;
@class PBGitWindowController;

@interface PBViewController : NSViewController

@property (nonatomic, weak, readonly) PBGitWindowController *superController;
@property (nonatomic, weak, readonly)  PBGitRepository *repository;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, assign) BOOL isBusy;

- (id)initWithRepository:(PBGitRepository *)theRepository superController:(PBGitWindowController *)controller;

/* closeView is called when the repository window will be closed */
- (void)closeView;

/* Updateview is called every time it is loaded into the main view */
- (void) updateView;

/* Called after awakeFromNib:, and the view has been loaded into the main view.
 * Useful for resizing stuff after everything has been set in the right position
 */
- (void)viewLoaded;

- (NSResponder *)firstResponder;
- (IBAction) refresh:(id)sender;

@end