// rea decompile_all
// name: Mono.Globalization.Unicode.SortKeyBuffer$$AppendNormal
// address: 0x7419930
// body: available
// range: 0x7419930-0x7419a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7419984 to 0x741d4bc Mono.Globalization.Unicode.SortKeyBuffer$$AppendLevel5 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7419a54 to 0x741d3dc Mono.Globalization.Unicode.SortKeyBuffer$$AppendBufferPrimitive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7419a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7419a5c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SortKeyBuffer__AppendNormal
               (long param_1,undefined8 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (uint)param_2 & 0xff;
  uVar8 = 2;
  if ((param_4 & 0xff) != 0) {
    uVar8 = param_4;
  }
  uVar9 = 2;
  if ((param_5 & 0xff) != 0) {
    uVar9 = param_5;
  }
  if (uVar1 == 6) {
    if ((*(byte *)(param_1 + 0x7f) >> 5 & 1) == 0) {
      Mono_Globalization_Unicode_SortKeyBuffer__AppendLevel5(param_1,6,param_3);
      return;
    }
LAB_07419a08:
    uVar3 = Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
                      (param_1,param_2,param_1 + 0x10,param_1 + 0x58);
    lVar4 = Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
                      (uVar3,param_3,param_1 + 0x10,param_1 + 0x58);
    cVar5 = *(char *)(param_1 + 0x80);
LAB_07419a28:
    if (cVar5 == '\0') goto LAB_07419a3c;
  }
  else {
    cVar5 = *(char *)(param_1 + 0x80);
    lVar4 = param_1;
    if ((uVar1 != 1) || (cVar5 == '\0')) {
      if (((uint)param_2 & 0xff) != 1) goto LAB_07419a08;
      goto LAB_07419a28;
    }
    if (0 < *(int *)(param_1 + 0x58)) {
      lVar6 = *(long *)(param_1 + 0x18);
      uVar1 = *(int *)(param_1 + 0x5c) - 1;
      *(uint *)(param_1 + 0x5c) = uVar1;
      if (lVar6 == 0) {
LAB_07419a58:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
LAB_07419a5c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar7 = *(long *)(param_1 + 0x20);
      bVar2 = *(byte *)(lVar6 + (int)uVar1 + 0x20);
      uVar1 = *(int *)(param_1 + 0x60) - 1;
      *(uint *)(param_1 + 0x60) = uVar1;
      if (lVar7 == 0) goto LAB_07419a58;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_07419a5c;
      uVar8 = bVar2 + uVar8;
      uVar9 = (uint)*(byte *)(lVar7 + (int)uVar1 + 0x20);
    }
  }
  lVar4 = Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
                    (lVar4,uVar8,param_1 + 0x18,param_1 + 0x5c);
LAB_07419a3c:
  Mono_Globalization_Unicode_SortKeyBuffer__AppendBufferPrimitive
            (lVar4,uVar9,param_1 + 0x20,param_1 + 0x60);
  return;
}

