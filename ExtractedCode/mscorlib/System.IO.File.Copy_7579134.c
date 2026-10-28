// rea decompile_all
// name: System.IO.File$$Copy
// address: 0x7579134
// body: available
// range: 0x7579134-0x75792cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75791d4 to 0x75649f4 System.IO.FileSystem$$CopyFile (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75792c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_File__Copy(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((DAT_09521a91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    DAT_09521a91 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar3 = &DAT_09222fc8;
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar1 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_092012f0);
        puVar3 = &DAT_09222fc8;
      }
      else {
        if (*(int *)(param_2 + 0x10) != 0) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_IO_Path__GetFullPath(param_1,0);
          uVar2 = System_IO_Path__GetFullPath(param_2,0);
          System_IO_FileSystem__CopyFile(uVar1,uVar2,param_3 & 1,0);
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar1 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_092012f0);
        puVar3 = &DAT_0921a5b0;
      }
      uVar4 = thunk_FUN_03fc39d4(puVar3);
      System_ArgumentException___ctor(uVar1,uVar2,uVar4,0);
      goto LAB_075792b4;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    puVar3 = &DAT_0921a5b0;
  }
  uVar2 = thunk_FUN_03fc39d4(puVar3);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09202970);
  System_ArgumentNullException___ctor(uVar1,uVar2,uVar4,0);
LAB_075792b4:
  uVar2 = thunk_FUN_03fc39d4(&DAT_091cc1b8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar1,uVar2);
}

