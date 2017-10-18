$path = Read-Host "Please enter path to osu song folder"
$check = Read-Host "is this correct path to your osu song folder: $path"
if($check -eq "y")
{
    Write-Host "Running Now Note: Remove-Item has no output this may take while"
    # Delete Video Elements
    Get-ChildItem -path $path -include *.avi -Recurse | Remove-Item
    Get-ChildItem -path $path -include *.flv -Recurse | Remove-Item
    Get-ChildItem -path $path -include *.wmv -Recurse | Remove-Item
    Get-ChildItem -path $path -include *.mp4 -Recurse | Remove-Item

    # Delete Osu! Interface Skin Elements
    Get-ChildItem -path $path -include cursor.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include cursortrail.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include fail-background.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-back.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-overlay.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-replay.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-retry.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include play-warningarrow.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-0.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-1.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-2.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-3.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-4.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-5.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-6.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-7.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-8.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-comma.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-dot.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-percent.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-x.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include section-fail.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include section-pass.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include star2.png -Recurse | Remove-Item

    # Delete Osu!std Skin Elements
    Get-ChildItem -path $path -include approachcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-0.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-1.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-2.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-3.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-4.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-5.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-6.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-7.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-8.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-0.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-1.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-2.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-3.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-4.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-5.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-6.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-7.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-8.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include followpoint.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit0.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit50.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit100.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit100k.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit300.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit300g.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hit300k.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hitcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include hitcircleoverlay.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include lighting.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include reversearrow.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderfollowcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb0.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb1.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb2.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb3.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb4.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb5.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb6.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb7.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb8.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderb9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderscorepoint.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-approachcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-background.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-circle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-clear.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-metre.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-osu.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-spin.png -Recurse | Remove-Item
    Write-Host "Thanks for using OSU! Video Deleter"
    Read-Host "Press Enter to end"
} else {
    Write-Host "Restart Program"
}
