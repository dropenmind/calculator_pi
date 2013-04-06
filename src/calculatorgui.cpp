///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "calculatorgui.h"

///////////////////////////////////////////////////////////////////////////

DlgDef::DlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	m_Overview = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );
	
	m_result = new wxTextCtrl( m_Overview, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 420,40 ), wxTE_PROCESS_ENTER );
	m_result->SetMaxLength( 0 ); 
	m_result->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString ) );
	m_result->SetMinSize( wxSize( 200,40 ) );
	m_result->SetMaxSize( wxSize( -1,40 ) );
	
	bSizer41->Add( m_result, 8, wxALL|wxEXPAND, 5 );
	
	Calculate = new wxButton( m_Overview, wxID_ANY, _("Calculate"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	Calculate->SetMinSize( wxSize( 80,30 ) );
	Calculate->SetMaxSize( wxSize( 80,40 ) );
	
	bSizer41->Add( Calculate, 0, wxALL|wxEXPAND, 5 );
	
	m_Help = new wxCheckBox( m_Overview, wxID_ANY, _("History"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_Help, 0, wxALL|wxEXPAND, 5 );
	
	m_HelpButton = new wxButton( m_Overview, wxID_ANY, _("?"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_HelpButton, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer45->Add( bSizer41, 0, wxEXPAND, 5 );
	
	wxBoxSizer* HelpPanel;
	HelpPanel = new wxBoxSizer( wxVERTICAL );
	
	m_listCtrl = new wxListCtrl( m_Overview, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_AUTOARRANGE|wxLC_LIST );
	m_listCtrl->Hide();
	
	HelpPanel->Add( m_listCtrl, 3, wxALL|wxEXPAND, 5 );
	
	
	bSizer45->Add( HelpPanel, 1, wxEXPAND, 5 );
	
	
	m_Overview->SetSizer( bSizer45 );
	m_Overview->Layout();
	bSizer45->Fit( m_Overview );
	bSizer7->Add( m_Overview, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_result->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_result->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	Calculate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	m_Help->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DlgDef::OnToggle ), NULL, this );
	m_HelpButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnHelp ), NULL, this );
	m_listCtrl->Connect( wxEVT_CHAR, wxKeyEventHandler( DlgDef::OnKey ), NULL, this );
	m_listCtrl->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( DlgDef::OnItem ), NULL, this );
}

DlgDef::~DlgDef()
{
	// Disconnect Events
	m_result->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_result->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	Calculate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCalculate ), NULL, this );
	m_Help->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( DlgDef::OnToggle ), NULL, this );
	m_HelpButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnHelp ), NULL, this );
	m_listCtrl->Disconnect( wxEVT_CHAR, wxKeyEventHandler( DlgDef::OnKey ), NULL, this );
	m_listCtrl->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( DlgDef::OnItem ), NULL, this );
	
}

