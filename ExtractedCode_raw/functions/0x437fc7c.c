// rea decompile_all
// name: CakeOrder.InGame.InGameSingleBackground$$Initialize
// address: 0x437fc7c
// body: available
// range: 0x437fc7c-0x437ffdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437fe08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437ffd4 to 0x4381d24 CakeOrder.InGame.InGameSingleBackground$$InternalSetTintImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437ffd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameSingleBackground__Initialize
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,long param_5,
               long param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  uVar14 = param_2;
  fVar16 = param_3;
  uVar17 = param_4;
  if ((DAT_09517973 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fce0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180560);
    DAT_09517973 = 1;
  }
  plVar3 = (long *)(param_5 + 0x48);
  *plVar3 = param_6;
  thunk_FUN_03f5d7b8(plVar3,param_6);
  plVar4 = (long *)(param_5 + 0x20);
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    lVar2 = FUN_03f5c394(DAT_09180560,0);
    *plVar4 = lVar2;
    thunk_FUN_03f5d7b8(plVar4,lVar2);
    lVar2 = *plVar4;
    if (lVar2 == 0) goto LAB_0437fe08;
  }
  lVar2 = FUN_03f5c394(DAT_0917fce0,*(undefined4 *)(lVar2 + 0x18));
  plVar5 = (long *)(param_5 + 0x68);
  *plVar5 = lVar2;
  thunk_FUN_03f5d7b8(plVar5,lVar2);
  lVar2 = *(long *)(param_5 + 0x20);
  if (lVar2 != 0) {
    lVar8 = 0;
    lVar9 = 4;
    do {
      uVar10 = lVar9 - 4;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar10) {
        uVar6 = *(undefined8 *)(param_5 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(param_5 + 0x28) == 0) break;
          lVar2 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0);
          if ((*plVar3 == 0) || (lVar2 == 0)) break;
          UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(*plVar3 + 0x10),0);
        }
        uVar6 = *(undefined8 *)(param_5 + 0x30);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(param_5 + 0x30) == 0) break;
          lVar2 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x30),0);
          if ((*plVar3 == 0) || (lVar2 == 0)) break;
          UnityEngine_Transform__SetParent(lVar2,*(undefined8 *)(*plVar3 + 0x18),0);
        }
        if (*(char *)(param_5 + 0x40) != '\0') {
          lVar2 = UnityEngine_Camera__get_main(0);
          if (lVar2 == 0) break;
          fVar12 = (float)UnityEngine_Camera__get_orthographicSize(lVar2,0);
          lVar2 = UnityEngine_Camera__get_main(0);
          if (lVar2 == 0) break;
          fVar13 = (float)UnityEngine_Camera__get_aspect(lVar2,0);
          uVar6 = *(undefined8 *)(param_5 + 0x28);
          fVar15 = *(float *)(param_5 + 0x3c);
          fVar12 = ((fVar12 + fVar12) * fVar13) / fVar15;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (fVar12 <= 1.0) {
            fVar12 = 1.0;
          }
          uVar10 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar10 & 1) != 0) {
            if ((*(long *)(param_5 + 0x28) == 0) ||
               (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0),
               lVar2 == 0)) break;
            fVar13 = (float)UnityEngine_Transform__get_localScale(lVar2,0);
            fVar15 = fVar12 * fVar15;
            fVar16 = fVar12 * fVar16;
            UnityEngine_Transform__set_localScale(fVar12 * fVar13,fVar15,fVar16,lVar2,0);
          }
          uVar6 = *(undefined8 *)(param_5 + 0x30);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar10 & 1) != 0) {
            if ((*(long *)(param_5 + 0x30) == 0) ||
               (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x30),0),
               lVar2 == 0)) break;
            fVar13 = (float)UnityEngine_Transform__get_localScale(lVar2,0);
            UnityEngine_Transform__set_localScale
                      (fVar12 * fVar13,fVar12 * fVar15,fVar12 * fVar16,lVar2,0);
          }
        }
        *(undefined4 *)(param_5 + 0x50) = param_1;
        *(undefined4 *)(param_5 + 0x54) = param_2;
        *(float *)(param_5 + 0x58) = param_3;
        *(undefined4 *)(param_5 + 0x5c) = param_4;
        CakeOrder_InGame_InGameSingleBackground__InternalSetTintImmediate(param_5);
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar10) goto LAB_0437ffd8;
      uVar6 = *(undefined8 *)(lVar2 + lVar9 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = *plVar4;
        if (lVar2 == 0) break;
        if (*(uint *)(lVar2 + 0x18) <= uVar10) {
LAB_0437ffd8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = *(long *)(lVar2 + lVar9 * 8);
        if (lVar2 == 0) break;
        lVar7 = *plVar5;
        uVar11 = UnityEngine_SpriteRenderer__get_color(lVar2,0);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0437ffd8;
        lVar7 = lVar7 + lVar8;
        *(undefined4 *)(lVar7 + 0x20) = uVar11;
        *(undefined4 *)(lVar7 + 0x24) = uVar14;
        *(float *)(lVar7 + 0x28) = fVar16;
        *(undefined4 *)(lVar7 + 0x2c) = uVar17;
      }
      lVar2 = *plVar4;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar2 != 0);
  }
LAB_0437fe08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

