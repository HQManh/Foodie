// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$SyncPlatesToOrders
// address: 0x40c57b0
// body: available
// range: 0x40c57b0-0x40c5ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c58b0 to 0x40c9394 AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Sync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c5aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c5ae0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__SyncPlatesToOrders(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09515f8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_091b71b8);
    FUN_03f5c2a4(&DAT_091b71b0);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515f8d = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_79 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a1 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_99 = 0;
  uStack_c8 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  local_d0 = 0;
  local_b9 = 0;
  uStack_b8 = 0;
  if (*(char *)(param_1 + 0x8c) == '\0') {
    uVar5 = AnhPD_FoodOrder_ServeShelfController__EnsureSnapshot(param_1);
    if ((uVar5 & 1) == 0) {
LAB_040c5ab0:
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_040c5ae0;
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0);
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 != 0) {
        iVar6 = 0;
        puVar8 = (undefined8 *)((ulong)&local_130 | 1);
        puVar9 = (undefined8 *)((ulong)&local_90 | 7);
        puVar7 = (undefined8 *)((ulong)&local_b0 | 7);
        do {
          if (*(int *)(lVar4 + 0x18) <= iVar6) goto LAB_040c5ab0;
          lVar4 = FUN_057e0998(lVar4,iVar6,DAT_091afe58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0xa8) == 0) break;
            iVar3 = AnhPD_FoodOrder_ShelfSnapshot__AssignOf(*(long *)(param_1 + 0xa8),iVar6,0);
            if (iVar3 < 0) {
              local_90 = 0;
              uStack_88 = 0;
              uStack_81 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              local_79 = 0;
              uStack_c8 = 0;
              uStack_c1 = 0;
              uStack_c0 = 0;
              local_d0 = 0;
              local_b9 = 0;
              uStack_b8 = 0;
              cVar2 = '\0';
            }
            else {
              if (*(long *)(param_1 + 0xa8) == 0) break;
              AnhPD_FoodOrder_ShelfSnapshot__OrderPieces
                        (&local_108,*(long *)(param_1 + 0xa8),iVar3,0);
              uStack_128 = 0;
              local_130 = 0;
              uStack_118 = 0;
              uStack_120 = 0;
              uStack_e8 = uStack_100;
              local_f0 = local_108;
              local_e0 = local_f8;
              FUN_05c331e0(&local_130,&local_f0,DAT_091b71b0);
              local_d0 = *puVar8;
              uStack_c8 = (undefined7)puVar8[1];
              local_b9 = (undefined1)*(undefined8 *)((long)puVar8 + 0x17);
              uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x17) >> 8);
              uStack_c1 = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
              uStack_c0 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
              cVar2 = (char)local_130;
            }
            if (lVar4 == 0) break;
            local_90 = *(undefined8 *)(lVar4 + 0x89);
            uStack_88 = (undefined7)*(undefined8 *)(lVar4 + 0x91);
            local_79 = (undefined1)*(undefined8 *)(lVar4 + 0xa0);
            uStack_78 = (undefined7)((ulong)*(undefined8 *)(lVar4 + 0xa0) >> 8);
            uStack_81 = (undefined1)*(undefined8 *)(lVar4 + 0x98);
            uStack_80 = (undefined7)((ulong)*(undefined8 *)(lVar4 + 0x98) >> 8);
            local_b0 = local_d0;
            uStack_a8 = uStack_c8;
            uStack_a1 = uStack_c1;
            uStack_a0 = uStack_c0;
            local_99 = local_b9;
            uStack_98 = uStack_b8;
            if ((cVar2 != '\0') == (*(char *)(lVar4 + 0x88) != '\0')) {
              if (*(char *)(lVar4 + 0x88) != '\0') {
                if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uStack_148 = puVar9[1];
                local_150 = *puVar9;
                local_140 = puVar9[2];
                uStack_168 = puVar7[1];
                local_170 = *puVar7;
                local_160 = puVar7[2];
                uVar5 = AnhPD_FoodOrder_PieceSet__op_Equality(&local_150,&local_170,0);
                if ((uVar5 & 1) == 0) goto LAB_040c5a6c;
              }
            }
            else {
LAB_040c5a6c:
              *(char *)(lVar4 + 0x88) = cVar2;
              *(ulong *)(lVar4 + 0x91) = CONCAT17(uStack_c1,uStack_c8);
              *(undefined8 *)(lVar4 + 0x89) = local_d0;
              *(ulong *)(lVar4 + 0xa0) = CONCAT71(uStack_b8,local_b9);
              *(ulong *)(lVar4 + 0x98) = CONCAT71(uStack_c0,uStack_c1);
              if (*(long *)(param_1 + 0xa8) == 0) break;
              AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_1 + 0xa8),0);
            }
          }
          lVar4 = *(long *)(param_1 + 0x90);
          iVar6 = iVar6 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  else {
    lVar4 = AnhPD_FoodOrder_ServeShelfController__get_WholeDish(param_1);
    if (lVar4 != 0) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Sync(lVar4,0);
        return;
      }
      goto LAB_040c5ae0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_040c5ae0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

