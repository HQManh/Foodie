// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$HasMoveFor
// address: 0x4235048
// body: available
// range: 0x4235048-0x423522b inclusive
// range: 0x4235280-0x423529f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4235220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4235224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4235228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_GridIngController__HasMoveFor(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 *puStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 local_38;
  
  if ((DAT_09516ddf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516ddf = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_38 = 0;
  if ((param_2 == 0) || (param_1 == 0)) {
LAB_04235228:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  lVar3 = AnhPD_FoodOrder_MessyController__get_ServeShelf(param_1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) goto LAB_04235228;
    if (*(char *)(lVar3 + 0x8c) == '\0') {
      uVar4 = AnhPD_FoodOrder_ServeShelfController__CanTakeIdDirect(lVar3,uVar5,0);
    }
    else {
      uVar4 = AnhPD_FoodOrder_ServeShelfController__IsBooked(lVar3,param_2,0);
    }
    if ((uVar4 & 1) != 0) {
      uVar2 = 1;
      goto LAB_04235284;
    }
  }
  lVar3 = AnhPD_FoodOrder_MessyController__GetCookingStations(param_1,0);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_057e185c(&local_78,lVar3,DAT_091ac068);
    uStack_58 = puStack_70;
    local_60 = local_78;
    local_50 = local_68;
    local_78 = 0;
    puStack_70 = &local_60;
    do {
      do {
        do {
          uVar2 = FUN_071bd28c(&local_60,DAT_091a27d0);
          plVar1 = local_50;
          if ((uVar2 & 1) == 0) goto LAB_04235208;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(plVar1,0);
        } while ((uVar4 & 1) == 0);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_38 = (**(code **)(*plVar1 + 0x1a8))(plVar1,uVar5,*(undefined8 *)(*plVar1 + 0x1b0));
        uVar4 = AnhPD_FoodOrder_InteractVector__get_IsValid(&local_38,0);
      } while ((uVar4 & 1) == 0);
      if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = AnhPD_FoodOrder_LevelInfo__CanAutoFeed(*(long *)(param_1 + 0x110),plVar1,uVar5,0);
    } while ((uVar4 & 1) == 0);
LAB_04235208:
    FUN_071bd288(&local_60,DAT_091a27c8);
  }
LAB_04235284:
  return uVar2 & 1;
}

