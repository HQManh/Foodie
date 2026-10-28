// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin.RewardMilestone$$GetRewards
// address: 0x42eb7b4
// body: available
// range: 0x42eb7b4-0x42eb93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42eb928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42eb934 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42eb938 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin_RewardMilestone__GetRewards(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_09517487 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c03f0);
    FUN_03f5c2a4(&DAT_09180b20);
    FUN_03f5c2a4(&DAT_091924d0);
    DAT_09517487 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if ((plVar5 == (long *)0x0) || (plVar5[3] == 0)) {
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x18),0);
    lVar2 = DAT_091c03f0;
    if (((uVar1 & 1) == 0) && (0 < *(int *)(param_1 + 0x20))) {
      plVar5 = (long *)FUN_03f5c394(DAT_09180b20,1);
      lVar2 = thunk_FUN_03f9944c(DAT_091924d0);
      System_Object___ctor(lVar2,0);
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x18);
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10));
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_1 + 0x20);
        if (plVar5 != (long *)0x0) {
          lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar3 == 0) {
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if ((int)plVar5[3] != 0) {
            plVar5[4] = lVar2;
            thunk_FUN_03f5d7b8(plVar5 + 4,lVar2);
            return plVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(DAT_091c03f0 + 0x38);
    if (lVar3 == 0) {
      FUN_03f95ac8(DAT_091c03f0);
      lVar3 = *(long *)(lVar2 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    plVar5 = (long *)**(long **)(lVar2 + 0xb8);
  }
  return plVar5;
}

