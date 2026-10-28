// rea decompile_all
// name: CakeOrder.Home.UIHomeNavControl$$ApplyTabWeights
// address: 0x43014ec
// body: available
// range: 0x43014ec-0x43016f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4301658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43016f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeNavControl__ApplyTabWeights(float param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_0951754c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c420);
    DAT_0951754c = 1;
  }
  lVar6 = *(long *)(param_2 + 0xc0);
  if (lVar6 != 0) {
    uVar5 = *(ulong *)(lVar6 + 0x18);
    uVar4 = (uint)uVar5;
    if ((int)uVar4 < 1) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.0;
      lVar3 = *(long *)(param_2 + 200);
      uVar2 = 0;
      do {
        if (lVar3 == 0) goto LAB_04301658;
        if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_043016f0;
        lVar7 = *(long *)(param_2 + 0xd0);
        if (lVar7 == 0) goto LAB_04301658;
        if ((*(uint *)(lVar7 + 0x18) <= uVar2) || ((uVar5 & 0xffffffff) == uVar2))
        goto LAB_043016f0;
        fVar8 = *(float *)(lVar3 + 0x20 + uVar2 * 4);
        fVar8 = fVar8 + (*(float *)(lVar7 + uVar2 * 4 + 0x20) - fVar8) * param_1;
        *(float *)(lVar6 + 0x20 + uVar2 * 4) = fVar8;
        uVar2 = uVar2 + 1;
        fVar9 = fVar9 + fVar8;
      } while ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar2);
    }
    if (fVar9 <= 0.0) {
      return;
    }
    lVar6 = *(long *)(param_2 + 0xb8);
    if (lVar6 != 0) {
      lVar3 = 0;
      fVar8 = 0.0;
      do {
        uVar4 = (uint)lVar3;
        if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar4) {
          lVar6 = *(long *)(param_2 + 0x48);
          if (lVar6 != 0) {
            if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
              return;
            }
            uVar5 = 0;
            uVar2 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
            while (uVar5 < uVar2) {
              plVar1 = *(long **)(lVar6 + 0x20 + uVar5 * 8);
              if (plVar1 != (long *)0x0) {
                if ((*(byte *)(DAT_0918c420 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918c420 + 0x130) * 8
                             + -8) == DAT_0918c420)) {
                  CakeOrder_Home_UIItemNavHomeTab__SyncBaseFrameWidth(plVar1,0);
                }
              }
              uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
              uVar5 = uVar5 + 1;
              if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) {
                return;
              }
            }
LAB_043016f0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          break;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_043016f0;
        lVar7 = *(long *)(param_2 + 0xc0);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_043016f0;
        lVar6 = *(long *)(lVar6 + lVar3 * 8 + 0x20);
        if (lVar6 == 0) break;
        fVar10 = fVar8 + *(float *)(lVar7 + lVar3 * 4 + 0x20);
        UnityEngine_RectTransform__get_anchorMin(lVar6,0);
        UnityEngine_RectTransform__set_anchorMin(fVar8 / fVar9,lVar6,0);
        UnityEngine_RectTransform__get_anchorMax(lVar6,0);
        UnityEngine_RectTransform__set_anchorMax(fVar10 / fVar9,lVar6,0);
        lVar6 = *(long *)(param_2 + 0xb8);
        lVar3 = lVar3 + 1;
        fVar8 = fVar10;
      } while (lVar6 != 0);
    }
  }
LAB_04301658:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

