
Partial Class _Default
    Inherits System.Web.UI.Page
    Protected Sub Page_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load
        Dim a As Decimal = DoMath(5, "A")
    End Sub
    Private Function DoMath(dOne As String, dTwo As String) As Decimal
        Dim rc As Decimal = 0.0
        Try
            rc = CDec(dOne) + CDec(dTwo)
        Catch ex As Exception
            Mssg_lbl.Text = "An Error has occurred: " & ex.Message
        End Try
        Return rc
    End Function
End Class
