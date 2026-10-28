// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$CheckScreenCutout
// address: 0x733bbb4
// body: available
// range: 0x733bbb4-0x733bd5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733bd54 to 0x866b2cc UnityEngine.RectTransform$$set_sizeDelta (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x733bd58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__CheckScreenCutout
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  if ((DAT_09520668 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09520668 = 1;
  }
  if (*(char *)(param_5 + 0x70) == '\0') {
    return;
  }
  iVar1 = UnityEngine_Screen__get_height(0);
  UnityEngine_Screen__get_safeArea(0);
  fVar5 = param_4;
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((float)(iVar1 + -1) <= param_4 + param_2) {
    lVar3 = *(long *)(param_5 + 0x108);
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    if (lVar3 != 0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],
                 lVar3,0);
      lVar3 = *(long *)(param_5 + 0x108);
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      if (lVar3 != 0) {
        uVar4 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
        fVar5 = (float)(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
LAB_0733bd40:
        UnityEngine_RectTransform__set_sizeDelta(uVar4,fVar5,lVar3,0);
        return;
      }
    }
  }
  else {
    iVar2 = UnityEngine_Screen__get_height(0);
    if (*(long *)(param_5 + 0x110) != 0) {
      UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x110),0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_5 + 0x108) != 0) {
        fVar5 = (-((float)iVar1 - (param_4 + param_2)) / (float)iVar2) * fVar5;
        UnityEngine_RectTransform__set_anchoredPosition(0,fVar5,*(long *)(param_5 + 0x108),0);
        lVar3 = *(long *)(param_5 + 0x108);
        if (lVar3 != 0) {
          uVar4 = 0;
          goto LAB_0733bd40;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

