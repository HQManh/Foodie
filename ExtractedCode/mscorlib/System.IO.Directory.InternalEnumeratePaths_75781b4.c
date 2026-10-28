// rea decompile_all
// name: System.IO.Directory$$InternalEnumeratePaths
// address: 0x75781b4
// body: available
// range: 0x75781b4-0x7578373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757833c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Directory__InternalEnumeratePaths
               (long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_40;
  long lStack_38;
  
  local_40 = param_2;
  lStack_38 = param_1;
  if ((DAT_09521a82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184590);
    DAT_09521a82 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar3 = &DAT_09220b48;
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(DAT_09184590 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_IO_Enumeration_FileSystemEnumerableFactory__NormalizeInputs
                (&lStack_38,&local_40,param_4,0);
      lVar2 = lStack_38;
      lVar1 = local_40;
      if (param_3 == 3) {
        if (*(int *)(DAT_09184590 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_IO_Enumeration_FileSystemEnumerableFactory__UserEntries(lVar2,lVar1,param_4,0);
        return;
      }
      if (param_3 == 2) {
        if (*(int *)(DAT_09184590 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_IO_Enumeration_FileSystemEnumerableFactory__UserDirectories(lVar2,lVar1,param_4,0);
        return;
      }
      if (param_3 == 1) {
        if (*(int *)(DAT_09184590 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_IO_Enumeration_FileSystemEnumerableFactory__UserFiles(lVar2,lVar1,param_4,0);
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_092220f0);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,0);
      goto LAB_07578328;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar3 = (undefined8 *)&DAT_092220e8;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar3);
  System_ArgumentNullException___ctor(uVar4,uVar5,0);
LAB_07578328:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c8608);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

