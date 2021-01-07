
Partial Class Default4
    Inherits System.Web.UI.Page

    Protected Sub Info_btn_Click(sender As Object, e As EventArgs)
        If (Page.IsValid) Then
            Response.Redirect("~/Thank_You.aspx")
        End If
    End Sub
End Class