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
    Get-ChildItem -path $path -include pause-continue.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-replay.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-retry.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include play-warningarrow.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include star2.png -Recurse | Remove-Item

    # Delete Osu!std Skin Elements
    Get-ChildItem -path $path -include approachcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-0 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-1 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-2 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-3 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-4 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-5 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-6 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-7 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-8 -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst-9 -Recurse | Remove-Item
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
