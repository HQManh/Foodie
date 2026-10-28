// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.<>c__DisplayClass140_0$$<ServePlateTo>b__2
// address: 0x40d17dc
// body: available
// range: 0x40d17dc-0x40d19f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d19f0 to 0x40c2ec0 AnhPD.FoodOrder.ServeShelfController$$RequestServe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40d19f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_<>c__DisplayClass140_0__<ServePlateTo>b__2(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_09515fe2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a8618);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091efa50);
    DAT_09515fe2 = 1;
  }
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x98), lVar1 == 0)) goto LAB_040d19f4;
  FUN_053ebe0c(lVar1,*(undefined8 *)(param_1 + 0x48),DAT_091a8618);
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_040d19f4;
    AnhPD_FoodOrder_ServeService__Release
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0);
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_040d19f4;
    AnhPD_FoodOrder_ServeShelfController__RemovePlate
              (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),0);
    lVar5 = *(long *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(long *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(lVar5,param_1,DAT_091efa50,0);
      *(long *)(param_1 + 0x50) = lVar5;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x50),lVar5);
    }
    if (lVar1 == 0) goto LAB_040d19f4;
    uVar2 = AnhPD_FoodOrder_ServeService__Deliver(lVar1,uVar3,uVar4,lVar5,0);
    if ((uVar2 & 1) == 0) {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040d19f4;
      AnhPD_FoodOrder_MessyController__DropItemToGrid
                (**(long **)(DAT_091881a0 + 0xb8),*(undefined8 *)(param_1 + 0x18),0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_040d19f4;
        uVar3 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x10),0);
      }
      if (*(int *)(DAT_09189140 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceLedger__Finish(uVar4,3,uVar3,0,0);
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040d19f4;
      AnhPD_FoodOrder_MessyController__DespawnItem
                (**(long **)(DAT_091881a0 + 0xb8),*(undefined8 *)(param_1 + 0x18),0);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    AnhPD_FoodOrder_ServeShelfController__RequestServe(*(long *)(param_1 + 0x40),0);
    return;
  }
LAB_040d19f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

