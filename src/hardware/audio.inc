; vim: ft=asm

; audio.inc
; Constants and Addresses for GB Hardware Audio.

; Pulse Channels.
GbPulse1Sweep           EQU     $FF10
GbPulse1Pattern         EQU     $FF11
GbPulse1Envelope        EQU     $FF12
GbPulse1FreqLow         EQU     $FF13
GbPulse1FreqHigh        EQU     $FF14
GbPulse2Sweep           EQU     $FF15
GbPulse2Pattern         EQU     $FF16
GbPulse2Envelope        EQU     $FF17
GbPulse2FreqLow         EQU     $FF18
GbPulse2FreqHigh        EQU     $FF19

GB_PULSE_DIRECTION_INC          EQU     %00001000
GB_PULSE_DIRECTION_DEC          EQU     %00000000
GB_PULSE_SWEEP_TIME_MASK        EQU     %01110000
GB_PULSE_SWEEP_SHIFT_MASK       EQU     %00000111
GB_PULSE_ENVELOPE_INITIAL_MASK  EQU     %11110000
GB_PULSE_ENVELOPE_SWEEP_MASK    EQU     %00000111

GB_PULSE_PATTERN_DUTY_MASK      EQU     %11000000
GB_PULSE_PATTERN_LENGTH_MASK    EQU     %00011111

GB_PULSE_FREQ_HIGH_RESTART      EQU     %10000000
GB_PULSE_FREQ_HIGH_COUNT        EQU     %00100000
GB_PULSE_FREQ_HIGH_MASK         EQU     %00000111

; Wave Channel
GbWaveToggle    EQU     $FF1A
GbWaveLength    EQU     $FF1B
GbWaveVolume    EQU     $FF1C
GbWaveFreqLow   EQU     $FF1D
GbWaveFreqHigh  EQU     $FF1E

GB_WAVE_TOGGLE_ENABLE           EQU     %10000000
GB_WAVE_TOGGLE_DISABLE          EQU     %00000000

GB_WAVE_VOLUME_0                EQU     %00000000
GB_WAVE_VOLUME_100              EQU     %00100000
GB_WAVE_VOLUME_50               EQU     %01000000
GB_WAVE_VOLUME_25               EQU     %01100000

GB_WAVE_FREQ_HIGH_RESTART       EQU     %10000000
GB_WAVE_FREQ_HIGH_COUNT         EQU     %01000000
GB_WAVE_FREQ_HIGH_MASK          EQU     %00000111

; Noise Channel.
GbNoiseLength   EQU     $FF20
GbNoiseEnvelope EQU     $FF21
GbNoisePoly     EQU     $FF22
GbNoisePlay     EQU     $FF23

GB_NOISE_LENGTH_MASK            EQU     %00011111

GB_NOISE_ENVELOPE_INITIAL_MASK  EQU     %11110000
GB_NOISE_ENVELOPE_DIRECTION_INC EQU     %00001000
GB_NOISE_ENVELOPE_DIRECTION_DEC EQU     %00000000
GB_NOISE_ENVELOPE_SWEEP_MASK    EQU     %00000111

GB_NOISE_POLY_CLOCK             EQU     %11110000
GB_NOISE_POLY_STEP              EQU     %00001000
GB_NOISE_POLY_RATIO             EQU     %00000111

GB_NOISE_PLAY_RESTART           EQU     %10000000
GB_NOISE_PLAY_COUNT             EQU     %01000000

; Audio volume.
GbAudioVolume   EQU     $FF24

GB_AUDIO_VOLUME_RIGHT_VIN       EQU     %10000000
GB_AUDIO_VOLUME_RIGHT_MASK      EQU     %01110000
GB_AUDIO_VOLUME_LEFT_VIN        EQU     %00001000
GB_AUDIO_VOLUME_LEFT_MASK       EQU     %00000111

; Audio panning.
GbAudioPan      EQU     $FF25

GB_AUDIO_PAN_PULSE1_L   EQU     %00000001
GB_AUDIO_PAN_PULSE1_R   EQU     %00010000
GB_AUDIO_PAN_PULSE2_L   EQU     %00000010
GB_AUDIO_PAN_PULSE2_R   EQU     %00100000
GB_AUDIO_PAN_WAVE_L     EQU     %00000100
GB_AUDIO_PAN_WAVE_R     EQU     %01000000
GB_AUDIO_PAN_NOISE_L    EQU     %00001000
GB_AUDIO_PAN_NOISE_R    EQU     %10000000

; Audio toggle.
GbAudioToggle   EQU     $FF26

GB_AUDIO_TOGGLE_PULSE1  EQU     %00000001
GB_AUDIO_TOGGLE_PULSE2  EQU     %00000010
GB_AUDIO_TOGGLE_WAVE    EQU     %00000100
GB_AUDIO_TOGGLE_NOISE   EQU     %00001000
GB_AUDIO_TOGGLE_ENABLE  EQU     %10000000
GB_AUDIO_TOGGLE_DISABLE EQU     %00000000
