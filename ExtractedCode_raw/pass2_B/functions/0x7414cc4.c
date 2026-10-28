// rea decompile_all
// name: Mono.Xml.SmallXmlParser$$ReadCharacters
// address: 0x7414cc4
// body: available
// range: 0x7414cc4-0x7414d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7414d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Xml_SmallXmlParser__ReadCharacters(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x48) = 0;
  while (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if (iVar1 == 0x26) {
      Mono_Xml_SmallXmlParser__Read(param_1);
      Mono_Xml_SmallXmlParser__ReadReference(param_1);
    }
    else {
      if ((iVar1 == -1) || (iVar1 == 0x3c)) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x38);
      uVar2 = Mono_Xml_SmallXmlParser__Read(param_1);
      if (lVar4 == 0) break;
      System_Text_StringBuilder__Append(lVar4,uVar2,0);
    }
    plVar3 = *(long **)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

