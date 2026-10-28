// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelLink.<<ShowElement>g__IEShowLine|11_0>d$$MoveNext
// address: 0x434caa0
// body: available
// range: 0x434caa0-0x434ccb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434ccac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ccb0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_Map_HomeLevelLink_<<ShowElement>g__IEShowLine_11_0>d__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  lVar5 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x40),0), lVar2 == 0))
    goto LAB_0434ccac;
    uVar6 = UnityEngine_Transform__get_position(lVar2,0);
    *(undefined4 *)(param_4 + 0x2c) = uVar6;
    *(undefined4 *)(param_4 + 0x30) = param_2;
    *(undefined4 *)(param_4 + 0x34) = param_3;
    if ((*(long *)(lVar5 + 0x48) == 0) ||
       (lVar2 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x48),0), lVar2 == 0))
    goto LAB_0434ccac;
    uVar6 = UnityEngine_Transform__get_position(lVar2,0);
    *(undefined4 *)(param_4 + 0x38) = uVar6;
    *(undefined4 *)(param_4 + 0x3c) = param_2;
    *(undefined4 *)(param_4 + 0x40) = param_3;
  }
  fVar12 = *(float *)(param_4 + 0x28);
  if (fVar12 < 0.15) {
    fVar7 = (float)UnityEngine_Time__get_deltaTime(0);
    fVar12 = fVar12 + fVar7;
    *(float *)(param_4 + 0x28) = fVar12;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x50) != 0)) {
      lVar2 = *(long *)(lVar5 + 0x38);
      fVar12 = fVar12 / *(float *)(*(long *)(lVar5 + 0x50) + 0x10);
      fVar7 = 1.0;
      if (fVar12 <= 1.0) {
        fVar7 = fVar12;
      }
      fVar1 = 0.0;
      if (0.0 <= fVar12) {
        fVar1 = fVar7;
      }
      if (lVar2 != 0) {
        uVar3 = *(uint *)(lVar2 + 0x18);
        if (0 < (int)uVar3) {
          fVar12 = *(float *)(param_4 + 0x34);
          fVar7 = *(float *)(param_4 + 0x40);
          lVar5 = 0;
          uVar11 = *(undefined8 *)(param_4 + 0x38);
          fVar9 = (float)*(undefined8 *)(param_4 + 0x2c);
          fVar10 = (float)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20);
          do {
            if (uVar3 <= (uint)lVar5) goto LAB_0434ccb0;
            lVar4 = *(long *)(lVar2 + 0x20 + lVar5 * 8);
            if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_0434ccac;
            fVar8 = fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar1 +
                    (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
            UnityEngine_LineRenderer__SetPosition
                      (CONCAT44(fVar8,fVar9 + ((float)uVar11 - fVar9) * fVar1 +
                                      (float)*(undefined8 *)(lVar4 + 0x18)),fVar8,
                       fVar12 + fVar1 * (fVar7 - fVar12) + *(float *)(lVar4 + 0x20),
                       *(long *)(lVar4 + 0x10),1,0);
            uVar3 = *(uint *)(lVar2 + 0x18);
            lVar5 = lVar5 + 1;
          } while ((int)lVar5 < (int)uVar3);
        }
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
    }
  }
  else if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar3) {
      lVar2 = 0;
      do {
        if (uVar3 <= (uint)lVar2) {
LAB_0434ccb0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar5 + 0x20 + lVar2 * 8);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_0434ccac;
        fVar12 = (float)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
        UnityEngine_LineRenderer__SetPosition
                  (CONCAT44(fVar12,(float)*(undefined8 *)(param_4 + 0x38) +
                                   (float)*(undefined8 *)(lVar4 + 0x18)),fVar12,
                   *(float *)(param_4 + 0x40) + *(float *)(lVar4 + 0x20),*(long *)(lVar4 + 0x10),1,0
                  );
        uVar3 = *(uint *)(lVar5 + 0x18);
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < (int)uVar3);
    }
    return 0;
  }
LAB_0434ccac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

