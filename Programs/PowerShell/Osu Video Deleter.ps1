$path = Read-Host "Please enter path to osu song folder"
$check = Read-Host "is this correct path to your osu song folder: $path"
if($check -eq "y")
{
    Get-ChildItem -path $path -include *.avi -Recurse | Remove-Item
    Get-ChildItem -path $path -include *.flv -Recurse | Remove-Item
    Get-ChildItem -path $path -include *.wmv -Recurse | Remove-Item
    Get-ChildItem -path $path -include *.mp4 -Recurse | Remove-Item
} else {
    Write-Host "Restart Program"
}
Write-Host "Thanks for using OSU! Video Deleter"
