// rea decompile_all
// name: System.AppDomain$$InvokeInDomainByID
// address: 0x75fbc8c
// body: available
// range: 0x75fbc8c-0x75fbdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75fbda4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fbdac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fbdb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75fbdc8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075fbda8) */

undefined8
System_AppDomain__InvokeInDomainByID
          (undefined4 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long local_48;
  char local_3c;
  undefined8 local_38;
  
  if ((DAT_09521f84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a3b8);
    DAT_09521f84 = 1;
  }
  local_38 = 0;
  local_3c = 0;
  local_48 = 0;
  local_38 = FUN_03f6aadc();
  local_3c = 0;
  FUN_03f6ae84(param_1);
  local_3c = '\x01';
  FUN_03f6ab24(param_1);
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(DAT_0918a3b8 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) ==
        DAT_0918a3b8)) {
      uVar2 = thunk_FUN_03f65778(param_2,param_3,param_4,&local_48,0);
      lVar1 = local_48;
      if (local_48 == 0) {
        FUN_03f6ab0c(local_38);
        if (local_3c != '\0') {
          FUN_03f6ae6c();
        }
        return uVar2;
      }
      uVar2 = thunk_FUN_03fc39d4(&DAT_091bfdd8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(lVar1,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

