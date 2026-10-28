// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$ReadArrayElementIntoByteArrayReportDone
// address: 0x7645314
// body: available
// range: 0x7645314-0x7645527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7645520 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7645524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_JsonReader__ReadArrayElementIntoByteArrayReportDone(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_24;
  
  if ((DAT_09522306 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091ab728);
    DAT_09522306 = 1;
  }
  iVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (iVar3 < 6) {
    if (iVar3 == 5) {
      return 0;
    }
    if (iVar3 == 0) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_09211d20);
      goto LAB_076454fc;
    }
  }
  else {
    if (iVar3 == 7) {
      uVar5 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      uVar4 = System_Convert__ToByte(uVar5,uVar6,0);
      lVar2 = DAT_091ab728;
      if (param_2 != 0) {
        lVar8 = *(long *)(param_2 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(param_2 + 0x18);
          if (*(uint *)(lVar8 + 0x18) <= uVar1) {
            FUN_057217ac(param_2,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return 0;
          }
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(char *)(lVar8 + (int)uVar1 + 0x20) = (char)uVar4;
          return 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar3 == 0xe) {
      return 1;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  local_24 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  uVar6 = thunk_FUN_03fc39d4(&DAT_09187478);
  uVar6 = FUN_03f5c42c(uVar6,&local_24);
  uVar7 = thunk_FUN_03fc39d4(&DAT_09211f18);
  uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
LAB_076454fc:
  uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d1900);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

