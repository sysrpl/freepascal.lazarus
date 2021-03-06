{ Parsed from Webkit.framework WebFrame.h }

{$ifdef TYPES}
{$ifndef WEBFRAME_PAS_T}
{$define WEBFRAME_PAS_T}

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef WEBFRAME_PAS_R}
{$define WEBFRAME_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef WEBFRAME_PAS_F}
{$define WEBFRAME_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef WEBFRAME_PAS_S}
{$define WEBFRAME_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  WebFrame = objcclass;
  WebFramePointer = ^WebFrame;
  WebFramePtr = WebFramePointer;

{$endif}

{$ifdef CLASSES}
{$ifndef WEBFRAME_PAS_C}
{$define WEBFRAME_PAS_C}

{ WebFrame }
  WebFrame = objcclass external (NSObject)
  private
    _private: WebFramePrivate;
    
  public
    function initWithName_webFrameView_webView(name_: NSString; view: WebFrameView; webView_: WebView): id; message 'initWithName:webFrameView:webView:';
    function name: NSString; message 'name';
    function webView: WebView; message 'webView';
    function frameView: WebFrameView; message 'frameView';
    function DOMDocument: DOMDocument; message 'DOMDocument';
    function frameElement: DOMHTMLElement; message 'frameElement';
    procedure loadRequest(request: NSURLRequest); message 'loadRequest:';
    procedure loadData_MIMEType_textEncodingName_baseURL(data: NSData; MIMEType: NSString; encodingName: NSString; URL: NSURL); message 'loadData:MIMEType:textEncodingName:baseURL:';
    procedure loadHTMLString_baseURL(string_: NSString; URL: NSURL); message 'loadHTMLString:baseURL:';
    procedure loadAlternateHTMLString_baseURL_forUnreachableURL(string_: NSString; baseURL: NSURL; unreachableURL: NSURL); message 'loadAlternateHTMLString:baseURL:forUnreachableURL:';
    procedure loadArchive(archive: WebArchive); message 'loadArchive:';
    function dataSource: WebDataSource; message 'dataSource';
    function provisionalDataSource: WebDataSource; message 'provisionalDataSource';
    procedure stopLoading; message 'stopLoading';
    procedure reload; message 'reload';
    procedure reloadFromOrigin; message 'reloadFromOrigin';
    function findFrameNamed(name_: NSString): WebFrame; message 'findFrameNamed:';
    function parentFrame: WebFrame; message 'parentFrame';
    function childFrames: NSArray; message 'childFrames';
    function windowObject: WebScriptObject; message 'windowObject';
    function globalContext: JSGlobalContextRef; message 'globalContext';
  end;

{$endif}
{$endif}
