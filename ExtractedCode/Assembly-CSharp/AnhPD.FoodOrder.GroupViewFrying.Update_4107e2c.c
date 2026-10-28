// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewFrying$$Update
// address: 0x4107e2c
// body: available
// range: 0x4107e2c-0x4107f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4107f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4107f14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewFrying__Update(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x65) != '\0') {
    fVar9 = *(float *)(param_1 + 0x60);
    fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar9 = fVar9 - fVar5;
    *(float *)(param_1 + 0x60) = fVar9;
    if (fVar9 <= 0.0) {
      lVar3 = *(long *)(param_1 + 0x28);
      if (lVar3 == 0) {
LAB_04107f10:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar2 = *(long *)(lVar3 + 0x20 + lVar4 * 8);
          if (lVar2 == 0) goto LAB_04107f10;
          uVar8 = 0x3f078788;
          uVar7 = 0x3f38b8b8;
          uVar6 = 0x3f5edee0;
          if (*(char *)(param_1 + 100) != '\0') {
            uVar6 = 0x3f800000;
            uVar7 = 0x3f800000;
            uVar8 = 0x3f800000;
          }
          UnityEngine_SpriteRenderer__set_color(uVar6,uVar7,uVar8,0x3f800000,lVar2,0);
          uVar1 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
      *(undefined4 *)(param_1 + 0x60) = 0x3e4ccccd;
      *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) ^ 1;
    }
  }
  return;
}

