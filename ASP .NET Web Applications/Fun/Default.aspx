<%@ Page Language="VB" AutoEventWireup="false" CodeFile="Default.aspx.vb" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <br />
            <br />
            <asp:Label ID="Anml_lbl" runat="server" Text="Animal:" Width="100px"></asp:Label>
            <asp:TextBox ID="Anml_in" runat="server"></asp:TextBox><br />
            <asp:Label ID="Emtn_lbl" runat="server" Text="Emotion:" Width="100px"></asp:Label>
            <asp:TextBox ID="Emtn_in" runat="server"></asp:TextBox>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
            <asp:Label ID="Outp_lbl" runat="server"></asp:Label><br />
            <asp:Label ID="Actn_lbl" runat="server" Text="Action:" Width="100px"></asp:Label>
            <asp:TextBox ID="Actn_in" runat="server"></asp:TextBox><br />
            <asp:Label ID="Item_lbl" runat="server" Text="Personal Item:" Width="100px"></asp:Label>
            <asp:TextBox ID="Item_in" runat="server"></asp:TextBox><br />
            <br />
            <br />&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
            <asp:Button ID="Sbmt_btn" runat="server" Text="Submit" OnClick="Sbmt_btn_Click" />
            <br />
            <br />
        </div>
    </form>
</body>
</html>
