[CmdletBinding()]
param(
    [Parameter(Mandatory=$True)]
    [string]$TargetDir,
    [Parameter()]
    [string]$LibDir = "..\lib"
)

$ErrorActionPreference = "Stop"

if (!(Test-Path $LibDir)) {
    mkdir $LibDir | Out-Null
}

cp "$TargetDir\CSharpToCPPBridge.dll" $LibDir
cp "$TargetDir\CSharpToCPPBridge.lib" $LibDir
