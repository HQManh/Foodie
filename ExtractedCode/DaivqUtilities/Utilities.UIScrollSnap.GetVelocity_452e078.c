// rea decompile_all
// name: Utilities.UIScrollSnap$$GetVelocity
// address: 0x452e078
// body: available
// range: 0x452e078-0x452e0ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452e0fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__GetVelocity(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  lVar2 = Utilities_UIScrollSnap__get_ScrollRect();
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    fVar3 = (float)UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar2 + 0x20),0);
    uVar8 = *(undefined8 *)(param_3 + 0xa8);
    fVar6 = (float)uVar8;
    uVar1 = (ulong)uVar8 >> 0x20;
    if (*(char *)(param_3 + 0x8d) == '\0') {
      fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
      uVar7 = (undefined4)uVar8;
    }
    else {
      fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      uVar7 = (undefined4)uVar8;
    }
    *(ulong *)(param_3 + 0xb0) = CONCAT44((param_2 - (float)uVar1) / fVar4,(fVar3 - fVar6) / fVar4);
    lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_3);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
      uVar5 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar2 + 0x20),0);
      *(undefined4 *)(param_3 + 0xa8) = uVar5;
      *(undefined4 *)(param_3 + 0xac) = uVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

