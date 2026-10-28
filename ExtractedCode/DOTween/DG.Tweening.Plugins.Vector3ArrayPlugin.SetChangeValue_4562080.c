// rea decompile_all
// name: DG.Tweening.Plugins.Vector3ArrayPlugin$$SetChangeValue
// address: 0x4562080
// body: available
// range: 0x4562080-0x456217f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4562178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456217c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector3ArrayPlugin__SetChangeValue(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_0951883b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_0951883b = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x130) != 0)) {
    uVar8 = *(ulong *)(*(long *)(param_2 + 0x130) + 0x18);
    uVar2 = FUN_03f5c394(DAT_091807f8,uVar8 & 0xffffffff);
    *(undefined8 *)(param_2 + 0x138) = uVar2;
    thunk_FUN_03f5d7b8(param_2 + 0x138,uVar2);
    if (0 < (int)uVar8) {
      uVar3 = 0;
      lVar4 = 0x20;
      do {
        lVar5 = *(long *)(param_2 + 0x130);
        if (lVar5 == 0) goto LAB_04562178;
        if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_0456217c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(param_2 + 0x128);
        if (lVar6 == 0) goto LAB_04562178;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0456217c;
        lVar7 = *(long *)(param_2 + 0x138);
        if (lVar7 == 0) goto LAB_04562178;
        if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0456217c;
        uVar3 = uVar3 + 1;
        uVar2 = *(undefined8 *)(lVar5 + lVar4);
        uVar9 = *(undefined8 *)(lVar6 + lVar4);
        fVar10 = *(float *)((undefined8 *)(lVar5 + lVar4) + 1);
        fVar11 = *(float *)((undefined8 *)(lVar6 + lVar4) + 1);
        puVar1 = (undefined8 *)(lVar7 + lVar4);
        lVar4 = lVar4 + 0xc;
        *puVar1 = CONCAT44((float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
                           (float)uVar2 - (float)uVar9);
        *(float *)(puVar1 + 1) = fVar10 - fVar11;
      } while ((uVar8 & 0xffffffff) != uVar3);
    }
    return;
  }
LAB_04562178:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

