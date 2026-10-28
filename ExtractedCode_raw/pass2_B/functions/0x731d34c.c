// rea decompile_all
// name: IapAdsSystem.LastestVersionCheck$$OnRemoteConfigFetched
// address: 0x731d34c
// body: available
// range: 0x731d34c-0x731d6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731d690 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d694 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d69c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d6a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d6a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d6a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731d6ac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_LastestVersionCheck__OnRemoteConfigFetched(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_0952057b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d1ec8);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918cc90);
    FUN_03f5c2a4(&DAT_091fa758);
    FUN_03f5c2a4(&DAT_091fa280);
    FUN_03f5c2a4(&DAT_091fa770);
    FUN_03f5c2a4(&DAT_091f8888);
    FUN_03f5c2a4(&DAT_0921e230);
    DAT_0952057b = 1;
  }
  lVar3 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar3 + 0xb8),DAT_0921e230,0);
  lVar3 = FUN_04bdd51c(uVar4,DAT_091d1ec8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar4 = thunk_FUN_03f9944c(DAT_0918cc90);
  System_Version___ctor(uVar4,uVar7,0);
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Application__get_version(0);
  uVar5 = thunk_FUN_03f9944c(DAT_0918cc90);
  System_Version___ctor(uVar5,uVar7,0);
  iVar1 = *(int *)(lVar3 + 0x10);
  bVar2 = System_Version__op_GreaterThan(uVar4,uVar5,0);
  if ((bVar2 & iVar1 - 1U < 2) == 0) {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Application__get_version(0);
    uVar4 = System_String__Concat(DAT_091fa758,uVar4,DAT_091fa280,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(uVar4,0);
  }
  else {
    lVar6 = FUN_03f5c394(DAT_091805f8,5);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x20) = DAT_091fa770;
    thunk_FUN_03f5d7b8();
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_03f5d7b8();
    if (*(uint *)(lVar6 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x30) = DAT_091f8888;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Application__get_version(0);
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x38) = uVar4;
    thunk_FUN_03f5d7b8();
    if (*(uint *)(lVar6 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x40) = DAT_091fa280;
    thunk_FUN_03f5d7b8();
    uVar4 = System_String__Concat(lVar6,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(uVar4,0);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),iVar1,*(undefined8 *)(lVar3 + 0x28))
      ;
    }
  }
  return;
}

