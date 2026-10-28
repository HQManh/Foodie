// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$IsColumnMoving
// address: 0x40df43c
// body: available
// range: 0x40df43c-0x40df5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40df5ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df5b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40df5b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ConveyorGrid__IsColumnMoving(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_0951604d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951604d = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_88,*(long *)(param_1 + 0x20),DAT_091abe78);
  local_60 = local_78;
  uStack_68 = puStack_80;
  local_70 = local_88;
  local_88 = 0;
  puStack_80 = &local_70;
  do {
    do {
      do {
        uVar2 = FUN_071bd28c(&local_70,DAT_091a2728);
        lVar1 = local_60;
        if ((uVar2 & 1) == 0) goto LAB_040df580;
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while ((param_2 < *(int *)(local_60 + 0x20)) ||
              (*(int *)(local_60 + 0x20) + *(int *)(local_60 + 0x28) + -1 < param_2));
      uVar5 = *(undefined8 *)(local_60 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    } while ((uVar3 & 1) == 0);
    lVar4 = *(long *)(lVar1 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  } while ((*(char *)(lVar4 + 0xd1) != '\0') ||
          (uVar3 = AnhPD_FoodOrder_ConveyorGrid__IsSettled(param_1,lVar1), (uVar3 & 1) != 0));
LAB_040df580:
  FUN_071bd288(&local_70,DAT_091a2720);
  return uVar2 & 1;
}

