// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$PickStationFor
// address: 0x41eef5c
// body: available
// range: 0x41eef5c-0x41ef277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ef268 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef26c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ef274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_LevelInfo__PickStationFor
               (long param_1,undefined8 param_2,undefined8 param_3,uint param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  int local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09516b5d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_0917b3d0);
    FUN_03f5c2a4(&DAT_0917b568);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b5d = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  *param_5 = -1;
  local_70 = 0;
  local_84 = 0;
  if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
     (lVar4 = AnhPD_FoodOrder_MessyController__GetCookingStations
                        (**(long **)(DAT_091881a0 + 0xb8),0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_a0,lVar4,DAT_091ac068);
  local_80 = local_a0;
  local_a8 = 0;
  local_a0 = 0;
  local_70 = local_90;
  uStack_78 = puStack_98;
  iVar9 = 0x7fffffff;
  puStack_98 = &local_80;
  do {
    do {
      do {
        uVar5 = FUN_071bd28c(&local_80,DAT_091a27d0);
        lVar4 = local_70;
        if ((uVar5 & 1) == 0) {
          FUN_071bd288(&local_80,DAT_091a27c8);
          return local_a8;
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar4,0);
      } while ((((uVar5 & 1) == 0) ||
               (iVar1 = AnhPD_FoodOrder_LevelInfo__StationRoomFor
                                  (param_1,lVar4,param_2,param_3,param_4 & 1,&local_84),
               iVar2 = local_84, iVar1 < 1)) || (local_84 < 0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar10 = *(long **)(lVar4 + 0x58);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b3d0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_041ef140;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b3d0,0);
LAB_041ef140:
      iVar1 = (*(code *)*puVar6)(plVar10,puVar6[1]);
    } while ((iVar1 <= iVar2) ||
            (uVar5 = AnhPD_FoodOrder_LevelInfo__WantsStationResult(param_1,lVar4,param_2),
            iVar2 = local_84, (uVar5 & 1) == 0));
    plVar10 = *(long **)(lVar4 + 0x58);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b568) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_041ef1c8;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b568,0);
LAB_041ef1c8:
    (*(code *)*puVar6)(plVar10,iVar2,puVar6[1]);
    iVar2 = AnhPD_FoodOrder_LevelInfo__EmptySlots();
    iVar1 = AnhPD_FoodOrder_LevelInfo__InboundCount(*(undefined8 *)(param_1 + 0x30),lVar4,local_84);
    iVar3 = AnhPD_FoodOrder_LevelInfo__InboundCount(param_3,lVar4,local_84);
    iVar2 = iVar2 + ~(iVar3 + iVar1);
    if (iVar2 < iVar9) {
      *param_5 = local_84;
      iVar9 = iVar2;
      local_a8 = lVar4;
    }
  } while( true );
}

