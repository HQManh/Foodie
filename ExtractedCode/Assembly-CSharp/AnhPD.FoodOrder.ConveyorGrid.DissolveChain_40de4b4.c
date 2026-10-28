// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$DissolveChain
// address: 0x40de4b4
// body: available
// range: 0x40de4b4-0x40de653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40de64c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40de650 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__DissolveChain(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  if ((DAT_09516045 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d570);
    FUN_03f5c2a4(&DAT_0919d578);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe68);
    FUN_03f5c2a4(&DAT_091abe78);
    DAT_09516045 = 1;
  }
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    FUN_057e185c(&local_58,*(long *)(param_2 + 0x18),DAT_091abe78);
    while (uVar2 = FUN_071bd28c(&local_58,DAT_091a2728), (uVar2 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(local_48 + 0x30) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x30),0);
    }
    FUN_071bd288(&local_58,DAT_091a2720);
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar2 = FUN_06ef1fe8(*(long *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x10),&local_38,
                             DAT_0919d578);
        if (((uVar2 & 1) != 0) && (local_38 == param_2)) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_040de650;
          FUN_06ef19b4(*(long *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x10),DAT_0919d570);
        }
        AnhPD_FoodOrder_ConveyorGrid__StripQueuedLinks(param_1,*(undefined4 *)(param_2 + 0x10));
        return;
      }
    }
  }
LAB_040de650:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

