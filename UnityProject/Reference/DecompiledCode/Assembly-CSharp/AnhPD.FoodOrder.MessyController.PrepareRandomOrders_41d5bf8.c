// rea decompile_all
// name: AnhPD.FoodOrder.MessyController$$PrepareRandomOrders
// address: 0x41d5bf8
// body: available
// range: 0x41d5bf8-0x41d5eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d5ee4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d5ee8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_MessyController__PrepareRandomOrders(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  
  if ((DAT_09516a76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183110);
    FUN_03f5c2a4(&DAT_091ac240);
    FUN_03f5c2a4(&DAT_091ac238);
    FUN_03f5c2a4(&DAT_091ac250);
    FUN_03f5c2a4(&DAT_0917bfd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516a76 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar13,0);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_1 + 0xe8) != '\0') {
      uVar13 = UnityEngine_Random__Range
                         (*(undefined4 *)(param_1 + 0xec),*(int *)(param_1 + 0xf0) + 1,0);
      lVar14 = *(long *)(param_1 + 0x38);
      uVar13 = CakeOrder_InGame_CustomerScheduleBuilder__BuildPlaceholders(uVar13,0);
      if (lVar14 == 0) goto LAB_041d5ee4;
      puVar15 = (undefined8 *)(lVar14 + 0x98);
      *puVar15 = uVar13;
      thunk_FUN_03f5d7b8(puVar15,uVar13);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_041d5ee4;
      puVar15 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0xa0);
      *puVar15 = 0;
      thunk_FUN_03f5d7b8(puVar15,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        if (((*(long *)(param_1 + 0x38) == 0) ||
            (lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x98), lVar14 == 0)) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar5 == 0)) goto LAB_041d5ee4;
        CakeOrder_InGame_CakeLevelRuntimeDataCustomer__SetMaxNumCustomers
                  (lVar5,*(undefined4 *)(lVar14 + 0x18),0);
      }
    }
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar14 = *(long *)(*(long *)(param_1 + 0x38) + 0x98), lVar14 == 0)) {
LAB_041d5ee4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
      uVar4 = 0;
      uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar4) {
LAB_041d5ee8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar14 + uVar4 * 8 + 0x20);
        if ((lVar5 != 0) &&
           (((*(char *)(param_1 + 0xe8) != '\0' || (*(long *)(lVar5 + 0x30) == 0)) ||
            (*(int *)(*(long *)(lVar5 + 0x30) + 0x18) < 1)))) {
          plVar6 = *(long **)(param_1 + 0xd8);
          if (plVar6 == (long *)0x0) goto LAB_041d5ee4;
          lVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
            lVar8 = thunk_FUN_03f9944c(DAT_0917bfd8);
            FUN_057e0478(lVar8,*(undefined4 *)(lVar7 + 0x18),DAT_091ac238);
            plVar6 = (long *)(lVar5 + 0x30);
            *plVar6 = lVar8;
            thunk_FUN_03f5d7b8(plVar6,lVar8);
            if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
              uVar10 = 0;
              uVar11 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              do {
                if (uVar11 <= uVar10) goto LAB_041d5ee8;
                uVar13 = *(undefined8 *)(lVar7 + 0x20 + uVar10 * 8);
                lVar8 = *plVar6;
                lVar5 = thunk_FUN_03f9944c(DAT_09183110);
                CakeOrder_InGame_CustomerSingleOrderSpawnData___ctor(lVar5,0);
                if (lVar5 == 0) goto LAB_041d5ee4;
                *(undefined8 *)(lVar5 + 0x10) = uVar13;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x10),uVar13);
                if (*(long *)(param_1 + 0x38) == 0) goto LAB_041d5ee4;
                uVar3 = CakeOrder_CakeLevelInitData__GetOrderPrice
                                  (*(long *)(param_1 + 0x38),uVar13,0);
                *(undefined4 *)(lVar5 + 0x18) = uVar3;
                lVar2 = DAT_091ac240;
                if (lVar8 == 0) goto LAB_041d5ee4;
                lVar12 = *(long *)(lVar8 + 0x10);
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_041d5ee4;
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar5;
                  thunk_FUN_03f5d7b8(plVar9,lVar5);
                }
                else {
                  FUN_057e0c68(lVar8,lVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                uVar11 = (ulong)*(uint *)(lVar7 + 0x18);
                uVar10 = uVar10 + 1;
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
          }
        }
        uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar14 + 0x18));
    }
  }
  return;
}

