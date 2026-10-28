// rea decompile_all
// name: Mono.Xml.SmallXmlParser$$ReadReference
// address: 0x7413cb4
// body: available
// range: 0x7413cb4-0x7413e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7413d40 to 0x7414d4c Mono.Xml.SmallXmlParser$$ReadCharacterReference (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7413e40 to 0x743e92c System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7413e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7413e78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Xml_SmallXmlParser__ReadReference(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09520f37 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921c898);
    FUN_03f5c2a4(&DAT_0921ec80);
    FUN_03f5c2a4(&DAT_09217798);
    FUN_03f5c2a4(&DAT_09221458);
    FUN_03f5c2a4(&DAT_09217548);
    DAT_09520f37 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
    if (iVar1 == 0x23) {
      Mono_Xml_SmallXmlParser__Read(param_1);
      Mono_Xml_SmallXmlParser__ReadCharacterReference(param_1);
      return;
    }
    uVar3 = Mono_Xml_SmallXmlParser__ReadName(param_1);
    Mono_Xml_SmallXmlParser__Expect(param_1,0x3b);
    uVar4 = System_String__op_Equality(uVar3,DAT_09217548,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = System_String__op_Equality(uVar3,DAT_09221458,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_String__op_Equality(uVar3,DAT_09217798,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = System_String__op_Equality(uVar3,DAT_0921ec80,0);
          if ((uVar4 & 1) == 0) {
            uVar4 = System_String__op_Equality(uVar3,DAT_0921c898,0);
            if ((uVar4 & 1) == 0) {
              uVar3 = thunk_FUN_03fc39d4(&DAT_092033e8);
              uVar3 = Mono_Xml_SmallXmlParser__Error(param_1,uVar3);
              uVar6 = thunk_FUN_03fc39d4(&DAT_091d9490);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,uVar6);
            }
            lVar5 = *(long *)(param_1 + 0x38);
            if (lVar5 == 0) goto LAB_07413e44;
            uVar3 = 0x3e;
          }
          else {
            lVar5 = *(long *)(param_1 + 0x38);
            if (lVar5 == 0) goto LAB_07413e44;
            uVar3 = 0x3c;
          }
        }
        else {
          lVar5 = *(long *)(param_1 + 0x38);
          if (lVar5 == 0) goto LAB_07413e44;
          uVar3 = 0x27;
        }
      }
      else {
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 == 0) goto LAB_07413e44;
        uVar3 = 0x22;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 == 0) goto LAB_07413e44;
      uVar3 = 0x26;
    }
    System_Text_StringBuilder__Append(lVar5,uVar3,0);
    return;
  }
LAB_07413e44:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

