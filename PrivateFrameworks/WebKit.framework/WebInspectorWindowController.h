/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, WebInspectorWindowController, WebView;



@interface WebInspectorWindowController : NSObject 
{
    WebView *_inspectedWebView;

  /* Error parsing encoded ivar type info: ^{WebInspectorFrontendClient=^^?^{InspectorController}^{Page}^{ExecState}{RefPtr<WebCore::InspectorFrontendHost>="m_ptr"^{InspectorFrontendHost}}@"WebView"{RetainPtr<WebInspectorWindowController>="m_ptr"@"WebInspectorWindowController"}{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}} */
    struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct ExecState {} *x4; struct RefPtr<WebCore::InspectorFrontendHost> { 
            struct InspectorFrontendHost {} *m_ptr; 
        } x5; id x6; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x7; void*x8; void*x9; unsigned int x10/* : ? */; oneway NSInteger x11; void*x12; void*x13; void*x14; struct RetainPtr<WebInspectorWindowController> { 
            WebInspectorWindowController *m_ptr; 
        } x15; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x16; } *_frontendClient;

    BOOL _destroyingInspectorView;
    WebView *_webView;
    NSString *_title;
}

@property(retain) NSString *title;
@property(readonly) WebView *webView;


- (id)initWithInspectedWebView:(id)arg1;
- (void)setFrontendClient:(struct WebInspectorFrontendClient { int (**x1)(); struct InspectorController {} *x2; struct Page {} *x3; struct ExecState {} *x4; struct RefPtr<WebCore::InspectorFrontendHost> { struct InspectorFrontendHost {} *x_5_1_1; } x5; id x6; struct RetainPtr<WebInspectorWindowController> { id x_7_1_1; } x7; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; }*)arg1;
- (void)destroyInspectorView;
- (void)showWindow:(id)arg1;
- (id)webView;
- (id)title;
- (id)init;
- (void)setTitle:(id)arg1;
- (void)dealloc;

@end