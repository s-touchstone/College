
Partial Class _Default
    Inherits System.Web.UI.Page

    Protected Sub Sbmt_btn_Click(sender As Object, e As EventArgs)
        Outp_lbl.Text = "Hello World, " & Name_in.Text & " Rulez!"
    End Sub
End Class
