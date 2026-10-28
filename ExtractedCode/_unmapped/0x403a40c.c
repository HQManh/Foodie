// rea decompile_all
// name: FUN_0403a40c
// address: 0x403a40c
// body: available
// range: 0x403a40c-0x403a69f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403a524 to 0x403770c FUN_0403770c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x403a69c to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0403a40c(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (1 < (ulong)(param_1[1] - (long)pcVar1))) &&
     (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0403770c();
      if (((lVar3 != 0) && (lVar4 = FUN_0403770c(param_1), lVar4 != 0)) &&
         (lVar6 = FUN_0403a40c(param_1), lVar6 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) {
LAB_0403a69c:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
        *(undefined **)((long)puVar5 + lVar7 + 0x10) = &UNK_08faf5b8;
        *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x52;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(long *)((long)puVar5 + lVar7 + 0x30) = lVar6;
        *(ushort *)((long)puVar5 + lVar7 + 0x19) =
             *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x540;
        return;
      }
    }
    else if (cVar2 == 'x') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0403770c();
      if ((lVar3 != 0) && (lVar4 = FUN_0403a40c(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_0403a69c;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined **)((long)puVar5 + lVar6 + 0x10) = &UNK_08faf548;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x51;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(ushort *)((long)puVar5 + lVar6 + 0x19) =
             *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 1;
        return;
      }
    }
    else {
      if (cVar2 != 'i') goto LAB_0403a510;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_04035818();
      if ((lVar3 != 0) && (lVar4 = FUN_0403a40c(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_0403a69c;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined **)((long)puVar5 + lVar6 + 0x10) = &UNK_08faf548;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x51;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 0;
        *(ushort *)((long)puVar5 + lVar6 + 0x19) =
             *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
      }
    }
    return;
  }
LAB_0403a510:
  FUN_0403770c();
  return;
}

