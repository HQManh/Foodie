// rea decompile_all
// name: FUN_03fd489c
// address: 0x3fd489c
// body: available
// range: 0x3fd489c-0x3fd4a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd4900 to 0x3fd44b8 FUN_03fd44b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fd4904 to 0x3fd45a4 FUN_03fd45a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fd4908 to 0x3fd46d8 FUN_03fd46d8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd489c(ulong param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar2 = DAT_09535c68;
  plVar6 = DAT_09535c70;
  if ((*(long *)(param_2 + 0x28) != 0) && (*(long *)(param_2 + 0x38) != 0)) {
    uVar4 = *(ulong *)(param_2 + 0x20);
    DAT_09748750 = DAT_09748750 + 1;
    DAT_0974875c = 1;
    uVar5 = uVar4 >> 4;
    uVar1 = param_1;
    if (uVar4 < 0x801) {
      uVar1 = (param_1 - uVar4) + 0x1000;
    }
    if (uVar5 == 4) {
      FUN_03fd46d8();
      return;
    }
    if (uVar5 == 2) {
      FUN_03fd45a4();
      return;
    }
    if (uVar5 == 1) {
      FUN_03fd44b8();
      return;
    }
    if (param_1 <= uVar1) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        if (((*(ulong *)(param_2 + (uVar8 >> 6) * 8 + 0x40) >> (uVar8 & 0x3f) & 1) != 0) &&
           (lVar9 = *(long *)(param_2 + 0x28), lVar9 != 0)) {
          plVar3 = plVar6 + 2;
          if (plVar2 <= plVar6 + 2) {
            DAT_09748728 = 5;
            DAT_09748758 = 1;
            if (DAT_09535be0 != 0) {
              FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
            }
            plVar3 = plVar6 + -0x3fe;
          }
          plVar6 = plVar3;
          *plVar6 = param_1 + lVar7;
          plVar6[1] = lVar9;
        }
        lVar7 = lVar7 + uVar4;
        uVar8 = uVar8 + uVar5;
      } while (param_1 + lVar7 <= uVar1);
    }
  }
  DAT_09535c70 = plVar6;
  return;
}

