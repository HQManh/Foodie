// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$UncapturedOrderCount
// address: 0x40d0e24
// body: available
// range: 0x40d0e24-0x40d113f inclusive
// range: 0x40d1174-0x40d1193 inclusive
// range: 0x40d11fc-0x40d1297 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d1174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d1178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d117c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d1184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d118c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d1190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d1294 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040d1138) */
/* WARNING: Removing unreachable block (ram,0x040d113c) */
/* WARNING: Removing unreachable block (ram,0x040d1188) */

int AnhPD_FoodOrder_ServeShelfController_WholeDishMode__UncapturedOrderCount(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  long *plVar7;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulong local_98;
  long local_90;
  long **local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  long *local_68;
  
  if ((DAT_09515fdb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4d0);
    FUN_03f5c2a4(&DAT_0917ab80);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515fdb = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lVar1 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if ((lVar1 == 0) || (plVar7 = *(long **)(lVar1 + 0xe8), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917a4d0) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_040d0f6c;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a4d0,0);
LAB_040d0f6c:
  local_68 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
  local_88 = &local_68;
  local_90 = 0;
  if (local_68 != (long *)0x0) {
    iVar6 = 0;
    do {
      plVar7 = local_68;
      lVar1 = *local_68;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_040d1008;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_040d1008:
      uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      plVar7 = local_68;
      if ((uVar2 & 1) == 0) {
        plVar7 = *local_88;
        if (plVar7 == (long *)0x0) goto LAB_040d1268;
        lVar1 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar2 == 0) goto LAB_040d1240;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_040d1228;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *local_68;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917ab80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_040d106c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ab80,0);
LAB_040d106c:
      lVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar2 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = AnhPD_FoodOrder_FCustomerLine__get_isShowingCustomer(lVar1,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = AnhPD_FoodOrder_FCustomerLine__GetOpenOrderIndices(lVar1,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_05797d74(&local_a8,lVar4,DAT_091adcc0);
          local_80 = local_a8;
          local_a8 = 0;
          puStack_78 = puStack_a0;
          local_70 = local_98;
          puStack_a0 = &local_80;
          while (uVar2 = FUN_071ad7a4(&local_80,DAT_091a34d8), (uVar2 & 1) != 0) {
            lVar4 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Find
                              (param_1,lVar1,local_70 & 0xffffffff);
            if (lVar4 == 0) {
              iVar6 = iVar6 + 1;
            }
          }
          FUN_071ad7a0(&local_80,DAT_091a34d0);
        }
      }
    } while (local_68 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_040d1228:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_040d125c;
    }
  }
LAB_040d1240:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_040d125c:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
LAB_040d1268:
  if (local_90 == 0) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

