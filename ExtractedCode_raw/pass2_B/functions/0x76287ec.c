// rea decompile_all
// name: System.Threading.ThreadPool$$RegisterWaitForSingleObject
// address: 0x76287ec
// body: available
// range: 0x76287ec-0x762891b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7628918 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ThreadPool__RegisterWaitForSingleObject
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_38;
  
  local_38 = param_4;
  if ((DAT_0952218c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_0952218c = 1;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar6 = (double)System_TimeSpan__get_TotalMilliseconds(&local_38,0);
  lVar1 = -0x8000000000000000;
  if (dVar6 != INFINITY) {
    lVar1 = (long)dVar6;
  }
  if (lVar1 < -1) {
    puVar2 = &DAT_09209198;
  }
  else {
    if (lVar1 < 0x80000000) {
      System_Threading_ThreadPool__RegisterWaitForSingleObject
                (param_1,param_2,param_3,lVar1,param_5 & 1,param_6,1);
      return;
    }
    puVar2 = &DAT_091fbe28;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  uVar3 = System_Environment__GetResourceString(uVar3,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_09223ef8);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091db4f0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

