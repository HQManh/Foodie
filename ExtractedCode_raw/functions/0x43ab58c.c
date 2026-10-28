// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimple$$LateUpdate
// address: 0x43ab58c
// body: available
// range: 0x43ab58c-0x43ab857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ab854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimple__LateUpdate(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 local_a0 [64];
  
  if ((DAT_09517ae5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188408);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517ae5 = 1;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 4;
    ChocDino_UIFX_MotionBlurSimple__ForceMeshModify(param_1);
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    uVar11 = *(undefined8 *)(param_1 + 0x78);
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar2 == 0) goto LAB_043ab854;
    UnityEngine_Transform__get_localToWorldMatrix(local_a0,lVar2,0);
    fVar4 = (float)uVar14 - (float)local_a0._0_8_;
    fVar5 = (float)((ulong)uVar14 >> 0x20) - SUB84(local_a0._0_8_,4);
    fVar6 = (float)uVar13 - (float)local_a0._8_8_;
    fVar7 = (float)((ulong)uVar13 >> 0x20) - SUB84(local_a0._8_8_,4);
    if ((((9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) ||
         (fVar4 = (float)uVar12 - (float)local_a0._16_8_,
         fVar5 = (float)((ulong)uVar12 >> 0x20) - SUB84(local_a0._16_8_,4),
         fVar6 = (float)uVar11 - (float)local_a0._24_8_,
         fVar7 = (float)((ulong)uVar11 >> 0x20) - SUB84(local_a0._24_8_,4),
         9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5)) ||
        (fVar4 = (float)uVar10 - (float)local_a0._32_8_,
        fVar5 = (float)((ulong)uVar10 >> 0x20) - SUB84(local_a0._32_8_,4),
        fVar6 = (float)uVar9 - (float)local_a0._40_8_,
        fVar7 = (float)((ulong)uVar9 >> 0x20) - SUB84(local_a0._40_8_,4),
        9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5)) ||
       (fVar4 = (float)uVar8 - (float)local_a0._48_8_,
       fVar5 = (float)((ulong)uVar8 >> 0x20) - SUB84(local_a0._48_8_,4),
       fVar6 = (float)uVar3 - (float)local_a0._56_8_,
       fVar7 = (float)((ulong)uVar3 >> 0x20) - SUB84(local_a0._56_8_,4),
       9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5))
    goto LAB_043ab820;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0xa0);
    uVar13 = *(undefined8 *)(param_1 + 0xa8);
    uVar12 = *(undefined8 *)(param_1 + 0xb0);
    uVar11 = *(undefined8 *)(param_1 + 0xb8);
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    uVar9 = *(undefined8 *)(param_1 + 200);
    uVar8 = *(undefined8 *)(param_1 + 0xd0);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xe0),0);
    if (lVar2 != 0) {
      UnityEngine_Transform__get_worldToLocalMatrix(local_a0,lVar2,0);
      fVar4 = (float)uVar14 - (float)local_a0._0_8_;
      fVar5 = (float)((ulong)uVar14 >> 0x20) - SUB84(local_a0._0_8_,4);
      fVar6 = (float)uVar13 - (float)local_a0._8_8_;
      fVar7 = (float)((ulong)uVar13 >> 0x20) - SUB84(local_a0._8_8_,4);
      if (((fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5 < 9.9999994e-11) &&
          (fVar4 = (float)uVar12 - (float)local_a0._16_8_,
          fVar5 = (float)((ulong)uVar12 >> 0x20) - SUB84(local_a0._16_8_,4),
          fVar6 = (float)uVar11 - (float)local_a0._24_8_,
          fVar7 = (float)((ulong)uVar11 >> 0x20) - SUB84(local_a0._24_8_,4),
          fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5 < 9.9999994e-11)) &&
         ((fVar4 = (float)uVar10 - (float)local_a0._32_8_,
          fVar5 = (float)((ulong)uVar10 >> 0x20) - SUB84(local_a0._32_8_,4),
          fVar6 = (float)uVar9 - (float)local_a0._40_8_,
          fVar7 = (float)((ulong)uVar9 >> 0x20) - SUB84(local_a0._40_8_,4),
          fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5 < 9.9999994e-11 &&
          (fVar4 = (float)uVar8 - (float)local_a0._48_8_,
          fVar5 = (float)((ulong)uVar8 >> 0x20) - SUB84(local_a0._48_8_,4),
          fVar6 = (float)uVar3 - (float)local_a0._56_8_,
          fVar7 = (float)((ulong)uVar3 >> 0x20) - SUB84(local_a0._56_8_,4),
          fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5 < 9.9999994e-11)))) {
        return;
      }
LAB_043ab820:
      *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 1;
      ChocDino_UIFX_MotionBlurSimple__ForceMeshModify(param_1);
      return;
    }
  }
LAB_043ab854:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

