// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$RunCapture
// address: 0x40cc1ac
// body: available
// range: 0x40cc1ac-0x40cc5af inclusive
// range: 0x40cc604-0x40cc61f inclusive
// range: 0x40cc688-0x40cc727 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cc604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc60c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc614 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc61c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40cc724 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040cc610) */

uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__RunCapture
               (long param_1,undefined8 param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auStack_198 [72];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  long **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_68;
  
  if ((DAT_09515fbe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4d0);
    FUN_03f5c2a4(&DAT_0917ab80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fbe = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if ((param_3 == 0) || (plVar9 = *(long **)(param_3 + 0xe8), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar9;
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a4d0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_040cc2e4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a4d0,0);
LAB_040cc2e4:
  plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
  local_d8 = &local_68;
  local_e0 = 0;
  do {
    do {
      do {
        local_68 = plVar9;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040cc36c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_040cc36c:
        uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        plVar9 = local_68;
        if ((uVar7 & 1) == 0) {
          uVar2 = 0;
          goto LAB_040cc68c;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *local_68;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917ab80) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040cc3d8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab80,0);
LAB_040cc3d8:
        lVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar6,0);
        plVar9 = local_68;
      } while ((uVar7 & 1) == 0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = AnhPD_FoodOrder_FCustomerLine__get_isShowingCustomer(lVar6,0);
      plVar9 = local_68;
    } while ((uVar7 & 1) == 0);
    lVar4 = AnhPD_FoodOrder_FCustomerLine__GetOpenOrderIndices(lVar6,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05797d74(&local_138,lVar4,DAT_091adcc0);
    local_70 = local_128;
    puStack_e8 = &local_80;
    uStack_78 = uStack_130;
    local_80 = local_138;
    local_f0 = 0;
LAB_040cc464:
    do {
      do {
        uVar2 = FUN_071ad7a4(&local_80,DAT_091a34d8);
        uVar7 = local_70;
        if ((uVar2 & 1) == 0) {
          uVar10 = 2;
          goto LAB_040cc580;
        }
        AnhPD_FoodOrder_FCustomerLine__GetOrderSpec(&local_138,lVar6,local_70 & 0xffffffff,0);
        memcpy(&local_d0,&local_138,0x48);
        uVar5 = AnhPD_FoodOrder_OrderSpec__get_IsValid(&local_d0,0);
      } while (((uVar5 & 1) == 0) || ((uStack_a8 & 1) == 0));
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&uStack_c0,0);
    } while ((uVar5 & 1) != 0);
    lVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Find
                      (param_1,lVar6,uVar7 & 0xffffffff);
    if (lVar4 == 0) {
      memcpy(auStack_198,&local_d0,0x48);
      uVar7 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryCapture
                        (param_1,lVar6,uVar7 & 0xffffffff,auStack_198,param_2,param_4 & 1);
    }
    else {
      uStack_148 = *(undefined8 *)(lVar4 + 0x38);
      local_150 = *(undefined8 *)(lVar4 + 0x30);
      local_140 = *(undefined8 *)(lVar4 + 0x40);
      uVar7 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsStuck
                        (param_1,*(undefined8 *)(lVar4 + 0x10),&local_150,param_2);
      if ((uVar7 & 1) == 0) goto LAB_040cc464;
      uVar7 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__TryResume
                        (param_1,lVar4,param_2,param_4 & 1);
    }
    if ((iVar1 < 0) || ((uVar7 & 1) == 0)) goto LAB_040cc464;
    uVar10 = 8;
LAB_040cc580:
    FUN_071ad7a0(&local_80,DAT_091a34d0);
    plVar9 = local_68;
  } while ((uVar10 | 2) == 2);
LAB_040cc68c:
  plVar9 = *local_d8;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_040cc6ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_040cc6ec:
    (*(code *)*puVar3)(plVar9,puVar3[1]);
  }
  if (local_e0 == 0) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

