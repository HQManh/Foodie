// rea decompile_all
// name: System.TypeSpec$$AddModifier
// address: 0x7610908
// body: available
// range: 0x7610908-0x7610a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76109e0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7610a00 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7610a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TypeSpec__AddModifier(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_09522046 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae8b0);
    FUN_03f5c2a4(&DAT_091ae8a8);
    FUN_03f5c2a4(&DAT_0917c778);
    DAT_09522046 = 1;
  }
  plVar6 = (long *)(param_1 + 0x30);
  lVar4 = *plVar6;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917c778);
    FUN_057e0400(lVar4,DAT_091ae8a8);
    *plVar6 = lVar4;
    thunk_FUN_03f5d7b8(plVar6,lVar4);
    lVar4 = *plVar6;
    if (lVar4 == 0) goto LAB_07610a04;
  }
  lVar2 = DAT_091ae8b0;
  lVar5 = *(long *)(lVar4 + 0x10);
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      puVar3 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar3 = param_2;
      thunk_FUN_03f5d7b8(puVar3,param_2);
      return;
    }
    FUN_057e0c68(lVar4,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_07610a04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

