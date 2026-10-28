// rea decompile_all
// name: System.Text.UnicodeEncoding$$Equals
// address: 0x744b66c
// body: available
// range: 0x744b66c-0x744b777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744b774 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Text_UnicodeEncoding__Equals(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_095210b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210b5 = 1;
  }
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(DAT_0918c640 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918c640 + 0x130) * 8 + -8) ==
        DAT_0918c640)) {
      iVar1 = (**(code **)(*param_1 + 0x318))(param_1,*(undefined8 *)(*param_1 + 800));
      iVar2 = (**(code **)(*param_2 + 0x318))(param_2,*(undefined8 *)(*param_2 + 800));
      if ((iVar1 == iVar2) &&
         ((*(char *)((long)param_1 + 0x3a) == *(char *)((long)param_2 + 0x3a) &&
          (*(char *)((long)param_1 + 0x39) == *(char *)((long)param_2 + 0x39))))) {
        plVar3 = (long *)param_1[5];
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x138))(plVar3,param_2[5],*(undefined8 *)(*plVar3 + 0x140))
          ;
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          plVar3 = (long *)param_1[6];
          if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0744b760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(*plVar3 + 0x138))
                              (plVar3,param_2[6],*(undefined8 *)(*plVar3 + 0x140));
            return uVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return 0;
}

