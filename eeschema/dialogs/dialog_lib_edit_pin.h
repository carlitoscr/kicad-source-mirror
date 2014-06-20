#ifndef __dialog_lib_edit_pin__
#define __dialog_lib_edit_pin__

/**
 * @file
 * Subclass of DIALOG_LIB_EDIT_PIN_BASE, which is generated by wxFormBuilder.
 */

#include <wx/bmpcbox.h>

#include <dialog_lib_edit_pin_base.h>

/** Implementing DIALOG_LIB_EDIT_PIN_BASE */
class DIALOG_LIB_EDIT_PIN : public DIALOG_LIB_EDIT_PIN_BASE
{
    LIB_PIN * m_dummyPin;       // a working copy used to show changes

public:
    /** Constructor */
    DIALOG_LIB_EDIT_PIN( EDA_DRAW_FRAME* parent, LIB_PIN* aPin );
    ~DIALOG_LIB_EDIT_PIN();

    void OnCloseDialog( wxCloseEvent& event );
    void OnCancelButtonClick( wxCommandEvent& event );
    void OnOKButtonClick( wxCommandEvent& event );
    void OnPaintShowPanel( wxPaintEvent& event );
    void OnPropertiesChange( wxCommandEvent& event );

    void SetOrientationList( const wxArrayString& list, const BITMAP_DEF* aBitmaps );
    void SetOrientation( int orientation )
    {
        m_choiceOrientation->SetSelection( orientation );
    }
    int GetOrientation( void ) { return m_choiceOrientation->GetSelection(); }

    void SetElectricalTypeList( const wxArrayString& list, const BITMAP_DEF* aBitmaps );
    void SetElectricalType( int type )
    {
        m_choiceElectricalType->SetSelection( type );
    }
    int GetElectricalType( void )
    {
        return m_choiceElectricalType->GetSelection();
    }

    void SetStyleList( const wxArrayString& list, const BITMAP_DEF* aBitmaps );
    void SetStyle( int style ) { m_choiceStyle->SetSelection( style ); }
    int GetStyle( void ) { return m_choiceStyle->GetSelection(); }

    void SetName( const wxString& name ) { m_textPinName->SetValue( name ); }
    wxString GetName( void ) { return m_textPinName->GetValue(); }

    void SetNameTextSize( const wxString& size )
    {
        m_textPinNameTextSize->SetValue( size );
    }
    wxString GetNameTextSize( void )
    {
        return m_textPinNameTextSize->GetValue();
    }

    void SetNameTextSizeUnits( const wxString& units )
    {
        m_staticNameTextSizeUnits->SetLabel( units );
    }

    void SetPadName( const wxString& number )
    {
        m_textPadName->SetValue( number );
    }
    wxString GetPadName( void ) { return m_textPadName->GetValue(); }

    void SetPadNameTextSize( const wxString& size )
    {
        m_textPadNameTextSize->SetValue( size );
    }
    wxString GetPadNameTextSize( void )
    {
        return m_textPadNameTextSize->GetValue();
    }

    void SetPadNameTextSizeUnits( const wxString& units )
    {
        m_staticNumberTextSizeUnits->SetLabel( units );
    }

    void SetLength( const wxString& length )
    {
        m_textLength->SetValue( length );
    }
    wxString GetLength( void ) { return m_textLength->GetValue(); }

    void SetLengthUnits( const wxString& units )
    {
        m_staticLengthUnits->SetLabel( units );
    }

    void SetAddToAllParts( bool apply )
    {
        m_checkApplyToAllParts->SetValue( apply );
    }
    bool GetAddToAllParts( void )
    {
        return m_checkApplyToAllParts->GetValue();
    }

    void SetAddToAllBodyStyles( bool apply )
    {
        m_checkApplyToAllConversions->SetValue( apply );
    }
    bool GetAddToAllBodyStyles( void )
    {
        return m_checkApplyToAllConversions->GetValue();
    }

    void SetVisible( bool visible ) { m_checkShow->SetValue( visible ); }
    bool GetVisible( void ) { return m_checkShow->GetValue(); }
};

#endif // __dialog_lib_edit_pin__
