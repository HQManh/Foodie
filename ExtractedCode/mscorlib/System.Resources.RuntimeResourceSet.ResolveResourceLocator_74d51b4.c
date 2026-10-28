// rea decompile_all
// name: System.Resources.RuntimeResourceSet$$ResolveResourceLocator
// address: 0x74d51b4
// body: available
// range: 0x74d51b4-0x74d52f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d52ec to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d52f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d52f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074d52a0) */
/* WARNING: Removing unreachable block (ram,0x074d52e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Resources_RuntimeResourceSet__ResolveResourceLocator
               (long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,uint param_6
               )

{
  char local_64 [4];
  undefined8 local_60;
  int local_54;
  long local_50;
  ulong uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  if ((DAT_09521555 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fd90);
    DAT_09521555 = 1;
  }
  local_54 = 0;
  if (param_2 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x10);
    local_64[0] = '\0';
    System_Threading_Monitor__Enter(local_60,local_64,0);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_2 = System_Resources_ResourceReader__LoadObject
                        (*(long *)(param_1 + 0x30),param_3 & 0xffffffff,&local_54);
    if (local_64[0] != '\0') {
      System_Threading_Monitor__Exit(local_60,0);
    }
    if (((param_6 & 1) == 0) && (local_54 < 0x11)) {
      local_50 = param_2;
      thunk_FUN_03f5d7b8(&local_50,param_2);
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fdf2cc(param_5,param_4,local_50,uStack_48,DAT_0919fd90);
    }
  }
  return param_2;
}

