// rea decompile_all
// name: System.IO.File$$Move
// address: 0x757a8a0
// body: available
// range: 0x757a8a0-0x757aad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757a984 to 0x75650c0 System.IO.FileSystem$$MoveFile (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x757aa78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757aad0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_File__Move(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((DAT_09521a9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    DAT_09521a9f = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09222fc8;
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar2 = thunk_FUN_03f9944c();
        uVar3 = thunk_FUN_03fc39d4(&DAT_092012f0);
        puVar5 = &DAT_09222fc8;
      }
      else {
        if (*(int *)(param_2 + 0x10) != 0) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = System_IO_Path__GetFullPath(param_1,0);
          uVar2 = System_IO_Path__GetFullPath(param_2,0);
          if (DAT_09519f66 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09519f66 = '\x01';
          }
          if (lVar1 == 0) {
            uVar3 = 0;
            uVar7 = 0;
          }
          else {
            uVar3 = System_String__GetRawStringData(lVar1,0);
            uVar7 = *(undefined4 *)(lVar1 + 0x10);
          }
          uVar4 = System_IO_FileSystem__FileExists(uVar3,uVar7,0);
          if ((uVar4 & 1) != 0) {
            System_IO_FileSystem__MoveFile(lVar1,uVar2,0);
            return;
          }
          uVar2 = thunk_FUN_03fc39d4(&DAT_091ff560);
          uVar2 = SR__Format(uVar2,lVar1,0);
          thunk_FUN_03fc39d4(&DAT_09184570);
          uVar3 = thunk_FUN_03f9944c();
          System_IO_FileNotFoundException___ctor(uVar3,uVar2,lVar1,0);
          uVar2 = thunk_FUN_03fc39d4(&DAT_091cc1c8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar2);
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar2 = thunk_FUN_03f9944c();
        uVar3 = thunk_FUN_03fc39d4(&DAT_092012f0);
        puVar5 = &DAT_0921a5b0;
      }
      uVar6 = thunk_FUN_03fc39d4(puVar5);
      System_ArgumentException___ctor(uVar2,uVar3,uVar6,0);
      goto LAB_0757aa64;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar5 = &DAT_0921a5b0;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar5);
  uVar6 = thunk_FUN_03fc39d4(&DAT_09202970);
  System_ArgumentNullException___ctor(uVar2,uVar3,uVar6,0);
LAB_0757aa64:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091cc1c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

