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
            <asp:Button ID="NYC_btn" runat="server" Text="New York City, USA" OnClick="NYC_btn_Click" Width="130px"/>&nbsp;&nbsp;&nbsp
            <asp:Button ID="Lndn_btn" runat="server" Text="London, UK" OnClick="Lndn_btn_Click" Width="130px"/>&nbsp;&nbsp;&nbsp
            <asp:Button ID="StPt_btn" runat="server" Text="St. Petersburg, RU" OnClick="StPt_btn_Click" Width="130px"/>&nbsp;&nbsp;&nbsp
            <asp:Button ID="BndB_btn" runat="server" Text="Bondi Beach, AU" OnClick="BndB_btn_Click" Width="130px"/><br />
            <br />
            <iframe id="Disp_frm" runat="server" height="500px" width="500px" src="http://www.camscape.com/thumbnails/725.jpg"></iframe>
        </div>
    </form>
</body>
</html>
