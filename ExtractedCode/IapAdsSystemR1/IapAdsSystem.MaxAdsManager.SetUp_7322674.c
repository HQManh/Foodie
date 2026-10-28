// rea decompile_all
// name: IapAdsSystem.MaxAdsManager$$SetUp
// address: 0x7322674
// body: available
// range: 0x7322674-0x7322a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7322a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsManager__SetUp(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_38;
  
  if ((DAT_095205b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ba0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d1ee8);
    FUN_03f5c2a4(&DAT_091d2c48);
    FUN_03f5c2a4(&DAT_09187f00);
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_09189ea8);
    FUN_03f5c2a4(&DAT_092139d8);
    FUN_03f5c2a4(&DAT_09207948);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_09213ec0);
    FUN_03f5c2a4(&DAT_0921a7e8);
    DAT_095205b1 = 1;
  }
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),param_2);
  lVar1 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  local_58 = DAT_09189ea8;
  lVar1 = **(long **)(lVar1 + 0xb8);
  uStack_50 = 0xffffffffffffffff;
  local_48 = 10;
  uVar2 = System_Enum__ToString(&local_58,0);
  if (lVar1 != 0) {
    uVar2 = IapAdsSystem_RemoteConfigManager__GetString(lVar1,uVar2,0);
    lVar1 = FUN_04bdd51c(uVar2,DAT_091d1ee8);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x20) = lVar1;
      thunk_FUN_03f5d7b8();
      uVar2 = System_String__Concat(DAT_09207948,uVar2,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(uVar2,0);
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_09213ec0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar2 = **(undefined8 **)(DAT_09535468 + 0xb8);
      if (*(int *)(lVar1 + 0x10) == 1) {
        if (*(int *)(DAT_09187f00 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_String__Join(DAT_091f86d8,**(undefined8 **)(DAT_09187f00 + 0xb8),0);
        uVar2 = System_String__Concat(uVar2,uVar3,0);
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 == 0) goto LAB_07322a24;
      }
      if (*(int *)(lVar1 + 0x14) == 1) {
        uVar4 = System_String__IsNullOrEmpty(uVar2,0);
        if ((uVar4 & 1) == 0) {
          uVar2 = System_String__Concat(uVar2,DAT_091f86d8,0);
        }
        if (*(int *)(DAT_09187f00 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_String__Join(DAT_091f86d8,*(undefined8 *)(*(long *)(DAT_09187f00 + 0xb8) + 8)
                                    ,0);
        uVar2 = System_String__Concat(uVar2,uVar3,0);
      }
      if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MaxSdkAndroid__SetExtraParameter(DAT_0921a7e8,uVar2,0);
      if (*(char *)(param_1 + 0x80) == '\0') {
        uVar2 = thunk_FUN_03f9944c(DAT_09174ba0);
        FUN_070a8c30(uVar2,param_1,DAT_091d2c48,0);
        MaxSdkCallbacks__add_OnSdkInitializedEvent(uVar2,0);
        *(undefined1 *)(param_1 + 0x80) = 1;
      }
      if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MaxSdkAndroid__SetSdkKey(DAT_092139d8,0);
      uVar2 = UnityEngine_SystemInfo__GetDeviceUniqueIdentifier(0);
      MaxSdkAndroid__SetUserId(uVar2,0);
      MaxSdkAndroid__InitializeSdk(0,0);
      return;
    }
  }
LAB_07322a24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

