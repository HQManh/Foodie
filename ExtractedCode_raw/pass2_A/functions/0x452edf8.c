// rea decompile_all
// name: Utilities.UIScrollSnap$$Remove
// address: 0x452edf8
// body: available
// range: 0x452edf8-0x452f05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452ef70 to 0x85f71fc UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452f034 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452f054 to 0x452ce04 Utilities.UIScrollSnap$$Setup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x452f058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452f05c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__Remove(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int local_24;
  
  if ((DAT_0951862e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fa620);
    FUN_03f5c2a4(&DAT_091fa640);
    FUN_03f5c2a4(&DAT_091fa628);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_0951862e = 1;
  }
  local_24 = 0;
  iVar2 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
  if (iVar2 == 0) {
    uVar4 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(DAT_091fa640,uVar4,0);
    return;
  }
  if (((int)param_2 < 0) ||
     (iVar2 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1), iVar2 + -1 < (int)param_2)) {
    local_24 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
    local_24 = local_24 + -1;
    uVar4 = System_Int32__ToString(&local_24,0);
    uVar4 = System_String__Concat(DAT_091fa628,uVar4,DAT_091f8f68,0);
    uVar5 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar4,uVar5,0);
    return;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_091fa620,0);
    return;
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar8 = *(long *)(lVar8 + (ulong)param_2 * 8 + 0x20);
    if (lVar8 != 0) {
      uVar4 = UnityEngine_Component__get_gameObject(lVar8,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__DestroyImmediate(uVar4,0);
      uVar6 = Utilities_UIScrollSnap__CheckIsConfigValid(param_1);
      if ((uVar6 & 1) == 0) {
        return;
      }
      uVar7 = *(uint *)(param_1 + 0x104);
      if (uVar7 == param_2) {
        uVar3 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
        uVar7 = *(uint *)(param_1 + 0x104);
        bVar1 = uVar3 == param_2;
      }
      else {
        bVar1 = (int)param_2 <= (int)uVar7;
      }
      *(uint *)(param_1 + 0x54) = uVar7 - bVar1;
      Utilities_UIScrollSnap__Setup(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

