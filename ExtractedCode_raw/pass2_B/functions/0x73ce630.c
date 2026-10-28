// rea decompile_all
// name: FUN_073ce630
// address: 0x73ce630
// body: available
// range: 0x73ce630-0x73ce6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ce6f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ce6f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_073ce630(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_3 < param_2) {
    uVar1 = *(byte *)(param_1 + (int)param_3) - 0x30;
    if ((uVar1 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
      if (param_2 <= param_3 + 1) goto LAB_073ce6f4;
      uVar5 = (uint)*(byte *)(param_1 + (int)(param_3 + 1));
      uVar2 = uVar5 - 0x30;
      if ((uVar2 < 0x37) && ((0x7e0000007e03ffU >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
        return uVar5 + ((uint)(byte)(&DAT_01b5205c)[(ulong)uVar1 & 0xff] +
                       (uint)*(byte *)(param_1 + (int)param_3)) * 0x10 +
               (uint)(byte)(&DAT_01b5205c)[(ulong)uVar2 & 0xff];
      }
    }
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09205218);
    MessagePack_MessagePackSerializationException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ce4c8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
LAB_073ce6f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

