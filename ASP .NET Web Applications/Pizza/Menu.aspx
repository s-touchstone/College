<%@ Page Title="" Language="VB" MasterPageFile="~/MasterPage.master" AutoEventWireup="false" CodeFile="Menu.aspx.vb" Inherits="Default2" %>

<asp:Content ID="Selection" ContentPlaceHolderID="Content" Runat="Server">
    <br />
    <br />
    <asp:Label ID="Menu_lbl" runat="server" CssClass="content" Text="Please make a choice from our menu below:"></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Chz_btn" runat="server" BackColor="#ff0000" Text="Cheese" OnClick="Chz_btn_Click" Width="110px" />
    <asp:Label ID="Chz_lbl" runat="server" CssClass="content" Text="-A blend of mozzarella, cheddar, and colby jack cheese."></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Pep_btn" runat="server" BackColor="#ff0000" Text="Pepperoni" OnClick="Pep_btn_Click" Width="110px" />
    <asp:Label ID="Pep_lbl" runat="server" CssClass="content" Text="-A classic choice for an Italian-style pizza."></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Sau_btn" runat="server" BackColor="#ff0000" Text="Sausage" OnClick="Sau_btn_Click" Width="110px" />
    <asp:Label ID="Sau_lbl" runat="server" CssClass="content" Text="-A great choice for people who like pork."></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Bef_btn" runat="server" BackColor="#ff0000" Text="Beef" OnClick="Bef_btn_Click" Width="110px" />
    <asp:Label ID="Bef_lbl" runat="server" CssClass="content" Text="-A good choice for those who prefer angus beef."></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Veg_btn" runat="server" BackColor="#ff0000" Text="Veggie" OnClick="Veg_btn_Click" Width="110px" />
    <asp:Label ID="Veg_lbl" runat="server" CssClass="content" Text="-Perfect for Vegetarians: tomatoes, green peppers, onions, mushrooms, etc."></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Sup_btn" runat="server" BackColor="#ff0000" Text="Supreme" OnClick="Sup_btn_Click" Width="110px" />
    <asp:Label ID="Sup_lbl" runat="server" CssClass="content" Text="-Put it all on one pizza if you'd like. We wont stop you."></asp:Label><br />
    <br />
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp
    <asp:Button ID="Tmt_btn" runat="server" BackColor="#ff0000" Text="Three Meat" OnClick="Tmt_btn_Click" Width="110px" />
    <asp:Label ID="Tmt_lbl" runat="server" CssClass="content" Text="-This one is is nothing but our finest meats and cheeses."></asp:Label><br />
    <br />
    <br />
    <br />
    <br />
    <br />                
</asp:Content>