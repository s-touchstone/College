
Partial Class MasterPage
    Inherits System.Web.UI.MasterPage
    Protected Sub Head_lnk_Click(sender As Object, e As EventArgs)
        Response.Redirect("Default.aspx")
    End Sub
End Class

