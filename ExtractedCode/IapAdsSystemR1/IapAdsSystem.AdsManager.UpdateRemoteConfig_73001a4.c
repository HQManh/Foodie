// rea decompile_all
// name: IapAdsSystem.AdsManager$$UpdateRemoteConfig
// address: 0x73001a4
// body: available
// range: 0x73001a4-0x730080f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73007f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73007f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73007f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73007fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7300800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7300804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7300808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730080c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__UpdateRemoteConfig(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_48;
  
  if ((DAT_0952045f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e1a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d1e60);
    FUN_03f5c2a4(&DAT_091d1d90);
    FUN_03f5c2a4(&DAT_091d1e68);
    FUN_03f5c2a4(&DAT_091d1e70);
    FUN_03f5c2a4(&DAT_091d1db8);
    FUN_03f5c2a4(&DAT_091d1e78);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09189ea8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_092127f0);
    FUN_03f5c2a4(&DAT_092127c0);
    FUN_03f5c2a4(&DAT_092127d8);
    FUN_03f5c2a4(&DAT_092127e8);
    FUN_03f5c2a4(&DAT_092127c8);
    FUN_03f5c2a4(&DAT_092127e0);
    FUN_03f5c2a4(&DAT_092127d0);
    DAT_0952045f = 1;
  }
  local_68 = DAT_09189ea8;
  lVar4 = *(long *)(param_1 + 0x40);
  local_48 = 0;
  uStack_60 = 0xffffffffffffffff;
  local_58 = 0;
  uVar1 = System_Enum__ToString(&local_68,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
  uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
  lVar4 = FUN_04bdd51c(uVar1,DAT_091d1e70);
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x58) = lVar4;
    thunk_FUN_03f5d7b8();
  }
  uVar1 = System_String__Concat(DAT_092127e0,uVar1,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar1,0);
  local_68 = DAT_09189ea8;
  lVar4 = *(long *)(param_1 + 0x40);
  uStack_60 = 0xffffffffffffffff;
  local_58 = 1;
  uVar1 = System_Enum__ToString(&local_68,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
  uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
  lVar4 = FUN_04bdd51c(uVar1,DAT_091d1e68);
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x68) = lVar4;
    thunk_FUN_03f5d7b8();
  }
  uVar1 = System_String__Concat(DAT_092127d0,uVar1,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar1,0);
  local_68 = DAT_09189ea8;
  lVar4 = *(long *)(param_1 + 0x40);
  uStack_60 = 0xffffffffffffffff;
  local_58 = 4;
  uVar1 = System_Enum__ToString(&local_68,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
  uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
  lVar4 = FUN_04bdd51c(uVar1,DAT_091d1e78);
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x78) = lVar4;
    thunk_FUN_03f5d7b8();
  }
  uVar1 = System_String__Concat(DAT_092127d8,uVar1,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar1,0);
  local_68 = DAT_09189ea8;
  lVar4 = *(long *)(param_1 + 0x40);
  uStack_60 = 0xffffffffffffffff;
  local_58 = 2;
  uVar1 = System_Enum__ToString(&local_68,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
  uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
  lVar4 = thunk_FUN_03f9944c(DAT_0918e1a8);
  *(undefined4 *)(lVar4 + 0x14) = 99;
  System_Object___ctor(lVar4,0);
  UnityEngine_JsonUtility__FromJsonOverwrite(uVar1,lVar4,0);
  *(long *)(param_1 + 0x80) = lVar4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x80),lVar4);
  uVar1 = System_String__Concat(DAT_092127e8,uVar1,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar1,0);
  local_68 = DAT_09189ea8;
  lVar4 = *(long *)(param_1 + 0x40);
  uStack_60 = 0xffffffffffffffff;
  local_58 = 3;
  uVar1 = System_Enum__ToString(&local_68,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
  uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
  lVar4 = FUN_04bdd51c(uVar1,DAT_091d1e60);
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x88) = lVar4;
    thunk_FUN_03f5d7b8();
  }
  uVar1 = System_String__Concat(DAT_092127c0,uVar1,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(uVar1,0);
  local_68 = DAT_09189ea8;
  lVar4 = *(long *)(param_1 + 0x40);
  uStack_60 = 0xffffffffffffffff;
  local_58 = 5;
  uVar1 = System_Enum__ToString(&local_68,0);
  if (lVar4 != 0) {
    uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
    uVar2 = System_String__IsNullOrWhiteSpace(uVar1,0);
    if ((((uVar2 & 1) == 0) && (lVar4 = FUN_04bdd51c(uVar1,DAT_091d1d90), lVar4 != 0)) &&
       (*(long *)(lVar4 + 0x18) != 0)) {
      *(long *)(param_1 + 0xe8) = lVar4;
      thunk_FUN_03f5d7b8();
    }
    uVar1 = System_String__Concat(DAT_092127c8,uVar1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(uVar1,0);
    IapAdsSystem_AdsManager__ResolveCampaignProfile(param_1);
    local_68 = DAT_09189ea8;
    lVar4 = *(long *)(param_1 + 0x40);
    uStack_60 = 0xffffffffffffffff;
    local_58 = 0xb;
    uVar1 = System_Enum__ToString(&local_68,0);
    if (lVar4 != 0) {
      uVar1 = IapAdsSystem_RemoteConfigManager__GetString(lVar4,uVar1,0);
      lVar4 = FUN_04bdd51c(uVar1,DAT_091d1db8);
      if (lVar4 != 0) {
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(long *)(*(long *)(param_1 + 0x48) + 0x20) = lVar4;
        thunk_FUN_03f5d7b8();
      }
      uVar1 = System_String__Concat(DAT_092127f0,uVar1,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(uVar1,0);
      if (*(char *)(param_1 + 0xcd) == '\0') {
        uVar1 = IapAdsSystem_AdsManager__IESetUpSdk(param_1);
        UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar1,0);
      }
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
      fVar5 = (float)IapAdsSystem_AdsManager__GetInterCappingSeconds(param_1);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_TimeSpan__FromSeconds((double)fVar5,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar1 = System_DateTime__op_Addition(uVar1,uVar3,0);
      *(undefined8 *)(param_1 + 0x98) = uVar1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar1,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar1,uVar1);
}

