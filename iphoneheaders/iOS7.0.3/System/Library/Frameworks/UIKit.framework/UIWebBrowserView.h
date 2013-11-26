/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebDocumentView.h>
#import <UIKit/UIWebTouchEventsGestureRecognizerDelegate.h>
#import <UIKit/UIWebFormAccessoryDelegate.h>
#import <UIKit/_UIWebRotationDelegate.h>

@protocol UIFormPeripheral, UIWebAutoFillDelegate;
@class UIWebFormAccessory, NSObject, DOMNode, UIWebTouchEventsGestureRecognizer, UIWebFormDelegate, UIResponder, NSMutableArray, NSHashTable, NSMutableSet, NSLock, , NSString;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate> {

	UIWebFormAccessory* _accessory;
	NSObject<UIFormPeripheral>* _input;
	DOMNode* _currentAssistedNode;
	DOMNode* _assistedNodeStartingFocusRedirects;
	CGRect _inputViewBounds;
	CGRect _addressViewBounds;
	float _lastAdjustmentForScroller;
	unsigned _audioSessionCategoryOverride;
	unsigned _accessoryEnabled : 1;
	unsigned _forceInputView : 1;
	unsigned _formIsAutoFilling : 1;
	unsigned _inputViewObeysDOMFocus : 1;
	unsigned _allowDOMFocusRedirects : 1;
	unsigned _hasEditedTextField : 1;
	unsigned _alwaysDispatchesScrollEvents : 1;
	UIWebTouchEventsGestureRecognizer* _webTouchEventsGestureRecognizer;
	UIWebFormDelegate* _formDelegate;
	UIResponder* _editingDelegateForEverythingExceptForms;
	unsigned _dispatchedTouchEvents;
	NSMutableArray* _deferredTouchEvents;
	NSHashTable* _activeHighlighters;
	NSMutableSet* _overflowScrollViewsPendingInsertion;
	NSMutableSet* _overflowScrollViewsPendingDeletion;
	NSMutableSet* _overflowScrollViews;
	NSLock* _pendingOverflowDataLock;
	NSMutableArray* _pendingOverflowScrolls;
	BOOL _pendingGeometryChangeAfterOverflowScroll;
	SCD_Struct_UI74 _messages;
	SCD_Struct_UI75 _pdf;
	<UIWebAutoFillDelegate>* _autoFillDelegate;

}

