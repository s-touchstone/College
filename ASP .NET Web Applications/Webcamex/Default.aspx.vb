
Partial Class _Default
    Inherits System.Web.UI.Page

    Protected Sub NYC_btn_Click(sender As Object, e As EventArgs)
        Disp_frm.Attributes("src") = "http://www.camscape.com/thumbnails/725.jpg"
    End Sub
    Protected Sub Lndn_btn_Click(sender As Object, e As EventArgs)
        Disp_frm.Attributes("src") = "http://londonwebcam.virtual-london.com/cam.jpg"
    End Sub
    Protected Sub StPt_btn_Click(sender As Object, e As EventArgs)
        Disp_frm.Attributes("src") = "http://images.webcams.travel/webcam/1312447947-Weather-Vasilevsky-Island-St.-Petersburg.-Saint-Petersburg.jpg"
    End Sub
    Protected Sub BndB_btn_Click(sender As Object, e As EventArgs)
        Disp_frm.Attributes("src") = "http://www.camscape.com/thumbnails/3557.jpg"
    End Sub
End Class
