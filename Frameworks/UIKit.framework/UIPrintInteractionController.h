/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInteractionController : NSObject {
    unsigned int  _backgroundTaskIdentifier;
    id /* block */  _completionHandler;
    <UIPrintInteractionControllerDelegate> * _delegate;
    BOOL  _hidesNumberOfCopies;
    NSObject<OS_dispatch_queue> * _previewQueue;
    <UIPrintInteractionControllerDelegate> * _printActivityDelegate;
    UIPrintFormatter * _printFormatter;
    UIPrintInfo * _printInfo;
    UIPrintPageRenderer * _printPageRenderer;
    UIPrintPaper * _printPaper;
    id  _printState;
    id  _printingItem;
    NSArray * _printingItems;
    BOOL  _showsPageRange;
    BOOL  _showsPaperSelectionForLoadedPapers;
    id  _temporaryRetainCycle;
}

@property (nonatomic) <UIPrintInteractionControllerDelegate> *delegate;
@property (nonatomic, readonly) int pageCount;
@property (nonatomic, retain) NSArray *pageRanges;
@property (nonatomic, retain) UIPrintPaper *paper;
@property (nonatomic) <UIPrintInteractionControllerDelegate> *printActivityDelegate;
@property (nonatomic, retain) UIPrintFormatter *printFormatter;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic, retain) UIPrintPageRenderer *printPageRenderer;
@property (nonatomic, readonly) UIPrintPaper *printPaper;
@property (nonatomic, retain) PKPrinter *printer;
@property (nonatomic, copy) id printingItem;
@property (nonatomic, copy) NSArray *printingItems;
@property (nonatomic) BOOL showsNumberOfCopies;
@property (nonatomic) BOOL showsPageRange;
@property (nonatomic) BOOL showsPaperSelectionForLoadedPapers;

+ (BOOL)canPrintData:(id)arg1;
+ (BOOL)canPrintURL:(id)arg1;
+ (BOOL)isPrintingAvailable;
+ (id)printableUTIs;
+ (id)sharedPrintController;

- (void).cxx_destruct;
- (BOOL)_canPrintPDFData:(id)arg1;
- (BOOL)_canPrintPDFURL:(id)arg1;
- (BOOL)_canShowColor;
- (BOOL)_canShowCopies;
- (BOOL)_canShowDuplex;
- (BOOL)_canShowPageRange;
- (BOOL)_canShowPaperList;
- (BOOL)_canShowPreview;
- (BOOL)_canShowStaple;
- (void)_cancelAllPreviewGeneration;
- (void)_cleanPrintState;
- (id)_currentPrintInfo;
- (void)_endPrintJob:(BOOL)arg1 error:(id)arg2;
- (void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_generatePrintPreview:(id /* block */)arg1;
- (id)_getChosenPaperFromDelegateForPaperList:(id)arg1;
- (float)_getCutLengthFromDelegateForPaper:(id)arg1;
- (id)_init;
- (struct CGContext { }*)_newSaveContext:(id)arg1 withMediaRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_paperForContentType:(int)arg1;
- (id)_paperForPDFItem:(id)arg1 withDuplexMode:(int)arg2;
- (void)_preparePrintInfo;
- (id)_printItem:(id)arg1;
- (struct CGSize { float x1; float x2; })_printItemContentSize;
- (void)_printPage;
- (id)_printPageRenderer:(id)arg1;
- (void)_printPanelDidDismiss;
- (void)_printPanelDidPresent;
- (void)_printPanelWillDismiss:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })_printablePDFDataSize:(id)arg1;
- (struct CGSize { float x1; float x2; })_printablePDFURLSize:(id)arg1;
- (void)_setPrintInfoState:(int)arg1;
- (BOOL)_setupPrintPanel:(id /* block */)arg1;
- (void)_startPrinting;
- (void)_updateCutterBehavior;
- (void)_updatePageCount;
- (void)_updatePrintPaper;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(BOOL)arg1;
- (id)init;
- (int)pageCount;
- (id)pageRanges;
- (id)paper;
- (BOOL)presentAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (id)printActivityDelegate;
- (id)printFormatter;
- (id)printInfo;
- (id)printPageRenderer;
- (id)printPaper;
- (BOOL)printToPrinter:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)printer;
- (id)printingItem;
- (id)printingItems;
- (BOOL)savePDFToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPageRanges:(id)arg1;
- (void)setPaper:(id)arg1;
- (void)setPrintActivityDelegate:(id)arg1;
- (void)setPrintFormatter:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setPrintPageRenderer:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setPrintingItem:(id)arg1;
- (void)setPrintingItems:(id)arg1;
- (void)setShowsNumberOfCopies:(BOOL)arg1;
- (void)setShowsPageRange:(BOOL)arg1;
- (void)setShowsPaperSelectionForLoadedPapers:(BOOL)arg1;
- (BOOL)showsNumberOfCopies;
- (BOOL)showsPageRange;
- (BOOL)showsPaperSelectionForLoadedPapers;

// UIPrintInteractionController (UIPrintInteractionController_Private)

- (void)_cancelManualPrintPage;
- (void)_enableManualPrintPage:(BOOL)arg1;
- (void)_manualPrintPage;

@end