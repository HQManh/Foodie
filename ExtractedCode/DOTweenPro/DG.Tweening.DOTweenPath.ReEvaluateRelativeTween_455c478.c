// rea decompile_all
// name: DG.Tweening.DOTweenPath$$ReEvaluateRelativeTween
// address: 0x455c478
// body: available
// range: 0x455c478-0x455c5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455c5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455c5e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenPath__ReEvaluateRelativeTween
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar2 != 0) {
    fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
    fVar9 = fVar6 - *(float *)(param_4 + 0x134);
    fVar7 = param_2 - (float)*(undefined8 *)(param_4 + 0x138);
    fVar8 = param_3 - (float)((ulong)*(undefined8 *)(param_4 + 0x138) >> 0x20);
    if (fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7 < 9.9999994e-11) {
      return;
    }
    lVar2 = *(long *)(param_4 + 0x100);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
      uVar4 = *(ulong *)(*(long *)(lVar2 + 0x18) + 0x18);
      if (0 < (int)uVar4) {
        uVar3 = 0;
        lVar2 = 0x20;
        do {
          if ((*(long *)(param_4 + 0x100) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_4 + 0x100) + 0x18), lVar5 == 0)) goto LAB_0455c5dc;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0455c5e0;
          puVar1 = (undefined8 *)(lVar5 + lVar2);
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 0xc;
          *puVar1 = CONCAT44(fVar7 + (float)((ulong)*puVar1 >> 0x20),fVar9 + (float)*puVar1);
          *(float *)(puVar1 + 1) = fVar8 + *(float *)(puVar1 + 1);
        } while ((uVar4 & 0xffffffff) != uVar3);
        lVar2 = *(long *)(param_4 + 0x100);
        if (lVar2 == 0) goto LAB_0455c5dc;
      }
      if (*(long *)(lVar2 + 0x30) != 0) {
        uVar4 = *(ulong *)(*(long *)(lVar2 + 0x30) + 0x18);
        if (0 < (int)uVar4) {
          auVar10 = NEON_ext(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),4,1);
          uVar3 = 0;
          lVar2 = 0x20;
          auVar11._4_4_ = fVar8;
          auVar11._0_4_ = fVar7;
          auVar11._8_8_ = 0;
          auVar11 = NEON_ext(auVar10,auVar11,0xc,1);
          do {
            if ((*(long *)(param_4 + 0x100) == 0) ||
               (lVar5 = *(long *)(*(long *)(param_4 + 0x100) + 0x30), lVar5 == 0))
            goto LAB_0455c5dc;
            if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_0455c5e0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            puVar1 = (undefined8 *)(lVar5 + lVar2);
            uVar3 = uVar3 + 1;
            lVar2 = lVar2 + 0x18;
            puVar1[1] = CONCAT44(auVar11._0_4_ + (float)((ulong)puVar1[1] >> 0x20),
                                 auVar11._8_4_ + (float)puVar1[1]);
            *puVar1 = CONCAT44(auVar11._4_4_ + (float)((ulong)*puVar1 >> 0x20),
                               auVar11._0_4_ + (float)*puVar1);
            puVar1[2] = CONCAT44(fVar8 + (float)((ulong)puVar1[2] >> 0x20),fVar7 + (float)puVar1[2])
            ;
          } while ((uVar4 & 0xffffffff) != uVar3);
        }
        *(float *)(param_4 + 0x134) = fVar6;
        *(float *)(param_4 + 0x138) = param_2;
        *(float *)(param_4 + 0x13c) = param_3;
        return;
      }
    }
  }
LAB_0455c5dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

