<%@ Page Language="VB" AutoEventWireup="false" CodeFile="Default.aspx.vb" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body id="Body_id" runat="server" bgcolor="Red" >
    <form id="form1" runat="server">
        <div>
            <br />
            <br />
            <asp:Label ID="Srch_lbl" runat="server" Text="Search" Width="80px"></asp:Label>
            <asp:TextBox ID="Srch_in" runat="server"></asp:TextBox>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp
            <asp:Button ID="Sbmt_btn" runat="server" Text="Submit" OnClick="Sbmt_btn_Click"/><br />
            <br />
            <iframe id="Bing_frm" runat="server" width="100%" height="600" src="http://www.bing.com/search?q="></iframe><br />
            <asp:Button ID="Red_btn" runat="server" Text="Red" Width="50px" OnClick="Red_btn_Click"/>&nbsp;&nbsp;&nbsp
            <asp:Button ID="Blue_btn" runat="server" Text="Blue" Width="50px" OnClick="Blue_btn_Click" />&nbsp;&nbsp;&nbsp
            <asp:Button ID="Gren_btn" runat="server" Text="Green" Width="50px" OnClick="Gren_btn_Click" />&nbsp;&nbsp;&nbsp
            <asp:Button ID="Yelw_btn" runat="server" Text="Yellow" Width="50px" OnClick="Yelw_btn_Click" />
            <br />
            <br />
        </div>
    </form>
</body>
</html>
