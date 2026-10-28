// rea decompile_all
// name: System.DateTime$$.ctor
// address: 0x7593cbc
// body: available
// range: 0x7593cbc-0x7593e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7593e3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7593e84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTime___ctor
               (ulong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_58;
  undefined4 local_54;
  
  if ((DAT_09521b79 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521b79 = 1;
  }
  if (999 < param_8) {
    local_54 = 0;
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_54);
    local_58 = 999;
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_58);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09212b18);
    uVar5 = SR__Format(uVar4,uVar5,uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921f678);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c78d0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar5);
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_DateTime__DateToTicks(param_2,param_3,param_4);
  lVar3 = System_DateTime__TimeToTicks(param_5,param_6,param_7);
  uVar1 = lVar2 + lVar3 + (ulong)(param_8 * 10000);
  if (uVar1 < 0x2bca2875f4374000) {
    *param_1 = uVar1;
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  uVar6 = thunk_FUN_03fc39d4(&DAT_091fecb0);
  System_ArgumentException___ctor(uVar5,uVar6,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c78d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

