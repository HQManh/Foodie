// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseUnquotedProperty
// address: 0x7654af0
// body: available
// range: 0x7654af0-0x7654bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7654b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7654ba8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7654bdc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ParseUnquotedProperty(long param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    do {
      uVar3 = *(uint *)(param_1 + 0x8c);
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      sVar2 = *(short *)(lVar8 + (long)(int)uVar3 * 2 + 0x20);
      if (sVar2 == 0) {
        if (*(uint *)(param_1 + 0x88) != uVar3) {
          local_30 = 0;
          uStack_28 = 0;
          Newtonsoft_Json_Utilities_StringReference___ctor(&local_30,lVar8,iVar1,uVar3 - iVar1,0);
          *(undefined8 *)(param_1 + 0xb8) = uStack_28;
          *(undefined8 *)(param_1 + 0xb0) = local_30;
          thunk_FUN_03f5d7b8(param_1 + 0xb0,0);
          return;
        }
        iVar4 = Newtonsoft_Json_JsonTextReader__ReadData(param_1,1,0);
        if (iVar4 == 0) {
          uVar6 = thunk_FUN_03fc39d4(&DAT_09211d60);
          uVar6 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar6);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091d1c78);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar7);
        }
      }
      else {
        uVar5 = Newtonsoft_Json_JsonTextReader__ReadUnquotedPropertyReportIfDone
                          (param_1,sVar2,iVar1);
        if ((uVar5 & 1) != 0) {
          return;
        }
      }
      lVar8 = *(long *)(param_1 + 0x80);
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

