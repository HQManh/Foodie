// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$InboundSequence
// address: 0x40d3d44
// body: available
// range: 0x40d3d44-0x40d3f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d3f30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3f3c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3f44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d3f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ShelfMergeQueue__InboundSequence(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_88;
  long *plStack_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09515ff2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a58a0);
    FUN_03f5c2a4(&DAT_091a58a8);
    FUN_03f5c2a4(&DAT_091a58b0);
    FUN_03f5c2a4(&DAT_091b3a30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515ff2 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = **(undefined8 **)(DAT_09535468 + 0xb8);
  FUN_057e185c(&local_88,*(long *)(param_1 + 0x10),DAT_091b3a30);
  local_60 = local_78;
  uStack_68 = plStack_80;
  local_70 = local_88;
  local_88 = 0;
  plStack_80 = &local_70;
  while( true ) {
    do {
      while( true ) {
        do {
          uVar3 = FUN_071bd28c(&local_70,DAT_091a58a8);
          lVar2 = local_60;
          lVar1 = local_88;
          if ((uVar3 & 1) == 0) {
            FUN_071bd288(plStack_80,DAT_091a58a0);
            if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c548(lVar1);
            }
            return uVar5;
          }
          if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = *(undefined8 *)(local_60 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Inequality(uVar6,param_2,0);
        } while ((uVar3 & 1) != 0);
        if (*(char *)(lVar2 + 0x36) == '\0') break;
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_3,*(undefined8 *)(lVar2 + 0x38),0);
        uVar5 = System_String__Concat(uVar5,uVar6,0);
      }
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
    } while ((uVar3 & 1) == 0);
    plVar4 = *(long **)(lVar2 + 0x18);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_3 == 0) break;
    uVar6 = AnhPD_FoodOrder_LevelInfo__SequenceOf(param_3,uVar6,0);
    uVar5 = System_String__Concat(uVar5,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar6,uVar6);
}

