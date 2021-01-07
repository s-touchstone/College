
Partial Class _Default
    Inherits System.Web.UI.Page

    Protected Sub Sbmt_btn_Click(sender As Object, e As EventArgs)
        Bing_frm.Attributes("src") = "http://www.bing.com/search?q=" & Srch_in.Text
    End Sub
    Protected Sub Red_btn_Click(sender As Object, e As EventArgs)
        Body_id.Attributes("bgcolor") = "Red"
    End Sub
    Protected Sub Blue_btn_Click(sender As Object, e As EventArgs)
        Body_id.Attributes("bgcolor") = "Blue"
    End Sub
    Protected Sub Gren_btn_Click(sender As Object, e As EventArgs)
        Body_id.Attributes("bgcolor") = "Green"
    End Sub
    Protected Sub Yelw_btn_Click(sender As Object, e As EventArgs)
        Body_id.Attributes("bgcolor") = "Yellow"
    End Sub
End Class
