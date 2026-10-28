// rea decompile_all
// name: FUN_04035390
// address: 0x4035390
// body: available
// range: 0x4035390-0x403556b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4035560 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4035564 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4035568 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_04035390(long *param_1,undefined8 *param_2)

{
  long *__src;
  char *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  size_t __n;
  undefined1 uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  
  pcVar6 = (char *)*param_1;
  pcVar8 = (char *)param_1[1];
  if (pcVar6 != pcVar8) {
    __src = param_1 + 0x28;
    do {
      while( true ) {
        if (*pcVar6 != 'W') {
          return 0;
        }
        pcVar1 = pcVar6 + 1;
        *param_1 = (long)pcVar1;
        if ((pcVar1 == pcVar8) || (*pcVar1 != 'P')) {
          uVar9 = 0;
          lVar3 = FUN_04035818(param_1);
        }
        else {
          uVar9 = 1;
          *param_1 = (long)(pcVar6 + 2);
          lVar3 = FUN_04035818(param_1);
        }
        if (lVar3 == 0) {
          return 1;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = pvVar11;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        uVar5 = *param_2;
        *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
        puVar10 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar10 = &UNK_08fae2f8;
        *(undefined8 *)((long)puVar4 + lVar7 + 0x20) = uVar5;
        *(long *)((long)puVar4 + lVar7 + 0x28) = lVar3;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x1b;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x30) = uVar9;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
        *param_2 = puVar10;
        plVar2 = (long *)param_1[0x26];
        if (plVar2 == (long *)param_1[0x27]) break;
        param_1[0x26] = (long)(plVar2 + 1);
        *plVar2 = (long)puVar10;
        pcVar6 = (char *)*param_1;
        pcVar8 = (char *)param_1[1];
        if (pcVar6 == pcVar8) {
          return 0;
        }
      }
      __ptr = (long *)param_1[0x25];
      __n = (long)plVar2 - (long)__ptr;
      if (__ptr == __src) {
        pvVar11 = malloc(__n * 2);
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar2 != __src) {
          memcpy(pvVar11,__src,__n);
        }
        param_1[0x25] = (long)pvVar11;
      }
      else {
        pvVar11 = realloc(__ptr,__n * 2);
        param_1[0x25] = (long)pvVar11;
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      param_1[0x26] = (long)((undefined8 *)((long)pvVar11 + __n) + 1);
      param_1[0x27] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
      *(undefined8 *)((long)pvVar11 + __n) = puVar10;
      pcVar6 = (char *)*param_1;
      pcVar8 = (char *)param_1[1];
    } while (pcVar6 != pcVar8);
  }
  return 0;
}

