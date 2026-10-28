// rea decompile_all
// name: Lean.Touch.LeanFinger$$GetSmoothScreenPosition
// address: 0x7352658
// body: available
// range: 0x7352658-0x73527cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73527cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanFinger__GetSmoothScreenPosition(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_09520784 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae200);
    FUN_03f5c2a4(&DAT_091ae208);
    DAT_09520784 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if ((iVar1 < 1) || (*(char *)(param_1 + 0x18) == '\0')) {
      return;
    }
    if (iVar1 < 5) {
      iVar1 = 4;
    }
    lVar3 = FUN_057e0998(lVar3,iVar1 + -4,DAT_091ae208);
    if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0)) {
      uVar5 = *(undefined4 *)(lVar3 + 0x14);
      uVar6 = *(undefined4 *)(lVar3 + 0x18);
      uVar2 = *(int *)(lVar4 + 0x18) - 3;
      lVar3 = FUN_057e0998(lVar4,uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),DAT_091ae208);
      if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0)) {
        uVar7 = *(undefined4 *)(lVar3 + 0x14);
        uVar8 = *(undefined4 *)(lVar3 + 0x18);
        uVar2 = *(int *)(lVar4 + 0x18) - 2;
        lVar3 = FUN_057e0998(lVar4,uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),DAT_091ae208);
        if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0)) {
          uVar9 = *(undefined4 *)(lVar3 + 0x14);
          uVar10 = *(undefined4 *)(lVar3 + 0x18);
          uVar2 = *(int *)(lVar4 + 0x18) - 1;
          lVar3 = FUN_057e0998(lVar4,uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),DAT_091ae208);
          if (lVar3 != 0) {
            Lean_Common_LeanCommon__Hermite
                      (uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,*(undefined4 *)(lVar3 + 0x14),
                       *(undefined4 *)(lVar3 + 0x18),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

