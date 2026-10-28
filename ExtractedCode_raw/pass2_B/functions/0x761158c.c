// rea decompile_all
// name: System.WindowsConsoleDriver$$ReadKey
// address: 0x761158c
// body: available
// range: 0x761158c-0x76116cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76116c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_WindowsConsoleDriver__ReadKey(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_18;
  
  local_18 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  do {
    uVar4 = System_WindowsConsoleDriver__ReadConsoleInput(uVar3,&local_48,1,(long)&local_18 + 4);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09187dd0);
      FUN_039afb80();
      uVar2 = System_Runtime_InteropServices_Marshal__GetLastWin32Error(0);
      local_18 = CONCAT44(local_18._4_4_,uVar2);
      uVar3 = System_Int32__ToString(&local_18,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09201848);
      uVar3 = System_String__Concat(uVar5,uVar3,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar5 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar5,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091df358);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar3);
    }
    if (((local_48 & 0x10000) != 0) && ((short)local_48 == 1)) {
      if (local_48._6_2_ != 0x14) {
        iVar1 = (int)local_48._6_2_;
        if ((2 < iVar1 - 0x10U) && (1 < iVar1 - 0x90U)) {
          local_30 = 0;
          local_28 = 0;
          System_ConsoleKeyInfo___ctor
                    (&local_30,uStack_40._2_2_,iVar1,uStack_40._4_4_ >> 4 & 1,
                     (uStack_40 & 0x300000000) != 0,(uStack_40 & 0xc00000000) != 0,0);
          auVar6._8_4_ = local_28;
          auVar6._0_8_ = local_30;
          auVar6._12_4_ = 0;
          return auVar6;
        }
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  } while( true );
}

