// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$DebugGridItemMove
// address: 0x423c5bc
// body: available
// range: 0x423c5bc-0x423c92b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423c91c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423c928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__DebugGridItemMove(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  byte local_9c [4];
  ulong local_98;
  undefined8 *puStack_90;
  long *local_88;
  ulong local_80;
  undefined8 *puStack_78;
  long *local_70;
  undefined8 local_58;
  
  if ((DAT_09516dfe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_09223378);
    FUN_03f5c2a4(&DAT_09222a18);
    DAT_09516dfe = 1;
  }
  local_80 = 0;
  puStack_78 = (ulong *)0x0;
  local_70 = (long *)0x0;
  local_58 = 0;
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar11 = *(undefined8 *)(param_2 + 0x78);
    lVar4 = AnhPD_FoodOrder_MessyController__get_ServeShelf(param_1,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      if (lVar4 == 0) goto LAB_0423c928;
      uVar3 = AnhPD_FoodOrder_ServeShelfController__CanTakeIdDirect(lVar4,uVar11,0);
    }
    lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar4,DAT_091b0558);
    lVar6 = AnhPD_FoodOrder_MessyController__GetCookingStations(param_1,0);
    if (lVar6 != 0) {
      FUN_057e185c(&local_98,lVar6,DAT_091ac068);
      local_70 = local_88;
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_98 = 0;
      puStack_90 = &local_80;
LAB_0423c764:
      uVar5 = FUN_071bd28c(&local_80,DAT_091a27d0);
      plVar2 = local_70;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(plVar2,0);
        if ((uVar5 & 1) != 0) {
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_58 = (**(code **)(*plVar2 + 0x1a8))(plVar2,uVar11,*(undefined8 *)(*plVar2 + 0x1b0));
          uVar5 = AnhPD_FoodOrder_InteractVector__get_IsValid(&local_58,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = AnhPD_FoodOrder_LevelInfo__CanAutoFeed
                              (*(long *)(param_1 + 0x110),plVar2,uVar11,0);
            lVar6 = DAT_091b0570;
            if ((uVar5 & 1) != 0) {
              if (lVar4 != 0) {
                lVar10 = *(long *)(lVar4 + 0x10);
                lVar9 = plVar2[5];
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = lVar9;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar4,lVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_0423c764;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          }
        }
        goto LAB_0423c764;
      }
      FUN_071bd288(&local_80,DAT_091a27c8);
    }
    local_98 = CONCAT71(local_98._1_7_,uVar3) & 0xffffffffffffff01;
    uVar11 = FUN_03f5c42c(DAT_09535400,&local_98);
    uVar11 = System_String__Format(DAT_09222a18,uVar11,0);
    uVar7 = System_String__Join(DAT_091f86d8,lVar4,0);
    local_9c[0] = AnhPD_FoodOrder_GridIngController__HasMoveFor(param_1,param_2);
    local_9c[0] = local_9c[0] & 1;
    uVar8 = FUN_03f5c42c(DAT_09535400,local_9c);
    uVar7 = System_String__Format(DAT_09223378,uVar7,uVar8,0);
    System_String__Concat(uVar11,uVar7,0);
    return;
  }
LAB_0423c928:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

