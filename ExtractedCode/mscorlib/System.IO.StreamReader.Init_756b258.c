// rea decompile_all
// name: System.IO.StreamReader$$Init
// address: 0x756b258
// body: available
// range: 0x756b258-0x756b3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756b3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamReader__Init
               (long param_1,undefined8 param_2,long *param_3,byte param_4,int param_5,byte param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int extraout_w1;
  
  if ((DAT_09521a12 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_09521a12 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_2);
  *(long *)(param_1 + 0x20) = (long)param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_3);
  if (param_3 != (long *)0x0) {
    uVar2 = (**(code **)(*param_3 + 0x328))(param_3,*(undefined8 *)(*param_3 + 0x330));
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8();
    if (param_5 < 0x81) {
      param_5 = 0x80;
    }
    uVar2 = FUN_03f5c394(DAT_0917fc88,param_5);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar1 = (**(code **)(*param_3 + 0x358))(param_3,param_5,*(undefined8 *)(*param_3 + 0x360));
    uVar2 = DAT_0917fcc8;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar2 = FUN_03f5c394(uVar2);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar2);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(byte *)(param_1 + 0x54) = param_4 & 1;
    (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(bool *)(param_1 + 0x55) = 0 < extraout_w1;
    *(byte *)(param_1 + 0x57) = (param_6 ^ 0xff) & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

