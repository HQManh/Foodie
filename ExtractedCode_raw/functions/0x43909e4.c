// rea decompile_all
// name: CakeOrder.InGame.LevelBaseCakeOrderAbstract$$ProcessBoosterEffect
// address: 0x43909e4
// body: available
// range: 0x43909e4-0x4390b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4390b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelBaseCakeOrderAbstract__ProcessBoosterEffect(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_09517a35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174b98);
    FUN_03f5c2a4(&DAT_091b8e98);
    FUN_03f5c2a4(&DAT_091b8ea8);
    FUN_03f5c2a4(&DAT_091eca88);
    FUN_03f5c2a4(&DAT_09192350);
    DAT_09517a35 = 1;
  }
  lVar3 = param_1[0x17];
  while (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x20) < 1) {
      return;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_09192350);
    System_Object___ctor(lVar3,0);
    if (lVar3 == 0) break;
    *(long *)(lVar3 + 0x18) = (long)param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
    if (param_1[0x17] == 0) break;
    lVar1 = FUN_05e2d168(param_1[0x17],DAT_091b8e98);
    plVar4 = (long *)(lVar3 + 0x10);
    *plVar4 = lVar1;
    thunk_FUN_03f5d7b8(plVar4,lVar1);
    if (*plVar4 == 0) break;
    uVar5 = *(undefined8 *)(*plVar4 + 0x10);
    uVar2 = thunk_FUN_03f9944c(DAT_09174b98);
    FUN_070a8c30(uVar2,lVar3,DAT_091eca88,0);
    (**(code **)(*param_1 + 600))(param_1,uVar5,uVar2,*(undefined8 *)(*param_1 + 0x260));
    lVar3 = param_1[0x10];
    if (lVar3 != 0) {
      if (*plVar4 == 0) break;
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(*plVar4 + 0x10),
                 *(undefined8 *)(lVar3 + 0x28));
    }
    lVar3 = param_1[0x17];
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

