// rea decompile_all
// name: Utilities.UIScrollSnap$$Add
// address: 0x452ebc8
// body: available
// range: 0x452ebc8-0x452edc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452edc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_UIScrollSnap__Add(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_24;
  
  if ((DAT_0951862d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d4d58);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fa618);
    FUN_03f5c2a4(&DAT_091fa628);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_0951862d = 1;
  }
  local_24 = 0;
  iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
  if ((iVar1 == 0) ||
     ((-1 < param_3 &&
      (iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1), param_3 <= iVar1)))) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      lVar4 = Utilities_UIScrollSnap__get_ScrollRect(param_1);
      if (lVar4 != 0) {
        uVar2 = *(undefined8 *)(lVar4 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar4 = FUN_04c353a8(param_2,uVar2,0,DAT_091d4d58);
        if ((lVar4 != 0) && (lVar5 = UnityEngine_GameObject__get_transform(lVar4,0), lVar5 != 0)) {
          UnityEngine_Transform__SetSiblingIndex(lVar5,param_3,0);
          uVar6 = Utilities_UIScrollSnap__CheckIsConfigValid(param_1);
          if ((uVar6 & 1) == 0) {
            return lVar4;
          }
          iVar1 = *(int *)(param_1 + 0x104);
          if (param_3 < iVar1) {
            iVar1 = iVar1 + 1;
          }
          *(int *)(param_1 + 0x54) = iVar1;
          Utilities_UIScrollSnap__Setup(param_1);
          return lVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_091fa618,0);
  }
  else {
    local_24 = Utilities_UIScrollSnap__get_NumberOfPanels(param_1);
    uVar2 = System_Int32__ToString(&local_24,0);
    uVar2 = System_String__Concat(DAT_091fa628,uVar2,DAT_091f8f68,0);
    uVar3 = UnityEngine_Component__get_gameObject(param_1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogError(uVar2,uVar3,0);
  }
  return 0;
}

