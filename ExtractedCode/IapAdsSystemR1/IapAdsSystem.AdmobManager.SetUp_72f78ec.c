// rea decompile_all
// name: IapAdsSystem.AdmobManager$$SetUp
// address: 0x72f78ec
// body: available
// range: 0x72f78ec-0x72f7c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72f7c78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdmobManager__SetUp
               (long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_58;
  
  if ((DAT_09520424 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09180fd0);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d1e58);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_09189ea8);
    FUN_03f5c2a4(&DAT_091e17e8);
    FUN_03f5c2a4(&DAT_0918e180);
    FUN_03f5c2a4(&DAT_091fb608);
    FUN_03f5c2a4(&DAT_091fb610);
    FUN_03f5c2a4(&DAT_091fb618);
    DAT_09520424 = 1;
  }
  local_58 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918e180);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
    plVar6 = (long *)(lVar3 + 0x20);
    *plVar6 = param_4;
    *(undefined4 *)(lVar3 + 0x18) = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_4);
    uVar1 = *(undefined4 *)(lVar3 + 0x18);
    *(undefined8 *)(param_1 + 0x90) = param_3;
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),param_3);
    local_68 = 0;
    if (*(int *)(lVar3 + 0x18) != 0) {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = UnityEngine_Application__get_platform(0);
      if (iVar2 == 8) {
        local_68 = 2;
        *(undefined4 *)(lVar3 + 0x18) = 2;
      }
      else {
        local_68 = *(undefined4 *)(lVar3 + 0x18);
      }
    }
    local_78 = DAT_09180fd0;
    uStack_70 = 0xffffffffffffffff;
    uVar4 = System_Enum__ToString(&local_78,0);
    uVar4 = System_String__Concat(DAT_091fb618,uVar4,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar4,0);
    if (*(int *)(lVar3 + 0x18) == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_091fb610,0);
      lVar3 = *plVar6;
      if (lVar3 == 0) {
        return;
      }
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    local_78 = DAT_09189ea8;
    lVar5 = **(long **)(lVar5 + 0xb8);
    uStack_70 = 0xffffffffffffffff;
    local_68 = 9;
    uVar4 = System_Enum__ToString(&local_78,0);
    if (lVar5 != 0) {
      uVar4 = IapAdsSystem_RemoteConfigManager__GetString(lVar5,uVar4,0);
      lVar5 = FUN_04bdd51c(uVar4,DAT_091d1e58);
      if (lVar5 != 0) {
        *(long *)(param_1 + 0x20) = lVar5;
        thunk_FUN_03f5d7b8();
        uVar4 = System_String__Concat(DAT_091fb608,uVar4,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__Log(uVar4,0);
      }
      if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(*(long *)(param_1 + 0x30) + 0x20) != 0)) {
        iVar2 = IapAdsSystem_ConsentConfig__GetMode();
        if (iVar2 == 2) {
          lVar5 = *(long *)(param_1 + 0x30);
          uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar4,lVar3,DAT_091e17e8,0);
          if (lVar5 == 0) goto LAB_072f7c78;
          IapAdsSystem_GoogleMobileAdsConsentController__GatherConsent(lVar5,uVar4);
        }
        else {
          IapAdsSystem_AdmobManager__InitializeGoogleMobileAds
                    (param_1,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20));
        }
        return;
      }
    }
  }
LAB_072f7c78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

