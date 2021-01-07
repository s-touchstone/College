<%@ Page Language="VB" AutoEventWireup="false" CodeFile="Default.aspx.vb" Inherits="_Default" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        body {
            background-color: white;
            font-size: 14pt;
        }
        .divHeader {
            background-color: blue;
            text-align: center;
            border: 1px solid black;
            padding: 8px;
        }
        .divMessage {
            border: 1px solid black;
            padding: 8px;
        }
        .divFooter {
            background-color: blue;
            text-align: center;
            border: 1px solid black;
            padding: 8px;
        }
        .lblClass {
            font-family: Verdana;
            color: yellow;
            font-size: 14pt;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <div class="divHeader">
                <asp:Label ID="Titl_lbl" runat="server" CssClass="lblClass">Steven's Cafe</asp:Label>
            </div>
            <div class="divMessage">
                <asp:Label ID="Mssg_lbl" runat="server"></asp:Label>
            </div>
            <div class="divFooter">
                <asp:Label ID="Foot_lbl" runat="server" CssClass="lblClass">Copyright 2013 - Steven Touchstone</asp:Label>
             </div>
        </div>
    </form>
</body>
</html>
