// rea decompile_all
// name: Utilities.UIImageFadeCycling.<CycleImages>d__11$$MoveNext
// address: 0x452a354
// body: available
// range: 0x452a354-0x452a5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452a5ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452a5f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UIImageFadeCycling_<CycleImages>d__11__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_09518613 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09518613 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = 0;
  if (iVar1 < 3) {
    if (iVar1 - 1U < 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar7 == 0) goto LAB_0452a5ec;
      if (*(char *)(lVar7 + 0x49) == '\0') {
        Utilities_GraphicExtension__SetA(0,*(undefined8 *)(lVar7 + 0x38),0);
        uVar5 = Utilities_UIImageFadeCycling__FadeOut(lVar7,*(undefined8 *)(lVar7 + 0x40));
        uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(lVar7,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8(param_1 + 0x18,uVar5);
        uVar8 = 4;
      }
      else {
        Utilities_GraphicExtension__SetA(0x3f800000,*(undefined8 *)(lVar7 + 0x38),0);
        uVar5 = Utilities_UIImageFadeCycling__FadeOut(lVar7,*(undefined8 *)(lVar7 + 0x40));
        uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(lVar7,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8(param_1 + 0x18,uVar5);
        uVar8 = 3;
      }
      goto LAB_0452a5d4;
    }
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_0452a5ec;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar7 == 0) goto LAB_0452a5ec;
        uVar5 = Utilities_UIImageFadeCycling__FadeIn(lVar7,*(undefined8 *)(lVar7 + 0x38));
        uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(lVar7,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8();
        uVar8 = 5;
        goto LAB_0452a5d4;
      }
      if (iVar1 != 5) {
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) {
LAB_0452a5ec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar7 + 0x50);
    lVar6 = *(long *)(lVar7 + 0x30);
    *(int *)(lVar7 + 0x50) = iVar1 + 1;
    if (lVar6 == 0) goto LAB_0452a5ec;
    uVar2 = *(uint *)(lVar6 + 0x18);
    iVar1 = iVar1 + 2;
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = iVar1 / (int)uVar2;
    }
    uVar3 = iVar1 - iVar4 * uVar2;
    if (uVar2 <= uVar3) {
LAB_0452a5f0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558(uVar5);
    }
    if (*(long *)(lVar7 + 0x38) == 0) goto LAB_0452a5ec;
    uVar5 = UnityEngine_UI_Image__set_sprite
                      (*(long *)(lVar7 + 0x38),*(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20),
                       0);
    lVar6 = *(long *)(lVar7 + 0x30);
    if (lVar6 == 0) goto LAB_0452a5ec;
    uVar2 = *(uint *)(lVar6 + 0x18);
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = *(int *)(lVar7 + 0x50) / (int)uVar2;
    }
    uVar3 = *(int *)(lVar7 + 0x50) - iVar1 * uVar2;
    if (uVar2 <= uVar3) goto LAB_0452a5f0;
    if (*(long *)(lVar7 + 0x40) == 0) goto LAB_0452a5ec;
    UnityEngine_UI_Image__set_sprite
              (*(long *)(lVar7 + 0x40),*(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20),0);
    Utilities_GraphicExtension__SetA(0,*(undefined8 *)(lVar7 + 0x38),0);
    Utilities_GraphicExtension__SetA(0x3f800000,*(undefined8 *)(lVar7 + 0x40),0);
  }
  uVar8 = *(undefined4 *)(lVar7 + 0x28);
  if (*(char *)(lVar7 + 0x48) == '\0') {
    uVar5 = thunk_FUN_03f9944c(DAT_0918ce98);
    UnityEngine_WaitForSecondsRealtime___ctor(uVar8,uVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 0x18,uVar5);
    uVar8 = 2;
  }
  else {
    uVar5 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor(uVar8,uVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 0x18,uVar5);
    uVar8 = 1;
  }
LAB_0452a5d4:
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  return 1;
}