CfgDlgDef::CfgDlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Show/Hide Buttons") ), wxVERTICAL );
	
	m_showhelpB = new wxCheckBox( this, wxID_ANY, _("Help Button"), wxDefaultPosition, wxDefaultSize, 0 );
	m_showhelpB->SetToolTip( _("Show/Hide help button (you can always type \"help\" from input window).") );
	
	sbSizer3->Add( m_showhelpB, 0, wxALL, 5 );
	
	m_showhistoryB = new wxCheckBox( this, wxID_ANY, _("History Toggle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_showhistoryB->SetValue(true); 
	m_showhistoryB->SetToolTip( _("Show/Hide history toggle (you can always type \"history\" from input window).") );
	
	sbSizer3->Add( m_showhistoryB, 0, wxALL, 5 );
	
	m_CalculateB = new wxCheckBox( this, wxID_ANY, _("Calculate Button"), wxDefaultPosition, wxDefaultSize, 0 );
	m_CalculateB->SetValue(true); 
	m_CalculateB->SetToolTip( _("Show/Hide Calculate button (you can always press enter at the end of input).") );
	
	sbSizer3->Add( m_CalculateB, 0, wxALL, 5 );
	
	
	bSizer2->Add( sbSizer3, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("History Settings") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_Font_Size_txt = new wxStaticText( this, wxID_ANY, _("Max Results"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Font_Size_txt->Wrap( -1 );
	m_Font_Size_txt->SetToolTip( _("More results use up more memory. Memory is only allocated if required (e.g. if number is 30000, corresponding memory will only be used after this many calculations).") );
	
	fgSizer3->Add( m_Font_Size_txt, 0, wxALL, 5 );
	
	m_MaxResults = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 30000, 30000 );
	m_MaxResults->SetToolTip( _("More results use more memory. Memory will be cleared if Max Results is reached. NB variables are kept") );
	
	fgSizer3->Add( m_MaxResults, 0, wxALL, 5 );
	
	
	sbSizer4->Add( fgSizer3, 1, wxEXPAND, 5 );
	
	m_staticText17 = new wxStaticText( this, wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	m_staticText17->Hide();
	
	sbSizer4->Add( m_staticText17, 0, wxALL, 5 );
	
	m_sOpacity = new wxSlider( this, wxID_ANY, 50, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	m_sOpacity->Hide();
	
	sbSizer4->Add( m_sOpacity, 0, wxALL|wxEXPAND, 5 );
	
	m_showhistory = new wxCheckBox( this, wxID_ANY, _("Show History Window"), wxDefaultPosition, wxDefaultSize, 0 );
	m_showhistory->SetToolTip( _("Show/Hide history") );
	
	sbSizer4->Add( m_showhistory, 0, wxALL, 5 );
	
	m_capturehidden = new wxCheckBox( this, wxID_ANY, _("Capture when Hidden"), wxDefaultPosition, wxDefaultSize, 0 );
	m_capturehidden->SetValue(true); 
	m_capturehidden->SetToolTip( _("Capture results in history, even when the history box is hidden. Uncheck this box to save some memory when history is hidden.") );
	
	sbSizer4->Add( m_capturehidden, 0, wxALL, 5 );
	
	
	bSizer2->Add( sbSizer4, 0, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Other") ), wxVERTICAL );
	
	m_logresults = new wxCheckBox( this, wxID_ANY, _("Log results to opencpn"), wxDefaultPosition, wxDefaultSize, 0 );
	m_logresults->SetToolTip( _("Log calculator results in OpenCPN log file") );
	
	sbSizer41->Add( m_logresults, 0, wxALL, 5 );
	
	
	bSizer2->Add( sbSizer41, 0, wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	
	bSizer1->Add( m_sdbSizer1, 0, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	
	this->Centre( wxBOTH );
}

CfgDlgDef::~CfgDlgDef()
{
}

HlpDlgDef::HlpDlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	HelpPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_textCtrl3 = new wxTextCtrl( HelpPanel, wxID_ANY, _("Calculator Plugin for OpenCPN by SaltyPaws aka Walbert Schulpen\n=======================================\n\nThis is a light weight yet powerful calculator plugin for OpenCPN.  Would you like to know your hull speed?\n\nKey features are:\n* Storing results in variables\n* Shows historic calculations\n* Full scientific functions\n* Screen footprint can be optimised & minimised as required\n\nExamples of expression that work in the calculator are: (comments are in brackets, some results depend on other example calculations):\n=========\nHull speed:\n\tLWL=48\t\t\t(water line lenght in feet)\n\tvhull=1.34*LWL^(1/2)\t(hull speed in knots)\n\nConversions:\n\tftm=0.3048\t\t\t(feet to meters)\n\tkm_to_nm=0.539957\t\t(Kilometers to nautical Mile)\n\tftm*LWL\t\t\t(waterline length in meters)\n\nDistance to horizon\n\tR=6378.1*1000\t\t(Radius of the earth in m)\n\tH=2.5\t\t\t(Height of the eye above sea-level in m)\n\td = R * acos(R/(R + h))\t(Distance to horizon in m)   \n\tans*km_to_nm\t\t(Distance to horizon in nm)\n\nDistance to lighthouse\n\tH1=200\t\t\t(height of lighthouse in m)\n\td1 = R*acos(R/(R + H1))\t(Distance to horizon in m)\n\tdistance=d1+d\t\t(visibility range of lighthouse in m)\n\nOperators:\n\t+ - * / ^ (NB use ^(1/2) for square root)         \n\t% & | << >> = <> < > <= >= ||\n\t! (Factorial)\n \nFunctions:\n\tAbs, Exp, Sign, Sqrt, Log, Log10\n\tSin, Cos, Tan, ASin, ACos, Atan (default entry is in radians use e.g. sin(dtr*90) to calculate in degree)\n\tFactorial\n \nVariables:\n\tPi, e\n\tAns is the result of the previous calulation\n\tdtr is the conversion factor from degrees to radians\t\t\n\tyou can define your own variables (e.g. myvariable=10/8*cos(dtr*90) or yourvariable=Ans)\n\tclear removes results in the history, but leaves your defined variables in tact\n\nUser Interface - type these commands in the command window:\n\thistory - Toggle the history panel\n\tshowhelp - Show/Hide the Help button\n\tshowcalculate - Show/Hide the Calculate button\n\tshowhistory - Show/Hide the history toggle\n\thelp - show the help menu\n\nSettings/Plugins/Preferences:\n\tShow/Hide Calculate, Help and History toggle buttons\n\tHistory Settings: max Results - History will be cleared after this many results have been stored to save memory. Max 30000.\n\tShow history window: Show/Hide default state\n\tCapture when hidden: disable capturing of history when history panel is hidden - this will save some memory\n\tLog to opencpn: Enable/Disable logging of results to opencpn logfile."), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE );
	m_textCtrl3->SetMinSize( wxSize( 600,400 ) );
	
	bSizer10->Add( m_textCtrl3, 100, wxALL|wxEXPAND, 5 );
	
	
	bSizer11->Add( bSizer10, 5, wxEXPAND, 5 );
	
	m_sdbSizer2 = new wxStdDialogButtonSizer();
	m_sdbSizer2OK = new wxButton( HelpPanel, wxID_OK );
	m_sdbSizer2->AddButton( m_sdbSizer2OK );
	m_sdbSizer2->Realize();
	
	bSizer11->Add( m_sdbSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	HelpPanel->SetSizer( bSizer11 );
	HelpPanel->Layout();
	bSizer11->Fit( HelpPanel );
	bSizer7->Add( HelpPanel, 3, wxALL|wxBOTTOM|wxEXPAND|wxTOP, 5 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	bSizer7->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_sdbSizer2OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HlpDlgDef::OnClose ), NULL, this );
}

HlpDlgDef::~HlpDlgDef()
{
	// Disconnect Events
	m_sdbSizer2OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HlpDlgDef::OnClose ), NULL, this );
	
}

ConvDlgDev::ConvDlgDev( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );
	
	m_wxNotebook234 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel11 = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( m_panel11, wxID_ANY, _("DD.dddddd° (no limit to decimals)") ), wxVERTICAL );
	
	wxBoxSizer* bSizer1321;
	bSizer1321 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer1431;
	bSizer1431 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3231 = new wxStaticText( m_panel11, wxID_ANY, _("Lattitude  "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231->Wrap( -1 );
	bSizer1431->Add( m_staticText3231, 1, wxALL|wxEXPAND, 5 );
	
	m_Lat1 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Lat1->SetMaxLength( 0 ); 
	bSizer1431->Add( m_Lat1, 3, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_staticText3331 = new wxStaticText( m_panel11, wxID_ANY, _("°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331->Wrap( -1 );
	bSizer1431->Add( m_staticText3331, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	
	bSizer1321->Add( bSizer1431, 0, 0, 5 );
	
	wxBoxSizer* bSizer14311;
	bSizer14311 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32311 = new wxStaticText( m_panel11, wxID_ANY, _("Longitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32311->Wrap( -1 );
	bSizer14311->Add( m_staticText32311, 1, wxALL|wxEXPAND, 5 );
	
	m_Lon1 = new wxTextCtrl( m_panel11, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Lon1->SetMaxLength( 0 ); 
	bSizer14311->Add( m_Lon1, 3, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	m_staticText33311 = new wxStaticText( m_panel11, wxID_ANY, _("°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33311->Wrap( -1 );
	bSizer14311->Add( m_staticText33311, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	
	bSizer1321->Add( bSizer14311, 0, 0, 5 );
	
	
	sbSizer7->Add( bSizer1321, 0, wxEXPAND, 5 );
	
	
	bSizer40->Add( sbSizer7, 0, wxEXPAND, 5 );
	
	m_button4 = new wxButton( m_panel11, wxID_ANY, _("Convert"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer40->Add( m_button4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	m_panel11->SetSizer( bSizer40 );
	m_panel11->Layout();
	bSizer40->Fit( m_panel11 );
	m_wxNotebook234->AddPage( m_panel11, _("Degrees"), false );
	m_panel151 = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4011;
	bSizer4011 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer721;
	sbSizer721 = new wxStaticBoxSizer( new wxStaticBox( m_panel151, wxID_ANY, _("DD.dddddd° (no limit to decimals)") ), wxVERTICAL );
	
	wxBoxSizer* bSizer132121;
	bSizer132121 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer143131;
	bSizer143131 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText323131 = new wxStaticText( m_panel151, wxID_ANY, _("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323131->Wrap( -1 );
	bSizer143131->Add( m_staticText323131, 0, wxALL, 5 );
	
	m_Lat1_d1 = new wxTextCtrl( m_panel151, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lat1_d1->SetMaxLength( 0 ); 
	bSizer143131->Add( m_Lat1_d1, 0, wxALL, 5 );
	
	m_staticText333131 = new wxStaticText( m_panel151, wxID_ANY, _("°"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText333131->Wrap( -1 );
	bSizer143131->Add( m_staticText333131, 0, wxALL, 5 );
	
	m_Lat1_m1 = new wxTextCtrl( m_panel151, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lat1_m1->SetMaxLength( 0 ); 
	bSizer143131->Add( m_Lat1_m1, 0, wxALL, 5 );
	
	m_staticText11431 = new wxStaticText( m_panel151, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11431->Wrap( -1 );
	bSizer143131->Add( m_staticText11431, 0, wxALL, 5 );
	
	wxString m_Lat1_NS1Choices[] = { _("N"), _("S") };
	int m_Lat1_NS1NChoices = sizeof( m_Lat1_NS1Choices ) / sizeof( wxString );
	m_Lat1_NS1 = new wxChoice( m_panel151, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NS1NChoices, m_Lat1_NS1Choices, 0 );
	m_Lat1_NS1->SetSelection( 0 );
	bSizer143131->Add( m_Lat1_NS1, 0, wxALL, 5 );
	
	
	bSizer132121->Add( bSizer143131, 0, 0, 5 );
	
	wxBoxSizer* bSizer1431121;
	bSizer1431121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3231121 = new wxStaticText( m_panel151, wxID_ANY, _("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3231121, 0, wxALL, 5 );
	
	m_Lon1_d1 = new wxTextCtrl( m_panel151, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lon1_d1->SetMaxLength( 0 ); 
	bSizer1431121->Add( m_Lon1_d1, 0, wxALL, 5 );
	
	m_staticText3331121 = new wxStaticText( m_panel151, wxID_ANY, _("°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3331121, 0, wxALL, 5 );
	
	m_Lon1_m1 = new wxTextCtrl( m_panel151, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lon1_m1->SetMaxLength( 0 ); 
	bSizer1431121->Add( m_Lon1_m1, 0, wxALL, 5 );
	
	m_staticText114121 = new wxStaticText( m_panel151, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText114121->Wrap( -1 );
	bSizer1431121->Add( m_staticText114121, 0, wxALL, 5 );
	
	wxString m_Lon1_EW1Choices[] = { _("E"), _("W") };
	int m_Lon1_EW1NChoices = sizeof( m_Lon1_EW1Choices ) / sizeof( wxString );
	m_Lon1_EW1 = new wxChoice( m_panel151, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EW1NChoices, m_Lon1_EW1Choices, 0 );
	m_Lon1_EW1->SetSelection( 0 );
	bSizer1431121->Add( m_Lon1_EW1, 0, wxALL, 5 );
	
	
	bSizer132121->Add( bSizer1431121, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	sbSizer721->Add( bSizer132121, 0, 0, 5 );
	
	
	bSizer4011->Add( sbSizer721, 0, 0, 5 );
	
	wxBoxSizer* bSizer4811;
	bSizer4811 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button811 = new wxButton( m_panel151, wxID_ANY, _("Convert"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4811->Add( m_button811, 0, wxALL, 5 );
	
	
	bSizer4011->Add( bSizer4811, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	m_panel151->SetSizer( bSizer4011 );
	m_panel151->Layout();
	bSizer4011->Fit( m_panel151 );
	m_wxNotebook234->AddPage( m_panel151, _("Degree, Minute"), false );
	m_panel15 = new wxPanel( m_wxNotebook234, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer401;
	bSizer401 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer72;
	sbSizer72 = new wxStaticBoxSizer( new wxStaticBox( m_panel15, wxID_ANY, _("DD°MM’SS.s (no limit to digits)") ), wxVERTICAL );
	
	wxBoxSizer* bSizer13212;
	bSizer13212 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14313;
	bSizer14313 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText32313 = new wxStaticText( m_panel15, wxID_ANY, _("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32313->Wrap( -1 );
	bSizer14313->Add( m_staticText32313, 0, wxALL, 5 );
	
	m_Lat1_d = new wxTextCtrl( m_panel15, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lat1_d->SetMaxLength( 0 ); 
	bSizer14313->Add( m_Lat1_d, 0, wxALL, 5 );
	
	m_staticText33313 = new wxStaticText( m_panel15, wxID_ANY, _("°"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText33313->Wrap( -1 );
	bSizer14313->Add( m_staticText33313, 0, wxALL, 5 );
	
	m_Lat1_m = new wxTextCtrl( m_panel15, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lat1_m->SetMaxLength( 0 ); 
	bSizer14313->Add( m_Lat1_m, 0, wxALL, 5 );
	
	m_staticText1143 = new wxStaticText( m_panel15, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1143->Wrap( -1 );
	bSizer14313->Add( m_staticText1143, 0, wxALL, 5 );
	
	m_Lat1_s = new wxTextCtrl( m_panel15, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lat1_s->SetMaxLength( 0 ); 
	bSizer14313->Add( m_Lat1_s, 0, wxALL, 5 );
	
	m_staticText1153 = new wxStaticText( m_panel15, wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1153->Wrap( -1 );
	bSizer14313->Add( m_staticText1153, 0, wxALL, 5 );
	
	wxString m_Lat1_NSChoices[] = { _("N"), _("S") };
	int m_Lat1_NSNChoices = sizeof( m_Lat1_NSChoices ) / sizeof( wxString );
	m_Lat1_NS = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NSNChoices, m_Lat1_NSChoices, 0 );
	m_Lat1_NS->SetSelection( 0 );
	bSizer14313->Add( m_Lat1_NS, 0, wxALL, 5 );
	
	
	bSizer13212->Add( bSizer14313, 0, 0, 5 );
	
	wxBoxSizer* bSizer143112;
	bSizer143112 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText323112 = new wxStaticText( m_panel15, wxID_ANY, _("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323112->Wrap( -1 );
	bSizer143112->Add( m_staticText323112, 0, wxALL, 5 );
	
	m_Lon1_d = new wxTextCtrl( m_panel15, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lon1_d->SetMaxLength( 0 ); 
	bSizer143112->Add( m_Lon1_d, 0, wxALL, 5 );
	
	m_staticText333112 = new wxStaticText( m_panel15, wxID_ANY, _("°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333112->Wrap( -1 );
	bSizer143112->Add( m_staticText333112, 0, wxALL, 5 );
	
	m_Lon1_m = new wxTextCtrl( m_panel15, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lon1_m->SetMaxLength( 0 ); 
	bSizer143112->Add( m_Lon1_m, 0, wxALL, 5 );
	
	m_staticText11412 = new wxStaticText( m_panel15, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11412->Wrap( -1 );
	bSizer143112->Add( m_staticText11412, 0, wxALL, 5 );
	
	m_Lon1_s = new wxTextCtrl( m_panel15, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	m_Lon1_s->SetMaxLength( 0 ); 
	bSizer143112->Add( m_Lon1_s, 0, wxALL, 5 );
	
	m_staticText11512 = new wxStaticText( m_panel15, wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11512->Wrap( -1 );
	bSizer143112->Add( m_staticText11512, 0, wxALL, 5 );
	
	wxString m_Lon1_EWChoices[] = { _("E"), _("W") };
	int m_Lon1_EWNChoices = sizeof( m_Lon1_EWChoices ) / sizeof( wxString );
	m_Lon1_EW = new wxChoice( m_panel15, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EWNChoices, m_Lon1_EWChoices, 0 );
	m_Lon1_EW->SetSelection( 0 );
	bSizer143112->Add( m_Lon1_EW, 0, wxALL, 5 );
	
	
	bSizer13212->Add( bSizer143112, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	sbSizer72->Add( bSizer13212, 0, 0, 5 );
	
	
	bSizer401->Add( sbSizer72, 0, 0, 5 );
	
	wxBoxSizer* bSizer481;
	bSizer481 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button81 = new wxButton( m_panel15, wxID_ANY, _("Convert"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer481->Add( m_button81, 0, wxALL, 5 );
	
	
	bSizer401->Add( bSizer481, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	m_panel15->SetSizer( bSizer401 );
	m_panel15->Layout();
	bSizer401->Fit( m_panel15 );
	m_wxNotebook234->AddPage( m_panel15, _("° ' \""), true );
	
	bSizer35->Add( m_wxNotebook234, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer35, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	bSizer10->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_wxNotebook234->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( ConvDlgDev::OnNoteBookFit ), NULL, this );
	m_button811->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConvDlgDev::OnConverttoDegree ), NULL, this );
	m_button81->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConvDlgDev::OnConverttoDegree ), NULL, this );
}

ConvDlgDev::~ConvDlgDev()
{
	// Disconnect Events
	m_wxNotebook234->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( ConvDlgDev::OnNoteBookFit ), NULL, this );
	m_button811->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConvDlgDev::OnConverttoDegree ), NULL, this );
	m_button81->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConvDlgDev::OnConverttoDegree ), NULL, this );
	
}
