// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$CollectOrphanPlatesForFx
// address: 0x40c7844
// body: available
// range: 0x40c7844-0x40c7b37 inclusive
// range: 0x40c7b84-0x40c7b9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c7b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c7b30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40c7b34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__CollectOrphanPlatesForFx(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_09515f9c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4250);
    FUN_03f5c2a4(&DAT_091a4258);
    FUN_03f5c2a4(&DAT_091a4260);
    FUN_03f5c2a4(&DAT_091afe10);
    FUN_03f5c2a4(&DAT_091afe30);
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091afe58);
    FUN_03f5c2a4(&DAT_091b71c0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515f9c = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  if (*(char *)(param_1 + 0x8c) == '\0') {
    uVar4 = AnhPD_FoodOrder_ServeShelfController__EnsureSnapshot(param_1);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) != 0) {
        AnhPD_FoodOrder_ShelfSnapshot__Solve(*(long *)(param_1 + 0xa8),0);
        lVar6 = *(long *)(param_1 + 0x90);
        if (lVar6 != 0) {
          iVar8 = 0;
          do {
            if (*(int *)(lVar6 + 0x18) <= iVar8) {
              return;
            }
            lVar6 = FUN_057e0998(lVar6,iVar8,DAT_091afe58);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
            if ((uVar4 & 1) != 0) {
              if (lVar6 == 0) break;
              uVar4 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar6);
              if (((uVar4 & 1) == 0) &&
                 (uVar4 = AnhPD_FoodOrder_ServeShelfController__IsPlateBusy(param_1,lVar6),
                 (uVar4 & 1) == 0)) {
                if (*(long *)(param_1 + 0xa8) == 0) break;
                iVar3 = AnhPD_FoodOrder_ShelfSnapshot__AssignOf(*(long *)(param_1 + 0xa8),iVar8,0);
                lVar2 = DAT_091afe10;
                if (iVar3 < 0) {
                  if (param_2 == 0) break;
                  lVar7 = *(long *)(param_2 + 0x10);
                  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                  if (lVar7 == 0) break;
                  uVar1 = *(uint *)(param_2 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(param_2 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar6;
                    thunk_FUN_03f5d7b8(plVar5,lVar6);
                  }
                  else {
                    FUN_057e0c68(param_2,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
            lVar6 = *(long *)(param_1 + 0x90);
            iVar8 = iVar8 + 1;
          } while (lVar6 != 0);
        }
      }
      goto LAB_040c7b2c;
    }
  }
  else {
    if (*(long *)(param_1 + 0x90) == 0) {
LAB_040c7b2c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_78,*(long *)(param_1 + 0x90),DAT_091afe30);
    local_50 = local_68;
    uStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
LAB_040c7948:
    uVar4 = FUN_071bd28c(&local_60,DAT_091a4258);
    lVar6 = local_50;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
      if ((uVar4 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = AnhPD_FoodOrder_ServePlate__get_IsEmpty(lVar6);
        if ((((uVar4 & 1) == 0) && (*(char *)(lVar6 + 0x88) == '\0')) &&
           (uVar4 = AnhPD_FoodOrder_ServeShelfController__IsPlateBusy(param_1,lVar6),
           lVar2 = DAT_091afe10, (uVar4 & 1) == 0)) {
          if (param_2 != 0) {
            lVar7 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar5 = lVar6;
                thunk_FUN_03f5d7b8(plVar5,lVar6);
              }
              else {
                FUN_057e0c68(param_2,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_040c7948;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_040c7948;
    }
    FUN_071bd288(&local_60,DAT_091a4250);
  }
  return;
}

