// rea decompile_all
// name: MessagePack.SipHash$$GetKey
// address: 0x73a4e08
// body: available
// range: 0x73a4e08-0x73a4fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a4fdc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_SipHash__GetKey(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((DAT_09520b81 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520b81 = 1;
  }
  if ((int)param_3 == 0x10) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (DAT_09520c0d == '\0') {
      FUN_03f5c2a4(&DAT_091d3060);
      DAT_09520c0d = '\x01';
    }
    if (DAT_09520c0e == '\0') {
      FUN_03f5c2a4(&DAT_091d3028);
      FUN_03f5c2a4(&DAT_091ba928);
      DAT_09520c0e = '\x01';
    }
    puVar2 = (ulong *)FUN_04c072b0(param_2,param_3,DAT_091d3028);
    lVar1 = DAT_091ba910;
    *puVar2 = uVar6 ^ 0x736f6d6570736575;
    if ((*(ushort *)(*(long *)(lVar1 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uVar6 = *(ulong *)(param_1 + 0x18);
    if (DAT_09520c0d == '\0') {
      FUN_03f5c2a4(&DAT_091d3060);
      DAT_09520c0d = '\x01';
    }
    if (DAT_09520c0e == '\0') {
      FUN_03f5c2a4(&DAT_091d3028);
      FUN_03f5c2a4(&DAT_091ba928);
      DAT_09520c0e = '\x01';
    }
    puVar2 = (ulong *)FUN_04c072b0(param_2 + 8,8,DAT_091d3028);
    *puVar2 = uVar6 ^ 0x646f72616e646f6d;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_0920d218);
  uVar5 = thunk_FUN_03fc39d4(&DAT_0921df98);
  System_ArgumentException___ctor(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d9218);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

