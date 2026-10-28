// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleNigiriDisplay$$Display
// address: 0x41642b0
// body: available
// range: 0x41642b0-0x41645cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41645a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41645c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleNigiriDisplay__Display(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  
  if ((DAT_0951655e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2bd8);
    FUN_03f5c2a4(&DAT_091b2b70);
    FUN_03f5c2a4(&DAT_091b2be0);
    FUN_03f5c2a4(&DAT_091b2b78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951655e = 1;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_c8,param_2,0);
  uStack_98 = uStack_c0;
  local_a0 = local_c8;
  uStack_88 = uStack_b0;
  uStack_90 = local_b8;
  local_80 = local_a8;
  do {
    uVar2 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_a0,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      break;
    }
    lVar3 = AnhPD_FoodOrder_FlexibleNigiriDisplay__MainFor(param_1,local_80 & 0xffffffff);
  } while (lVar3 == 0);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar9 = 0;
    uVar2 = 0;
    do {
      if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar2) {
        lVar3 = *(long *)(param_1 + 0x30);
        if (lVar3 != 0) {
          iVar7 = 0;
          goto LAB_04164510;
        }
        break;
      }
      lVar4 = FUN_057e0998(lVar4,uVar2 & 0xffffffff,DAT_091b2b78);
      if (lVar4 == 0) break;
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar5 & 1) != 0) {
        if (lVar3 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(lVar3 + 0x18);
        }
        if (*(long *)(lVar4 + 0x18) == 0) break;
        UnityEngine_SpriteRenderer__set_sprite(*(long *)(lVar4 + 0x18),uVar8,0);
        if (*(long *)(lVar4 + 0x18) == 0) break;
        lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x18),0);
        if (lVar3 == 0) {
          if (lVar6 == 0) break;
          UnityEngine_GameObject__SetActive(lVar6,0,0);
        }
        else {
          uVar8 = *(undefined8 *)(lVar3 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar8,0);
          if (lVar6 == 0) break;
          UnityEngine_GameObject__SetActive(lVar6,uVar1 & 1,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            if (*(long *)(lVar4 + 0x18) == 0) break;
            lVar4 = UnityEngine_Component__get_transform(*(long *)(lVar4 + 0x18),0);
            lVar6 = *(long *)(param_1 + 0x38);
            if (lVar6 == 0) break;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (lVar4 == 0) break;
            uVar8 = *(undefined8 *)(lVar6 + lVar9 + 0x20);
            fVar10 = (float)((ulong)uVar8 >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
            UnityEngine_Transform__set_localPosition
                      (CONCAT44(fVar10,(float)uVar8 + (float)*(undefined8 *)(lVar3 + 0x20)),fVar10,
                       *(float *)(lVar6 + lVar9 + 0x28) + 0.0,lVar4,0);
          }
        }
      }
      lVar4 = *(long *)(param_1 + 0x20);
      uVar2 = uVar2 + 1;
      lVar9 = lVar9 + 0xc;
    } while (lVar4 != 0);
  }
  goto LAB_041645a0;
LAB_04164510:
  do {
    if (*(int *)(lVar3 + 0x18) <= iVar7) {
      return;
    }
    lVar3 = FUN_057e0998(lVar3,iVar7,DAT_091b2be0);
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) break;
      uStack_d8 = param_2[1];
      local_e0 = *param_2;
      local_d0 = param_2[2];
      lVar4 = *(long *)(lVar3 + 0x18);
      uVar1 = AnhPD_FoodOrder_FlexibleSushiDisplay_PieceVisual__WantsActive(lVar3,&local_e0);
      if (lVar4 == 0) break;
      UnityEngine_GameObject__SetActive(lVar4,uVar1 & 1,0);
    }
    lVar3 = *(long *)(param_1 + 0x30);
    iVar7 = iVar7 + 1;
  } while (lVar3 != 0);
LAB_041645a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

