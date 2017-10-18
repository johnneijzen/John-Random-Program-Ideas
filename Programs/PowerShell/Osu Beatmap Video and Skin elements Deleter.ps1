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
    Get-ChildItem -path $path -include cursormiddle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include cursortrail.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include fail-background.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-back.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-overlay.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-replay.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include pause-retry.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include play-warningarrow.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include play-skip.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-0.png, score-1.png, score-2.png, score-3.png, score-4.png, score-5.png, score-6.png, score-7.png, score-8.png, score-9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-comma.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-dot.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-percent.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include score-x.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include section-fail.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include section-pass.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include star2.png -Recurse | Remove-Item

    # Delete Osu!std Skin Elements
    Get-ChildItem -path $path -include approachcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include comboburst.png, comboburst-0.png, comboburst-1.png, comboburst-2.png, comboburst-3.png, comboburst-4.png, comboburst-5.png, comboburst-6.png, comboburst-7.png, comboburst-8.png, comboburst-9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include default-0.png, default-1.png, default-2.png, default-3.png, default-4.png, default-5.png, default-6.png, default-7.png, default-8.png, default-9.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include followpoint.png, followpoint-0.png, followpoint-1.png, followpoint-2.png, followpoint-3.png, followpoint-4.png, followpoint-5.png, followpoint-6.png, followpoint-7.png, followpoint-8.png, followpoint-9.png -Recurse | Remove-Item
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
    Get-ChildItem -path $path -include sliderb.png, sliderb0.png, sliderb1.png, sliderb2.png, sliderb3.png, sliderb4.png, sliderb5.png, sliderb6.png, sliderb7.png, sliderb8.png, sliderb9.png, sliderb10.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderpoint10.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderpoint30.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include sliderscorepoint.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-approachcircle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-background.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-bottom.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-circle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-clear.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-glow.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-metre.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-middle.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-middle2.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-osu.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-rpm.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-spin.png -Recurse | Remove-Item
    Get-ChildItem -path $path -include spinner-top.png -Recurse | Remove-Item

    # Delete Sound Sets Skin Elements
    Get-ChildItem -path $path -include count1s.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include count2s.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include count3s.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include readys.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-hitnormal*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-hitclap*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-hitfinish*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-hitwhistle*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-slidertick*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-sliderslide*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include drum-sliderwhistle*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-hitnormal*.wav-Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-hitclap*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-hitfinish*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-hitwhistle*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-slidertick*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-sliderslide*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include normal-sliderwhistle*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-hitnormal*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-hitclap*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-hitfinish*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-hitwhistle*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-slidertick*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-sliderslide*.wav -Recurse | Remove-Item
    Get-ChildItem -path $path -include soft-sliderwhistle*.wav -Recurse | Remove-Item

    Write-Host "Thanks for using OSU! Video Deleter"
    Read-Host "Press Enter to end"
} else {
    Write-Host "Restart Program"
}
