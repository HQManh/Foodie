// rea decompile_all
// name: _GAME.GameUI.CloneItemDropCtrl$$ClearCloneObjects
// address: 0x774a894
// body: available
// range: 0x774a894-0x774a9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774a9d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_CloneItemDropCtrl__ClearCloneObjects(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09522b66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522b66 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
LAB_0774a9d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x60),0);
    if (-1 < iVar1 + -1) {
      do {
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0774a9d0;
        iVar1 = iVar1 + -1;
        lVar3 = UnityEngine_Transform__GetChild(*(long *)(param_1 + 0x60),iVar1,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
        if ((uVar2 & 1) == 0) {
          if ((lVar3 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar3,0), lVar4 == 0))
          goto LAB_0774a9d0;
          UnityEngine_GameObject__SetActive(lVar4,0,0);
          UnityEngine_Transform__SetParent(lVar3,0,1,0);
          uVar5 = UnityEngine_Component__get_gameObject(lVar3,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          UnityEngine_Object__Destroy(uVar5,0);
        }
      } while (0 < iVar1);
    }
  }
  return;
}

