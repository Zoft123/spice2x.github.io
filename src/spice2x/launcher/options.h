#pragma once

#include <memory>
#include <vector>

#include "cfg/option.h"

namespace launcher {

    // options list - order matters
    namespace Options {
        enum {
            GameExecutable,
            OpenConfigurator,
            OpenKFControl,
            EAmusementEmulation,
            ServiceURL,
            PCBID,
            Player1Card,
            Player2Card,
            Player1PinMacro,
            Player2PinMacro,
            WindowedMode,
            InjectHook,
            EarlyInjectHook,
            ExecuteScript,
            CaptureCursor,
            ShowCursor,
            DisplayAdapter,
            GraphicsForceSingleAdapter,
            GraphicsForceRefresh,
            FullscreenResolution,
            Graphics9On12,
            spice2x_Dx9On12,
            NoLegacy,
            RichPresence,
            SmartEAmusement,
            EAmusementMaintenance,
            spice2x_EAmusementMaintenance,
            AdapterNetwork,
            AdapterSubnet,
            DisableNetworkFixes,
            HTTP11,
            DisableSSL,
            URLSlash,
            SOFTID,
            VREnable,
            DisableOverlay,
            spice2x_FpsAutoShow,
            spice2x_FpsOpposite,
            spice2x_SubScreenAutoShow,
            spice2x_IOPanelAutoShow,
            spice2x_KeypadAutoShow,
            LoadIIDXModule,
            IIDXCameraOrderFlip,
            IIDXDisableCameras,
            IIDXCamHook,
            IIDXCamHookRatio,
            IIDXCamHookOverride,
            IIDXCamHookTopId,
            IIDXCamHookFrontId,
            IIDXSoundOutputDevice,
            IIDXAsioDriver,
            IIDXBIO2FW,
            IIDXTDJMode,
            spice2x_IIDXDigitalTTSensitivity,
            spice2x_IIDXLDJForce720p,
            spice2x_IIDXTDJSubSize,
            spice2x_IIDXLEDFontSize,
            spice2x_IIDXLEDColor,
            spice2x_IIDXLEDPos,
            LoadSoundVoltexModule,
            SDVXForce720p,
            SDVXPrinterEmulation,
            SDVXPrinterOutputPath,
            SDVXPrinterOutputClear,
            SDVXPrinterOutputOverwrite,
            SDVXPrinterOutputFormat,
            SDVXPrinterJPGQuality,
            SDVXDisableCameras,
            SDVXNativeTouch,
            spice2x_SDVXDigitalKnobSensitivity,
            spice2x_SDVXAsioDriver,
            spice2x_SDVXSubPos,
            spice2x_SDVXSubRedraw,
            LoadDDRModule,
            DDR43Mode,
            LoadPopnMusicModule,
            PopnMusicForceHDMode,
            PopnMusicForceSDMode,
            LoadHelloPopnMusicModule,
            LoadGitaDoraModule,
            GitaDoraTwoChannelAudio,
            GitaDoraCabinetType,
            LoadJubeatModule,
            LoadReflecBeatModule,
            LoadShogikaiModule,
            LoadBeatstreamModule,
            LoadNostalgiaModule,
            LoadDanceEvolutionModule,
            LoadFutureTomTomModule,
            LoadBBCModule,
            LoadMetalGearArcadeModule,
            LoadQuizMagicAcademyModule,
            LoadRoadFighters3DModule,
            LoadSteelChronicleModule,
            LoadMahjongFightClubModule,
            LoadScottoModule,
            LoadDanceRushModule,
            LoadWinningElevenModule,
            LoadOtocaModule,
            LoadLovePlusModule,
            LoadChargeMachineModule,
            LoadOngakuParadiseModule,
            LoadBusouShinkiModule,
            LoadCCJModule,
            LoadQKSModule,
            LoadMFGModule,
            LoadMusecaModule,
            PathToModules,
            ScreenshotFolder,
            ConfigurationPath,
            ScreenResizeConfigPath,
            PatchManagerConfigPath,
            IntelSDEFolder,
            PathToEa3Config,
            PathToAppConfig,
            PathToAvsConfig,
            PathToBootstrap,
            PathToLog,
            APITCPPort,
            APIPassword,
            APIVerboseLogging,
            APISerialPort,
            APISerialBaud,
            APIPretty,
            APIDebugMode,
            EnableAllIOModules,
            EnableACIOModule,
            EnableICCAModule,
            EnableDEVICEModule,
            EnableEXTDEVModule,
            EnableSCIUNITModule,
            EnableDevicePassthrough,
            ForceWinTouch,
            ForceTouchEmulation,
            InvertTouchCoordinates,
            DisableTouchCardInsert,
            spice2x_TouchCardInsert,
            ICCAReaderPort,
            ICCAReaderPortToggle,
            CardIOHIDReaderSupport,
            CardIOHIDReaderOrderFlip,
            CardIOHIDReaderOrderToggle,
            HIDSmartCard,
            HIDSmartCardOrderFlip,
            HIDSmartCardOrderToggle,
            HIDSmartCardIdConvert,
            SextetStreamPort,
            EnableBemaniTools5API,
            RealtimeProcessPriority,
            spice2x_ProcessPriority,
            spice2x_ProcessAffinity,
            spice2x_ProcessorEfficiencyClass,
            HeapSize,
            DisableGSyncDetection,
            spice2x_NvapiProfile,
            DisableAudioHooks,
            spice2x_DisableVolumeHook,
            AudioBackend,
            AsioDriverId,
            AudioDummy,
            DelayBy5Seconds,
            spice2x_DelayByNSeconds,
            LoadStubs,
            AdjustOrientation,
            spice2x_AutoOrientation,
            LogLevel,
            EAAutomap,
            EANetdump,
            DiscordAppID,
            BlockingLogger,
            DebugCreateFile,
            VerboseGraphicsLogging,
            VerboseAVSLogging,
            DisableColoredOutput,
            DisableACPHook,
            DisableSignalHandling,
            DisableDebugHooks,
            DisableAvsVfsDriveMountRedirection,
            OutputPEB,
            DumpSystemInfo,
            QKSArgs,
            CCJArgs,
            CCJMouseTrackball,
            CCJMouseTrackballWithToggle,
            CCJTrackballSensitivity,
            MFGArgs,
            MFGCabType,
            MFGNoIO,
            spice2x_LightsOverallBrightness,
            spice2x_WindowBorder,
            spice2x_WindowSize,
            spice2x_WindowPosition,
            spice2x_WindowAlwaysOnTop,
            WindowForceScaling,
            spice2x_IIDXWindowedSubscreenSize,
            spice2x_IIDXWindowedSubscreenPosition,
            spice2x_JubeatLegacyTouch,
            spice2x_RBTouchScale,
            spice2x_AsioForceUnload,
            spice2x_IIDXNoESpec,
            spice2x_IIDXWindowedTDJ,
            spice2x_DRSDisableTouch,
            spice2x_DRSTransposeTouch,
            spice2x_IIDXNativeTouch,
            spice2x_IIDXNoSub,
            spice2x_IIDXEmulateSubscreenKeypadTouch,
            spice2x_AutoCard,
            spice2x_LowLatencySharedAudio,
            spice2x_TapeLedAlgorithm,
            spice2x_NoNVAPI,
            spice2x_NoD3D9DeviceHook,
            spice2x_SDVXNoSub,
            spice2x_EnableSMXStage,
            spice2x_EnableSMXDedicab,
            IIDXRecQuality,
            MidiAlgoVer,
            MidiNoteSustain,
            NostalgiaPoke,
            ForceBackBufferCount,
        };

        enum class OptionsCategory {
            Everything,
            Basic,
            Advanced,
            Dev,
            API
        };
    }

    const std::vector<std::string> &get_categories(Options::OptionsCategory category);
    const std::vector<OptionDefinition> &get_option_definitions();
    std::unique_ptr<std::vector<Option>> parse_options(int argc, char *argv[]);
    std::vector<Option> merge_options(const std::vector<Option> &options, const std::vector<Option> &overrides);

    struct GameVersion {
        std::string model;
        std::string dest;
        std::string spec;
        std::string rev;
        std::string ext;
    };

    std::string detect_bootstrap_release_code();
    GameVersion detect_gameversion(const std::string& ea3_user);
}
