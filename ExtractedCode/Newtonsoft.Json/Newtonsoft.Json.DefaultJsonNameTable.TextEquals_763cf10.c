// rea decompile_all
// name: Newtonsoft.Json.DefaultJsonNameTable$$TextEquals
// address: 0x763cf10
// body: available
// range: 0x763cf10-0x763cfcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763cfc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763cfc8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_DefaultJsonNameTable__TextEquals
               (long param_1,long param_2,ulong param_3,int param_4)

{
  bool bVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) == param_4) {
      if (param_4 < 1) {
        bVar1 = true;
      }
      else {
        lVar4 = param_3 << 0x20;
        uVar3 = 0;
        do {
          sVar2 = System_String__get_Chars(param_1,uVar3 & 0xffffffff,0);
          if (param_2 == 0) goto LAB_0763cfc4;
          if ((ulong)*(uint *)(param_2 + 0x18) <= (param_3 & 0xffffffff) + uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          bVar1 = sVar2 == *(short *)(param_2 + (lVar4 >> 0x1f) + 0x20);
          if (!bVar1) {
            return bVar1;
          }
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 0x100000000;
        } while ((long)uVar3 < (long)*(int *)(param_1 + 0x10));
      }
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0763cfc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

