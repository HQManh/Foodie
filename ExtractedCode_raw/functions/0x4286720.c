// rea decompile_all
// name: CakeOrder.InGame.LevelSaveMeControl$$HandleBeltDeadlock
// address: 0x4286720
// body: available
// range: 0x4286720-0x428681b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4286814 to 0x4286e00 CakeOrder.InGame.LevelSaveMeControl$$Lose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4286818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelSaveMeControl__HandleBeltDeadlock(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_09517143 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517143 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      if ((lVar2 == 0) || (plVar4 = *(long **)(lVar2 + 0x28), plVar4 == (long *)0x0))
      goto LAB_04286818;
      if ((int)plVar4[10] < 5) {
        if (*(long *)(lVar2 + 0x38) != 0) {
          *(undefined4 *)(*(long *)(lVar2 + 0x38) + 0x14) = 7;
        }
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,plVar4,*(undefined8 *)(*plVar4 + 0x2c0),0);
        uVar1 = CakeOrder_InGame_LevelSaveMeControl__ShowSaveMe(param_1,2,0x3ed,uVar3);
        if ((uVar1 & 1) == 0) {
          CakeOrder_InGame_LevelSaveMeControl__Lose(param_1);
          return;
        }
      }
    }
    return;
  }
LAB_04286818:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

