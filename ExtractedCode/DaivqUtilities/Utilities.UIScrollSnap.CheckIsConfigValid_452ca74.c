// rea decompile_all
// name: Utilities.UIScrollSnap$$CheckIsConfigValid
// address: 0x452ca74
// body: available
// range: 0x452ca74-0x452cd07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452cd00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452cd04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UIScrollSnap__CheckIsConfigValid(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_28;
  int iStack_24;
  
  if ((DAT_09518625 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091fa638);
    FUN_03f5c2a4(&DAT_091f5fd8);
    FUN_03f5c2a4(&DAT_091fa630);
    FUN_03f5c2a4(&DAT_091f6030);
    DAT_09518625 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  local_28 = 0;
  iStack_24 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (lVar4 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x70),0), lVar4 == 0)) {
LAB_0452cd00:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = UnityEngine_Transform__get_childCount(lVar4,0);
    iStack_24 = iVar1;
    iVar2 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
    if (iVar1 != iVar2) {
      lVar4 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar4 == 0) goto LAB_0452cd00;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0452cd04:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar4 + 0x20) = DAT_091fa638;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x20));
      uVar6 = System_Int32__ToString(&iStack_24,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_0452cd04;
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28),uVar6);
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_0452cd04;
      *(undefined8 *)(lVar4 + 0x30) = DAT_091f6030;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30));
      local_28 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
      uVar6 = System_Int32__ToString(&local_28,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) == 0) goto LAB_0452cd04;
      *(undefined8 *)(lVar4 + 0x38) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar6);
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_0452cd04;
      *(undefined8 *)(lVar4 + 0x40) = DAT_091f5fd8;
      thunk_FUN_03f5d7b8();
      uVar6 = System_String__Concat(lVar4,0);
      uVar5 = UnityEngine_Component__get_gameObject(param_1,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar6,uVar5,0);
      uVar6 = 0;
      goto LAB_0452cc9c;
    }
  }
  uVar6 = 1;
LAB_0452cc9c:
  if (*(float *)(param_1 + 0x80) < 0.0) {
    uVar6 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(DAT_091fa630,uVar6,0);
    uVar6 = 0;
  }
  return uVar6;
}

