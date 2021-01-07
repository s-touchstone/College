<%@ Page Title="" Language="VB" MasterPageFile="~/MasterPage.master" AutoEventWireup="false" CodeFile="Order.aspx.vb" Inherits="Default4" %>

<asp:Content ID="Order" ContentPlaceHolderID="Content" Runat="Server">
    <br />
    <br />
    <asp:ValidationSummary ID="ValidationSummary1" runat="server" HeaderText="Following error occurs:" ShowMessageBox="true" DisplayMode="BulletList" ShowSummary="false" />
    <asp:Label ID="Frst_lbl" runat="server" Text="First Name:" Width="110px"></asp:Label>
    <asp:TextBox ID="Frst_txt" runat="server"></asp:TextBox>
    <asp:RequiredFieldValidator id="Frst_val" runat="server" ValidationGroup="" ControlToValidate="Frst_txt" ErrorMessage="  Frist name field is required!"
        EnableClientScript="true" SetFocusOnError="true" Display="Dynamic" Text="* Missing!" ForeColor="Red">
    </asp:RequiredFieldValidator><br />
    <br />
    <asp:Label ID="Last_lbl" runat="server" Text="Last Name:" Width="110px"></asp:Label>
    <asp:TextBox ID="Last_txt" runat="server"></asp:TextBox>
    <asp:RequiredFieldValidator id="Last_val" runat="server" ValidationGroup="" ControlToValidate="Last_txt" ErrorMessage="  Last name field is required!"
        EnableClientScript="true" SetFocusOnError="true" Display="Dynamic" Text="* Missing!" ForeColor="Red">
    </asp:RequiredFieldValidator><br />
    <br />
    <asp:Label ID="Fone_lbl" runat="server" Text="Phone Number:" Width="110px"></asp:Label>
    <asp:TextBox ID="Fone_txt" runat="server"></asp:TextBox>
    <asp:RequiredFieldValidator id="Fone_val" runat="server" ValidationGroup="" ControlToValidate="Fone_txt" ErrorMessage="  Phone number field is required!"
        EnableClientScript="true" SetFocusOnError="true" Display="Dynamic" Text="* Missing!" ForeColor="Red">
    </asp:RequiredFieldValidator><br />    
    <br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Info_btn" runat="server" Text="Submit Order" OnClick="Info_btn_Click" />
    <br />
    <br />
    <br />            
</asp:Content>