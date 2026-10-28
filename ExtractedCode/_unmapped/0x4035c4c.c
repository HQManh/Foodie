// rea decompile_all
// name: FUN_04035c4c
// address: 0x4035c4c
// body: available
// range: 0x4035c4c-0x4035dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4035cd8 to 0x4036c00 FUN_04036c00 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4035d98 to 0x4036c00 FUN_04036c00 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4035dc8 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_04035c4c(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  short *psVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  psVar4 = (short *)*param_1;
  if (((ulong)(param_1[1] - (long)psVar4) < 2) || (*psVar4 != 0x7453)) {
    puVar5 = (undefined8 *)0x0;
    if ((short *)param_1[1] == psVar4) goto LAB_04035d80;
  }
  else {
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(psVar4 + 1);
    lVar2 = *(long *)((long)pvVar6 + 8);
    puVar3 = pvVar6;
    if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar2 + 0x20;
    puVar5 = (undefined8 *)((long)puVar3 + lVar2 + 0x10);
    *puVar5 = &UNK_08fae288;
    *(undefined1 *)((long)puVar3 + lVar2 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar2 + 0x19) =
         *(ushort *)((long)puVar3 + lVar2 + 0x19) & 0xf000 | 0x540;
    *(undefined **)((long)puVar3 + lVar2 + 0x20) = &UNK_01a73054;
    *(undefined8 *)((long)puVar3 + lVar2 + 0x28) = 3;
    psVar4 = (short *)*param_1;
    if ((short *)param_1[1] == psVar4) goto LAB_04035d80;
  }
  if ((char)*psVar4 == 'S') {
    lVar1 = FUN_04036924();
    lVar2 = lVar1;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 8) == '\x1b') {
        lVar2 = FUN_04036c00(param_1,param_2,puVar5);
        return lVar2;
      }
      lVar2 = 0;
      if ((param_3 != (undefined1 *)0x0) && (puVar5 == (undefined8 *)0x0)) {
        *param_3 = 1;
        lVar2 = lVar1;
      }
    }
    return lVar2;
  }
LAB_04035d80:
  lVar2 = FUN_04036c00(param_1,param_2,puVar5,0);
  return lVar2;
}

