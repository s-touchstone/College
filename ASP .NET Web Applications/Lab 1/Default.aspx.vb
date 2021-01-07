
Partial Class _Default
    Inherits System.Web.UI.Page

    Private Sub _Default_Load(sender As Object, e As EventArgs) Handles Me.Load
        Response.Write("Load<br/>")
    End Sub

    Private Sub _Default_PreLoad(sender As Object, e As EventArgs) Handles Me.PreLoad
        Response.Write("PreLoad<br/>")
    End Sub

    Private Sub _Default_PreInit(sender As Object, e As EventArgs) Handles Me.PreInit
        Response.Write("PreInit<br/>")
    End Sub

    Private Sub _Default_PreRenderComplete(sender As Object, e As EventArgs) Handles Me.PreRenderComplete
        Response.Write("PreRenderComplete<br/>")
    End Sub

    Private Sub _Default_InitComplete(sender As Object, e As EventArgs) Handles Me.InitComplete
        Response.Write("InitComplete<br/>")
    End Sub

    Private Sub _Default_LoadComplete(sender As Object, e As EventArgs) Handles Me.LoadComplete
        Response.Write("LoadComplete<br/>")
    End Sub

    Private Sub _Default_SaveStateComplete(sender As Object, e As EventArgs) Handles Me.SaveStateComplete
        Response.Write("SaveStateComplete<br/>")
    End Sub

    Private Sub _Default_Init(sender As Object, e As EventArgs) Handles Me.Init
        Response.Write("Init<br/>")
    End Sub

    Private Sub _Default_PreRender(sender As Object, e As EventArgs) Handles Me.PreRender
        Response.Write("PreRender<br/>")
    End Sub
End Class