@property (nonatomic,retain) UIWebFormAccessory * _accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSObject<UIFormPeripheral> * _input;                                 //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) DOMNode * _currentAssistedNode;                                      //@synthesize currentAssistedNode=_currentAssistedNode - In the implementation block
@property (assign,getter=isAccessoryEnabled,nonatomic) BOOL accessoryEnabled;                     //@synthesize accessoryEnabled=_accessoryEnabled - In the implementation block
@property (assign,nonatomic) BOOL inputViewObeysDOMFocus;                                         //@synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus - In the implementation block
@property (assign,nonatomic) BOOL allowDOMFocusRedirects;                                         //@synthesize allowDOMFocusRedirects=_allowDOMFocusRedirects - In the implementation block
@property (nonatomic,readonly) BOOL hasEditedTextField;                                           //@synthesize hasEditedTextField=_hasEditedTextField - In the implementation block
@property (assign,nonatomic) UIResponder * _editingDelegateForEverythingExceptForms;              //@synthesize editingDelegateForEverythingExceptForms=_editingDelegateForEverythingExceptForms - In the implementation block
@property (assign,nonatomic) BOOL allowsInlineMediaPlayback; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (nonatomic,readonly) BOOL isDispatchingTouchEvents; 
@property (assign,nonatomic) BOOL alwaysDispatchesScrollEvents; 
@property (assign,nonatomic) <UIWebAutoFillDelegate> * autoFillDelegate;                          //@synthesize autoFillDelegate=_autoFillDelegate - In the implementation block
@property (assign,nonatomic) unsigned audioSessionCategoryOverride; 
@property (assign,nonatomic) NSString * networkInterfaceName; 
+(void)initialize;
+(id)getUIWebBrowserViewForWebFrame:(id)arg1 ;
+(float)preferredScrollDecelerationFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(id)keyCommands;
-(BOOL)isEditable;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(void)_didScroll;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)_editingDelegate;
-(id)inputView;
-(id)inputAccessoryView;
-(id)_keyboardResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(id)_input;
-(void)copy:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(BOOL)isAutoFillMode;
-(id)initWithWebView:(id)arg1 frame:(CGRect)arg2 ;
-(void)installGestureRecognizers;
-(void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
-(void)_updateFixedPositioningObjectsLayoutDuringScroll;
-(void)_resetFormDataForFrame:(id)arg1 ;
-(void)_clearAllConsoleMessages;
-(void)_updateFixedPositioningObjectsLayoutAfterScroll;
-(void)_updateFixedPositionContent;
-(id)formElement;
-(id)_collectAdditionalSubviews;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg1 ;
-(void)redrawScaledDocument;
-(void)assistFormNode:(id)arg1 ;
-(id)textFormElement;
-(BOOL)playsNicelyWithGestures;
-(id)textDocument;
-(void)_beginAllowingFocusRedirects;
-(void)_endAllowingFocusRedirects;
-(void)webViewDidPreventDefaultForEvent:(id)arg1 ;
-(BOOL)shouldIgnoreWebTouch;
-(BOOL)isAnyTouchOverActiveArea:(id)arg1 ;
-(BOOL)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(BOOL)arg1 ;
-(void)set_editingDelegateForEverythingExceptForms:(id)arg1 ;
-(void)_startURLificationIfNeededCoalesce:(BOOL)arg1 ;
-(void)setAllowsInlineMediaPlayback:(BOOL)arg1 ;
-(BOOL)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1 ;
-(BOOL)mediaPlaybackRequiresUserAction;
-(void)rotateEnclosingScrollViewToFrame:(CGRect)arg1 ;
-(void)_updateScrollerViewForInputView:(id)arg1 ;
-(id)_currentAssistedNode;
-(void)setAlwaysDispatchesScrollEvents:(BOOL)arg1 ;
-(BOOL)alwaysDispatchesScrollEvents;
-(void)setAudioSessionCategoryOverride:(unsigned)arg1 ;
-(unsigned)audioSessionCategoryOverride;
-(void)setNetworkInterfaceName:(id)arg1 ;
-(id)networkInterfaceName;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)accessoryDone;
-(id)autoFillDelegate;
-(void)formDelegateTextDidChange;
-(BOOL)_isAutoFilling;
-(BOOL)_hasSubviewContainingWebContent:(id)arg1 ;
-(void)accessoryTab:(BOOL)arg1 ;
-(void)accessoryAutoFill;
-(void)accessoryClear;
-(void)_startAssistingKeyboard;
-(void)_stopAssistingKeyboard;
-(void)_startAssistingNode:(id)arg1 ;
-(void)_stopAssistingNode:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_clearFormAutoFillStateForFrame:(id)arg1 ;
-(void)set_accessory:(id)arg1 ;
-(void)set_input:(id)arg1 ;
-(void)set_currentAssistedNode:(id)arg1 ;
-(void)_webTouchEventsRecognized:(id)arg1 ;
-(BOOL)allowDOMFocusRedirects;
-(BOOL)_keepKeyboardVisibleDuringFocusRedirects;
-(void)_stopAssistingFormNode;
-(void)_nextAccessoryTab:(id)arg1 ;
-(void)_prevAccessoryTab:(id)arg1 ;
-(void)_displayFormNodeInputView;
-(id)_editingDelegateForEverythingExceptForms;
-(void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(void)_updateFixedPositioningObjectsLayoutSoon;
-(void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2 ;
-(void)_updateAccessory;
-(void)_updateAutoFillButton;
-(void)setAllowDOMFocusRedirects:(BOOL)arg1 ;
-(void)_scrollCaretToVisible:(id)arg1 ;
-(void)_autoFillFrame:(id)arg1 ;
-(BOOL)isDispatchingTouchEvents;
-(void)_startDeferringEvents;
-(void)_dispatchWebEvent:(id)arg1 ;
-(void)_endDeferringEvents;
-(BOOL)_shouldDeferEvents;
-(void)_deferWebEvent:(id)arg1 ;
-(void)_handleDeferredEvents;
-(CGRect)_activeRectForRectToCenter:(CGRect)arg1 ;
-(void)_centerRect:(CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(unsigned)arg4 toValue:(float)arg5 ;
-(void)_zoomToRect:(CGRect)arg1 ensuringVisibilityOfRect:(CGRect)arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4 ;
-(void)_zoomToRect:(CGRect)arg1 ensuringVisibilityOfRect:(CGRect)arg2 withScale:(float)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(CGRect)arg5 animationDuration:(double)arg6 ;
-(void)clearMessagesMatchingMask:(int)arg1 ;
-(CGSize)_defaultScrollViewContentSize;
-(void)_noteOverflowScrollViewPendingInsertion:(id)arg1 ;
-(void)_noteOverflowScrollViewPendingDeletion:(id)arg1 ;
-(void)_removeAdditionalSubview:(id)arg1 ;
-(BOOL)appendOverflowScrollForNode:(id)arg1 offset:(CGPoint)arg2 whileScrolling:(BOOL)arg3 ;
-(void)_webThreadOverflowScrollOffsetChanged;
-(void)_addAdditionalSubview:(id)arg1 ;
-(SCD_Struct_UI41)scalesForContainerSize:(CGSize)arg1 ;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI41)arg2 ;
-(CGRect)rectOfInterestForRotation;
-(float)minimumVerticalContentOffset;
-(float)heightToKeepVisible;
-(CGRect)activeRectForRectOfInterest:(CGRect)arg1 ;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(float)scaleForProposedNewScale:(float)arg1 andOldScale:(float)arg2 ;
-(CGSize)contentSizeForScrollView:(id)arg1 ;
-(void)simulateDidScroll;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2 ;
-(void)_webViewFormEditedStatusHasChanged:(id)arg1 ;
-(void)webView:(id)arg1 elementDidFocusNode:(id)arg2 ;
-(void)webView:(id)arg1 elementDidBlurNode:(id)arg2 ;
-(CGPoint)_convertWindowPointToViewport:(CGPoint)arg1 ;
-(void)_centerRect:(CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(float)arg3 pinningEdge:(unsigned)arg4 ;
-(void)_zoomToRect:(CGRect)arg1 withScale:(float)arg2 ;
-(void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3 ;
-(id)messagesMatchingMask:(int)arg1 ;
-(BOOL)_dumpWebArchiveAtPath:(id)arg1 ;
-(void)_clearSelectionAndUI;
-(void)_setSelectedDOMRangeAndUpdateUI:(id)arg1 ;
-(id)_absoluteUrlRelativeToDocumentURL:(id)arg1 ;
-(id)addFindOnPageHighlighter;
-(void)_removeFindOnPageHighlighter:(id)arg1 ;
-(void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7 ;
-(void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4 ;
-(void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2 ;
-(void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(BOOL)arg3 ;
-(void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2 ;
-(id)_accessory;
-(BOOL)isAccessoryEnabled;
-(void)setAccessoryEnabled:(BOOL)arg1 ;
-(BOOL)hasEditedTextField;
-(void)setAutoFillDelegate:(id)arg1 ;
@end
