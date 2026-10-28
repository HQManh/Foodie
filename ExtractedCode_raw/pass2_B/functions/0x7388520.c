// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryWriteStringHeader
// address: 0x7388520
// body: available
// range: 0x7388520-0x7388687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7388684 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryWriteStringHeader
          (byte *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  byte bVar2;
  
  if ((DAT_09520a53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d34f8);
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520a53 = 1;
  }
  if (param_3 < 0x100) {
    if (param_3 < 0x20) {
      *param_4 = 1;
      if (param_2 < 1) {
        return 0;
      }
      bVar2 = (byte)param_3 | 0xa0;
    }
    else {
      *param_4 = 2;
      if (param_2 < 2) {
        return 0;
      }
      bVar2 = 0xd9;
      param_1[1] = (byte)param_3;
    }
    *param_1 = bVar2;
  }
  else if (param_3 >> 0x10 == 0) {
    *param_4 = 3;
    if (param_2 < 3) {
      return 0;
    }
    *param_1 = 0xda;
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if ((param_2 - 1U & 0xfffffffe) == 0) goto LAB_07388684;
    *(ushort *)(param_1 + 1) = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  }
  else {
    *param_4 = 5;
    if (param_2 < 5) {
      return 0;
    }
    *param_1 = 0xdb;
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if ((param_2 - 1U & 0xfffffffc) == 0) {
LAB_07388684:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
    *(uint *)(param_1 + 1) = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  return 1;
}

