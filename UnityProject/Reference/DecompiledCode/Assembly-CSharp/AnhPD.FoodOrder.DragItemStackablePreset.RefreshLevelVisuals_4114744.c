// rea decompile_all
// name: AnhPD.FoodOrder.DragItemStackablePreset$$RefreshLevelVisuals
// address: 0x4114744
// body: available
// range: 0x4114744-0x411482b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4114814 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4114828 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItemStackablePreset__RefreshLevelVisuals(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  if ((DAT_09516222 & 1) == 0) {
    auVar7 = FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516222 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x128);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = 4;
  do {
    uVar6 = lVar5 - 4;
    if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar6) {
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_04114828:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558(auVar7._0_8_,auVar7._8_8_);
    }
    uVar4 = *(undefined8 *)(lVar3 + lVar5 * 8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar7 = UnityEngine_Object__op_Implicit(uVar4,0);
    uVar2 = auVar7._0_8_;
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x128);
      bVar1 = (long)uVar6 <= (long)(int)*(uint *)(param_1 + 0x134);
      if (*(char *)(param_1 + 0x130) != '\0') {
        bVar1 = uVar6 == *(uint *)(param_1 + 0x134);
      }
      auVar7[8] = bVar1;
      auVar7._0_8_ = uVar2;
      auVar7._9_7_ = 0;
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04114828;
      lVar3 = *(long *)(lVar3 + lVar5 * 8);
      if (lVar3 == 0) break;
      auVar7 = UnityEngine_GameObject__SetActive(lVar3,bVar1,0);
    }
    lVar3 = *(long *)(param_1 + 0x128);
    lVar5 = lVar5 + 1;
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

