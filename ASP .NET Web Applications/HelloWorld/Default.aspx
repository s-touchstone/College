<!-- 
Steven Touchstone
Usage: Input your name and then output text while including the data (your name) that was entered.
Lab 1 of .NET Web Applications Development Class
-->
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
            <asp:Label ID="Name_lbl" runat="server" Text="Enter Your First Name:" Width="150px"></asp:Label>
            <asp:TextBox ID="Name_in" runat="server" ></asp:TextBox>
            <asp:Button ID="Sbmt_btn" runat="server" Text="Submit" OnClick="Sbmt_btn_Click" />
            <br />
            <br />
            <asp:Label ID="Outp_lbl" runat="server"></asp:Label>
            <br />
            <br />
        </div>
    </form>
</body>
</html>
