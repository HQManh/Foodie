// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$ForgetItem
// address: 0x40c0008
// body: available
// range: 0x40c0008-0x40c04af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c0358 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c0498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c049c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c04a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c04a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c04ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040c03dc) */
/* WARNING: Removing unreachable block (ram,0x040c04a8) */

void AnhPD_FoodOrder_ServeShelfController__ForgetItem(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_09515f68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a720);
    FUN_03f5c2a4(&DAT_0917ae00);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091afe10);
    FUN_03f5c2a4(&DAT_091afe20);
    FUN_03f5c2a4(&DAT_091afe28);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f68 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar3 = AnhPD_FoodOrder_ShelfMergeQueue__IsInFlight(*(long *)(param_1 + 0xa0),param_2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x30);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
      if ((*(long *)(param_1 + 0xa0) != 0) &&
         (plVar4 = (long *)AnhPD_FoodOrder_ShelfMergeQueue__PlatesOf
                                     (*(long *)(param_1 + 0xa0),param_2,0), plVar4 != (long *)0x0))
      {
        lVar8 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a720) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_040c01b4;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a720,0);
LAB_040c01b4:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
joined_r0x040c01cc:
        do {
          do {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_040c0240;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_040c0240:
            uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
            if ((uVar3 & 1) == 0) {
              if (plVar4 == (long *)0x0) goto LAB_040c03d0;
              lVar8 = *plVar4;
              uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar3 == 0) goto LAB_040c03a8;
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_040c0390;
            }
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = *plVar4;
            uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917ae00) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_040c02a4;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917ae00,0);
LAB_040c02a4:
            uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          } while ((uVar3 & 1) == 0);
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_057e1004(*(long *)(param_1 + 0x30),uVar6,DAT_091afe28);
          lVar8 = DAT_091afe10;
        } while ((uVar3 & 1) != 0);
        lVar7 = *(long *)(param_1 + 0x30);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x10);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar5 = uVar6;
              thunk_FUN_03f5d7b8(puVar5,uVar6);
            }
            else {
              FUN_057e0c68(lVar7,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            goto joined_r0x040c01cc;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  goto LAB_040c04a4;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_040c0390:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_040c03c4;
    }
  }
LAB_040c03a8:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_040c03c4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_040c03d0:
  if (*(long *)(param_1 + 0xa0) != 0) {
    AnhPD_FoodOrder_ShelfMergeQueue__RemoveAllOf(*(long *)(param_1 + 0xa0),param_2,0);
    if (*(char *)(param_1 + 0x8c) != '\0') {
      lVar8 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
      if (lVar8 == 0) goto LAB_040c04a4;
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Free(lVar8,param_2,0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_057e185c(&local_68,*(long *)(param_1 + 0x30),DAT_091afe30);
      while (uVar3 = FUN_071bd28c(&local_68,DAT_091a4258), (uVar3 & 1) != 0) {
        AnhPD_FoodOrder_ServeShelfController__AbortRemaining(param_1,local_58);
      }
      FUN_071bd288(&local_68,DAT_091a4250);
      AnhPD_FoodOrder_ServeShelfController__FlushDropBacks(param_1);
      return;
    }
  }
LAB_040c04a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

