// rea decompile_all
// name: FUN_040367e0
// address: 0x40367e0
// body: available
// range: 0x40367e0-0x4036923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4036920 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_040367e0(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      lVar3 = FUN_0403770c();
      puVar6 = (undefined8 *)0x0;
      if (lVar3 != 0) {
        pcVar2 = (char *)*param_1;
        if (pcVar2 == (char *)param_1[1]) {
          return (undefined8 *)0x0;
        }
        if (*pcVar2 != 'E') {
          return (undefined8 *)0x0;
        }
        pvVar7 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar2 + 1);
        lVar5 = *(long *)((long)pvVar7 + 8);
        puVar4 = pvVar7;
        if (lVar5 - 0xfb0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar5 = 0;
          *puVar4 = pvVar7;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar5 + 0x40;
        puVar6 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar6 = &UNK_08faec88;
        *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x3c;
        *(long *)((long)puVar4 + lVar5 + 0x30) = lVar3;
        *(char **)((long)puVar4 + lVar5 + 0x20) = "decltype";
        *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = 8;
        *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = 0;
        *(undefined8 *)((long)puVar4 + lVar5 + 0x40) = 0;
        *(ushort *)((long)puVar4 + lVar5 + 0x19) =
             *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
      }
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}

