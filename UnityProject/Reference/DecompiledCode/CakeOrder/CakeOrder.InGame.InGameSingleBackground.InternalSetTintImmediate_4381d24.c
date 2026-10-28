// rea decompile_all
// name: CakeOrder.InGame.InGameSingleBackground$$InternalSetTintImmediate
// address: 0x4381d24
// body: available
// range: 0x4381d24-0x4381e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4381e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381e60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameSingleBackground__InternalSetTintImmediate(long param_1)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  if ((DAT_09517977 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517977 = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x70),0,0);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  fVar1 = 0.0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    fVar1 = *(float *)(param_1 + 0x5c);
  }
  if (lVar3 != 0) {
    fVar9 = *(float *)(param_1 + 0x58);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_04381e60;
      uVar5 = *(undefined8 *)(lVar3 + uVar6 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_04381e60:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(param_1 + 0x68);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04381e60;
        lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x20);
        if (lVar3 == 0) break;
        lVar4 = lVar4 + uVar6 * 0x10;
        uVar8 = *(undefined8 *)(lVar4 + 0x28);
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        fVar7 = (float)((ulong)uVar10 >> 0x20) * (float)((ulong)uVar5 >> 0x20);
        UnityEngine_SpriteRenderer__set_color
                  (CONCAT44(fVar7,(float)uVar10 * (float)uVar5),fVar7,fVar9 * (float)uVar8,
                   fVar1 * (float)((ulong)uVar8 >> 0x20),lVar3,0);
      }
      lVar3 = *(long *)(param_1 + 0x20);
      uVar6 = uVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

