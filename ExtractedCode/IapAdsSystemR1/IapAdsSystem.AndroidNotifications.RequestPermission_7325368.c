// rea decompile_all
// name: IapAdsSystem.AndroidNotifications$$RequestPermission
// address: 0x7325368
// body: available
// range: 0x7325368-0x7325507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7325504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AndroidNotifications__RequestPermission(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_095205ce & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091bfc00);
    FUN_03f5c2a4(&DAT_09189030);
    FUN_03f5c2a4(&DAT_091e1c18);
    FUN_03f5c2a4(&DAT_0918e3b8);
    FUN_03f5c2a4(&DAT_09217618);
    DAT_095205ce = 1;
  }
  uVar1 = UnityEngine_Android_Permission__HasUserAuthorizedPermission(DAT_09217618,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_09189030);
    UnityEngine_Android_PermissionCallbacks___ctor(lVar2,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar3,param_1,DAT_091bfc00,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(lVar2,uVar3,0);
    if (*(int *)(DAT_0918e3b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_0918e3b8 + 0xb8);
    lVar6 = puVar5[1];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918e3b8 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar5 = *(undefined8 **)(DAT_0918e3b8 + 0xb8);
      }
      uVar3 = *puVar5;
      lVar6 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(lVar6,uVar3,DAT_091e1c18,0);
      plVar4 = (long *)(*(long *)(DAT_0918e3b8 + 0xb8) + 8);
      *plVar4 = lVar6;
      thunk_FUN_03f5d7b8(plVar4,lVar6);
    }
    UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(lVar2,lVar6,0);
    UnityEngine_Android_Permission__RequestUserPermission(DAT_09217618,lVar2,0);
  }
  else {
    IapAdsSystem_AndroidNotifications__RegisterChannel(param_1);
  }
  return;
}

