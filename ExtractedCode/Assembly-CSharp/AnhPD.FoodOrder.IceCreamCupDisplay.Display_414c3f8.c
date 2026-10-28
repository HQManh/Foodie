// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamCupDisplay$$Display
// address: 0x414c3f8
// body: available
// range: 0x414c3f8-0x414c5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414c538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414c5e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamCupDisplay__Display(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0951644b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951644b = 1;
  }
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_50 = param_2[2];
  AnhPD_FoodOrder_IceCreamPieceDisplay__Display(param_1,&local_60);
  if (*(long *)(param_1 + 0x38) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) == 0) {
      return;
    }
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = param_2[2];
    iVar4 = AnhPD_FoodOrder_IceCreamScoopDisplay__CountScoops(&local_80);
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 != 0) {
      uVar2 = iVar4 - 1;
      uVar8 = 0;
      uVar3 = *(int *)(lVar6 + 0x18) - 1;
      uVar1 = uVar2;
      if ((int)uVar3 <= (int)uVar2) {
        uVar1 = uVar3;
      }
      uVar3 = 0;
      if (-1 < (int)uVar2) {
        uVar3 = uVar1;
      }
      do {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if ((long)(int)uVar1 <= (long)uVar8) {
          if (uVar1 <= uVar3) {
LAB_0414c5e8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
          if (lVar6 == 0) {
            return;
          }
          *(long *)(param_1 + 0x40) = lVar6;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),lVar6);
          uVar7 = AnhPD_FoodOrder_IceCreamCupDisplay_Form__get_Renderers(lVar6);
          uStack_98 = param_2[1];
          local_a0 = *param_2;
          local_90 = param_2[2];
          AnhPD_FoodOrder_IceCreamScoopDisplay__SetScoops(param_1,uVar7,&local_a0,0);
          uVar7 = *(undefined8 *)(lVar6 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (*(long *)(lVar6 + 0x20) != 0) {
            uStack_b8 = param_2[1];
            local_c0 = *param_2;
            local_b0 = param_2[2];
            AnhPD_FoodOrder_IceCreamDecorLayout__Display(*(long *)(lVar6 + 0x20),&local_c0);
            return;
          }
          break;
        }
        if (uVar1 <= uVar8) goto LAB_0414c5e8;
        lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
        if (lVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar6 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x38);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_0414c5e8;
          lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) break;
          UnityEngine_GameObject__SetActive(lVar6,uVar3 == uVar8,0);
        }
        lVar6 = *(long *)(param_1 + 0x38);
        uVar8 = uVar8 + 1;
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

