// rea decompile_all
// name: System.Globalization.TextInfo$$OnDeserialized
// address: 0x75394a8
// body: available
// range: 0x75394a8-0x75394ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_TextInfo__OnDeserialized(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if ((DAT_095218a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09217908);
    DAT_095218a9 = 1;
  }
  plVar3 = (long *)(param_1 + 0x20);
  if (*plVar3 != 0) {
    return;
  }
  plVar4 = (long *)(param_1 + 0x18);
  if (*plVar4 == 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    if ((*(long *)(param_1 + 0x38) == 0) &&
       (iVar1 = *(int *)(param_1 + 0x44), lVar2 = DAT_09217908, iVar1 != 0)) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_Globalization_CultureInfo__GetCultureInfo(iVar1,0);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0xc0) == 0)) goto LAB_07537fd8;
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
    }
    *plVar4 = lVar2;
    thunk_FUN_03f5d7b8(plVar4);
  }
  lVar2 = *plVar4;
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_Globalization_CultureInfo__GetCultureInfo(lVar2,0);
  if (lVar2 != 0) {
    *plVar3 = *(long *)(lVar2 + 0xc0);
    thunk_FUN_03f5d7b8(plVar3);
    if (*plVar3 != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*plVar3 + 0x58);
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28));
      return;
    }
  }
LAB_07537fd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

