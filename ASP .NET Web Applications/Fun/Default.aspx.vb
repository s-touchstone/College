
Partial Class _Default
    Inherits System.Web.UI.Page

    Protected Sub Sbmt_btn_Click(sender As Object, e As EventArgs) Handles Sbmt_btn.Click
        Outp_lbl.Text = ("May the " + Anml_in.Text + " of " + Emtn_in.Text + " " + Actn_in.Text + " in your " + Item_in.Text)
    End Sub
End Class
