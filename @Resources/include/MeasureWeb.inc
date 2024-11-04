[MeasureState]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
UpdateDivider=2

[MeasureStateButton]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
Substitute="0":"Play","1":"Pause","2":"Play"
UpdateDivider=2

[MeasureTrack]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
Substitute="":"#NoTrackNameText#"
UpdateDivider=100

[MeasureArtist]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureAlbum]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Album
Substitute="":"#NoArtistNameText#"
UpdateDivider=100

[MeasureCover]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
DefaultPath=#@#images\nocover.png
UpdateDivider=50

[MeasurePosition]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
UpdateDivider=10

[MeasureDuration]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
UpdateDivider=10

[MeasureProgress]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Progress
UpdateDivider=5
