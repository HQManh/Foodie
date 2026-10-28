// rea decompile_all
// name: System.TypeSpec$$AddName
// address: 0x76107c0
// body: available
// range: 0x76107c0-0x76108ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76108dc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76108f8 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76108fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TypeSpec__AddName(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09522045 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1228);
    FUN_03f5c2a4(&DAT_091b1220);
    FUN_03f5c2a4(&DAT_0917cee8);
    DAT_09522045 = 1;
  }
  plVar5 = (long *)(param_1 + 0x10);
  if (*plVar5 == 0) {
    lVar6 = System_TypeIdentifiers__FromDisplay(param_2,0);
    *plVar5 = lVar6;
  }
  else {
    plVar5 = (long *)(param_1 + 0x20);
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917cee8);
      FUN_057e0400(lVar6,DAT_091b1220);
      *plVar5 = lVar6;
      thunk_FUN_03f5d7b8(plVar5,lVar6);
      lVar6 = *plVar5;
      lVar3 = System_TypeIdentifiers__FromDisplay(param_2,0);
      if (lVar6 == 0) goto LAB_076108fc;
    }
    else {
      lVar3 = System_TypeIdentifiers__FromDisplay(param_2,0);
    }
    lVar2 = DAT_091b1228;
    lVar4 = *(long *)(lVar6 + 0x10);
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar4 == 0) {
LAB_076108fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
      FUN_057e0c68(lVar6,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    *plVar5 = lVar3;
  }
  thunk_FUN_03f5d7b8(plVar5);
  return;
}

