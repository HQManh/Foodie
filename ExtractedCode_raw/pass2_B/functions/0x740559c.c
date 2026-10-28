// rea decompile_all
// name: Mono.Security.Cryptography.MD2Managed$$HashFinal
// address: 0x740559c
// body: available
// range: 0x740559c-0x740568b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7405674 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7405688 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Security_Cryptography_MD2Managed__HashFinal(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = param_1;
  if ((DAT_09520eb9 & 1) == 0) {
    plVar2 = (long *)FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520eb9 = 1;
  }
  iVar1 = 0x10 - (int)param_1[8];
  if (0 < iVar1) {
    uVar3 = Mono_Security_Cryptography_MD2Managed__Padding(plVar2,iVar1);
    (**(code **)(*param_1 + 0x238))(param_1,uVar3,0,iVar1,*(undefined8 *)(*param_1 + 0x240));
  }
  (**(code **)(*param_1 + 0x238))(param_1,param_1[6],0,0x10,*(undefined8 *)(*param_1 + 0x240));
  if (param_1[5] != 0) {
    lVar4 = System_Array__Clone(param_1[5],0);
    (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    uVar3 = DAT_0917fc88;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_03f99350(lVar4,DAT_0917fc88);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar4,uVar3);
      }
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

