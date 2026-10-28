// rea decompile_all
// name: IapAdsSystem.OfflineNotification.<Start>d__16$$MoveNext
// address: 0x73250fc
// body: available
// range: 0x73250fc-0x73252f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73252f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_OfflineNotification_<Start>d__16__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_095205cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091811a8);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ba0);
    FUN_03f5c2a4(&DAT_0918ce90);
    FUN_03f5c2a4(&DAT_0921fff0);
    FUN_03f5c2a4(&DAT_09213f88);
    DAT_095205cd = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    UnityEngine_PlayerPrefs__DeleteKey(DAT_0921fff0,0);
    if (lVar5 == 0) {
LAB_073252f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar5 + 0x28) = 1;
    IapAdsSystem_OfflineNotification__ResetSchedule(lVar5,0);
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Application__get_isEditor(0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_09188ba0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = IapAdsSystem_OfflineNotification__GetSdkInt(0);
      if (0x17 < iVar1) {
        lVar3 = thunk_FUN_03f9944c(DAT_091811a8);
        IapAdsSystem_AndroidNotifications___ctor();
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0x30);
          *plVar6 = lVar3;
          thunk_FUN_03f5d7b8(plVar6,lVar3);
          if (*plVar6 != 0) {
            IapAdsSystem_AndroidNotifications__RequestPermission();
            uVar4 = thunk_FUN_03f9944c(DAT_0918ce90);
            UnityEngine_WaitForSeconds___ctor(0x3f800000,uVar4,0);
            *(undefined8 *)(param_1 + 0x18) = uVar4;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar4);
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
        goto LAB_073252f4;
      }
    }
    else {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(DAT_09213f88,0);
    }
  }
  else if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}

